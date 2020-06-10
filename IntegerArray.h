#ifndef _INTEGERARRAY_H_
#define _INTEGERARRAY_H_

#include <iostream>

using namespace std;

class IntegerArray {

    private:
        int size;
        int current;
        int *arr;
    public:
        IntegerArray(int size) {
            this->current = 0;
            this->size = size;
            this->arr = new int[this->size];            
        }

        IntegerArray(const IntegerArray &o) {
            this->size = o.size;
            this->arr = new int[this->size];
            for(int i = 0; i < this->size; i++)
                this->arr[i] = o.arr[i];
        }

        void insert(int element, int pos) {
            
            if(this->current <= this->size){
                this->arr[pos-1] = element;
                this->current += 1;
            }
            if(pos > this->size){
                cout << "Error, limite de "
                     << this->size << " elementos se añadio una posicion y su elemento se coloco al final" << endl;
                this->size += 1;
                this->arr[this->size - 1] = element;
                this->current += 1;
                }

        }

        void push_back(int element) {
            this -> size += 1;
            this->arr[this->size - 1] = element;
        }

        void remove_back() {
            /* delete this-> arr[this->size-1];
            arr[size-1]=NULL;*/
            this->size -= 1;
            //delete[] arr;
        }

        void remove(int pos) {
            for (int i = pos; i < this->size - 1;i++){
                this->arr[i] = this->arr[i + 1];
            }
            this->size -= 1;
            //delete this->arr[this->size-1];
            //this->arr[pos] = 100;
        }

        int getSize() const {
            return this->size;
        }

        bool isEmpty () const {
            return (this->size > 0 ? false : true); 
        }

        bool isFull() const {
            return (this->size > 0 ? true : false);
        }

        void print() const {
            cout << "[ ";
            for(int i = 0; i < this->size; i++)
                cout << arr[i] << "  ";
            cout << "]" << endl;
        }

        ~IntegerArray() {
            delete[] arr;
        }       

};

#endif