#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {
    
    IntegerArray a(7);    
    //a.arr[0] = 4;
    //a.arr[1] = 2;
    a.print();

    a.insert(17, 8);
    a.print();
    a.push_back(12);
    a.print();
    a.remove_back();
    a.print();

    a.remove(2);
    a.print();

    cout << a.getSize() << endl;
    cout << boolalpha << a.isEmpty() << endl;

    cout << boolalpha << a.isFull() << endl;
    //a.print();
}