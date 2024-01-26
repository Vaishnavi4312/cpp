#include <iostream>
#include <cmath>
#include "MyComplex.hpp"
using namespace std;

//:: scope resolution operator
MyComplex ::MyComplex()
{
    real = 0;
    img = 0;
}

void MyComplex::print_add()
{
    cout << real << "+" << img << "i";
}
void MyComplex::print_sub()
{
    cout << real << "-" << img << "i";
}
void MyComplex::print_multi()
{
    cout << real << "*" << img << "i";
}
void MyComplex::print_div()
{
    cout << real << "/" << img << "i";
}
void MyComplex::print_norm()
{
    cout << real << "+" << img << "i";
}
void MyComplex::print_compexConjugate()
{
}

void MyComplex::add(MyComplex c1, MyComplex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

void MyComplex::sub(MyComplex c1, MyComplex c2)
{
    real = c1.real - c2.real;
    img = c1.img - c2.img;
}

void MyComplex::multi(MyComplex c1, MyComplex c2)
{
    real = c1.real * c2.real - c1.img * c2.img;
    img = c1.real * c2.img + c1.img * c2.real;
}

void MyComplex::div(MyComplex c1, MyComplex c2)
{
    real = (c1.real * c2.real + c1.img * c2.img) / (c2.real * c2.real + c2.img * c2.img);
    img = (c1.real * c2.img + c1.img * c2.real) / (c2.real * c2.real + c2.img * c2.img);
}

void MyComplex::norm(MyComplex c1, MyComplex c2)
{
    real = sqrt(c1.real * c1.real + c1.img * c1.img);
    img = sqrt(c2.real * c2.real + c2.img * c2.img);
}

void MyComplex::complexConjugate(MyComplex c1, MyComplex c2)
{
    if (img < 0)
    {
        cout << c1.real << "+" << -c1.img << "i" << endl;
        cout << c2.real << "+" << -c2.img << "i" << endl;
    }
    else
    {
        cout << c1.real << "-" << c1.img << "i" << endl;
        cout << c2.real << "-" << c2.img << "i" << endl;
    }
}
