#include <iostream>

#include "MyComplex.hpp"

using namespace std;

int main()
{
    // class template
    MyComplex c1, c2, c3;
    cout << "Print the initial value of c1: ";
    c1.print_add();

    c1.real = 10;
    c1.img = 5;

    cout << endl;
    cout << "Print the value of c1: ";
    c1.print_add();
    cout << endl;

    cout << "Print the initial value of c2: ";
    c2.print_add();

    c2.real = 3;
    c2.img = 2;

    cout << endl;
    cout << "Print the value of c2: ";
    c2.print_add();
    cout << endl;

    // add
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    cout << endl;
    cout << "Addition of c1 and c2 without add() function call: ";
    c3.print_add();
    cout << endl;

    c3.add(c1, c2);
    cout << "Addition of c1 and c2 with add() function call: ";
    c3.print_add();
    cout << endl;

    // subtraction
    cout << "Print the initial value of c1: ";
    c1.print_sub();
    cout << endl;

    c1.real = 10;
    c1.img = 9;
    cout << "Print the value of c1:  ";
    c1.print_sub();
    cout << endl;

    // c2.print_sub();

    c2.real = 6;
    c2.img = 2;
    cout << "Print the value of c2:  ";
    c2.print_sub();
    cout << endl;

    c3.real = c1.real - c2.real;
    c3.img = c1.img - c2.img;
    cout << "Print the value c3 without sub() function call : ";
    c3.print_sub();
    cout << endl;

    cout << "print the value c3 with sub() function call: ";
    c3.sub(c1, c2);
    c3.print_sub();
    cout << endl;

    return 0;
}
