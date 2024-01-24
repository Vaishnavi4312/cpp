#include <iostream>

#include "MyComplex.hpp"

using namespace std;

int main()
{
    // class template
    MyComplex c1, c2, c3;

    c1.print();

    c1.real = 10;
    c1.img = 5;

    cout << endl;
    c1.print();
    cout << endl;

    c2.print();

    c2.real = 3;
    c2.img = 2;

    cout << endl;
    c2.print();
    cout << endl;

    // add
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    cout << endl;
    c3.print();
    cout << endl;

    c3.add(c1, c2);
    c3.print();
    cout << endl;

    // subtraction
    c1.print();

    c1.real = 10;
    c1.img = 9;

    cout << endl;
    c1.print();
    cout << endl;

    c2.print();

    c2.real = 6;
    c2.img = 2;

    cout << endl;
    c2.print();
    cout << endl;

    c3.real = c1.real - c2.real;
    c3.img = c1.img - c2.img;

    cout << endl;
    c3.print();
    cout << endl;

    c3.sub(c1, c2);
    c3.print();
    cout << endl;

    return 0;
}