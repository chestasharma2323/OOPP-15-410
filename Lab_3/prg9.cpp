#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void input(int x = 0, int y = 0);
    void show();
};

void Number::input(int x, int y)
{
    a = x;
    b = y;
}

void Number::show()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    Number n1, n2;

    n1.input(10, 20);
    n1.show();

    cout << endl;

    n2.input();       // No value -> 0, 0
    n2.show();

    return 0;
}