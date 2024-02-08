#include <iostream>
#include "MyComplex.hpp"
using namespace std;

int main()
{
    MyComplex c1, c2, c3;

    c1.real = 9;
    c1.img = 5;
    cout << endl;
    c1.print();
    cout << endl;

    c2.real = 3;
    c2.img = 4;
    cout << endl;
    c2.print();
    cout << endl;

    c3.print();
    cout << endl;

    cout << endl;
    cout << "addition : " << endl;
    c3.add(c1, c2);
    c3.print();
    cout << endl;

    cout << endl;
    cout << "subtraction : " << endl;
    c3.sub(c1, c2);
    c3.print();
    cout << endl;

    cout << endl;
    cout << "multiplication : " << endl;
    c3.multi(c1, c2);
    c3.print();
    cout << endl;

    cout << endl;
    cout << "division : " << endl;
    c3.div(c1, c2);
    c3.print();
    cout << endl;

    cout << endl;
    cout << "norm : " << endl;
    c3.norm(c1, c2);
    c3.print();
    cout << endl;

    cout << endl;
    cout << "Conjugate : " << endl;
    c3.Conjugate(c1, c2);
    c3.print();
    cout << endl;
    return 0;
}