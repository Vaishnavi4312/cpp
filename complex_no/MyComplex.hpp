// Class is a template
class MyComplex
{
public:
    double real;
    double img;

    // Default constructor
    MyComplex();

    // Function to print complex number
    void print_add();
    void print_sub();
    void print_multi();
    void print_div();
    void print_norm();
    void print_compexConjugate();

    void add(MyComplex, MyComplex);
    void sub(MyComplex, MyComplex);
    void multi(MyComplex, MyComplex);
    void div(MyComplex, MyComplex);
    void norm(MyComplex, MyComplex);
    void compexConjugate(MyComplex, MyComplex);
};
