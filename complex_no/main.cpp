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

    / multiplication
    cout << "Print the initial value of c1: ";
    c1.print_multi();
    cout << endl;

    c1.real = 3;
    c1.img = 2;
    cout << "Print the value of c1:  ";
    c1.print_multi();
    cout << endl;

    // c2.print_multi();

    c2.real = 5;
    c2.img = 3;
    cout << "Print the value of c2:  ";
    c2.print_multi();
    cout << endl;

    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.real * c2.img + c1.img * c2.real;
    cout << "Print the value c3 without multi() function call : ";
    c3.print_multi();
    cout << endl;

    cout << "print the value c3 with multi() function call: ";
    c3.multi(c1, c2);
    c3.print_multi();
    cout << endl;

    // division
    cout << "Print the initial value of c1: ";
    c1.print_div();
    cout << endl;

    c1.real = 4;
    c1.img = 2;
    cout << "Print the value of c1:  ";
    c1.print_div();
    cout << endl;

    // c2.print_div();

    c2.real = 4;
    c2.img = 2;
    cout << "Print the value of c2:  ";
    c2.print_div();
    cout << endl;

    c3.real = (c1.real * c2.real + c1.img * c2.img) / (c2.real * c2.real + c2.img * c2.img);
    c3.img = (c1.real * c2.img + c1.img * c2.real) / (c2.real * c2.real + c2.img * c2.img);
    cout << "Print the value c3 without div() function call : ";
    c3.print_div();
    cout << endl;

    cout << "print the value c3 with div() function call: ";
    c3.div(c1, c2);
    c3.print_div();
    cout << endl;

    // norm
    cout << "Print the initial value of c1: ";
    c1.print_norm();
    cout << endl;

    c1.real = 4;
    c1.img = 2;
    cout << "Print the value of c1:  ";
    c1.print_norm();
    cout << endl;

    // c2.print_norm();

    c2.real = 4;
    c2.img = 2;
    cout << "Print the value of c2:  ";
    c2.print_norm();
    cout << endl;

    c3.real = sqrt(c1.real * c1.real + c1.img * c1.img);
    c3.img = sqrt(c2.real * c2.real + c2.img * c2.img);
    cout << "Print the value c3 without norm() function call : ";
    c3.print_norm();
    cout << endl;

    cout << "print the value c3 with norm() function call: ";
    c3.div(c1, c2);
    c3.print_norm();
    cout << endl;

    // complexConjugate
    cout << "Print the initial value of c1: ";
    c1.print_complexConjugate();
    cout << endl;

    c1.real = 4;
    c1.img = 2;
    cout << "Print the value of c1:  ";
    c1.print_complexConjugate();
    cout << endl;

    // c2.print_complexConjugate();

    c2.real = 4;
    c2.img = 2;
    cout << "Print the value of c2:  ";
    c2.print_complexConjugate();
    cout << endl;

    if (img < 0)
    {
        c3.real =  c1.real << "+" << -c1.img << "i";
        c3.img = c2.real << "+" << -c2.img << "i";
    }
    else
    {
        c3.real = c1.real << "-" << c1.img << "i";
        c3.img =  c2.real << "-" << c2.img << "i";
    }
    cout << "Print the value c3 without complexConjugate() function call : ";
    c3.print_complexConjugate();
    cout << endl;

    cout << "print the value c3 with complexConjugate() function call: ";
    c3.div(c1, c2);
    c3.print_complexConjugate();
    cout << endl;
    
    return 0;
}
