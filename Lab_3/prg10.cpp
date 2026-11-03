 #include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    inline void input(int x = 0, int y = 0);
    inline void show();
};

inline void Number::input(int x, int y)
{
    a = x;
    b = y;
}

inline void Number::show()
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

    n2.input();
    n2.show();

    return 0;
}