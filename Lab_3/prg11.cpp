#include <iostream>
using namespace std;

class Calculator
{
public:

    // Addition
    inline int add(int a, int b = 0)
    {
        return a + b;
    }

    // Subtraction
    inline int subtract(int a, int b = 0)
    {
        return a - b;
    }

    // Multiplication
    inline int multiply(int a, int b = 1)
    {
        return a * b;
    }

    // Division
    inline double divide(double a, double b = 1)
    {
        return a / b;
    }

    // Function overloading
    inline double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Addition = " << c.add(10, 20) << endl;
    cout << "Addition = " << c.add(10) << endl;

    cout << "Subtraction = " << c.subtract(20, 5) << endl;
    cout << "Subtraction = " << c.subtract(20) << endl;

    cout << "Multiplication = " << c.multiply(5, 4) << endl;
    cout << "Multiplication = " << c.multiply(5) << endl;

    cout << "Division = " << c.divide(20, 5) << endl;
    cout << "Division = " << c.divide(20) << endl;

    cout << "Double Addition = " << c.add(2.5, 3.5) << endl;

    return 0;
}