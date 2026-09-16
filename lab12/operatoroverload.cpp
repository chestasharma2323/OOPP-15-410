// #include<iostream>

// using namespace std;
// class complex{
//     int real,img;
// public:
//     complex(int r=0, int i=0):real(r),img(i){}
//     void show(){
//         cout<<real<<","<<img<<endl;
//     }
//     complex operator + (complex c){
//         return complex(real+c.real,img+c.img);
//     }
// };

// int main(){
//     complex c1{5,10},c2{10,20},c3;
//     c3 = c1+c2;
//     c1.show();
//     c2.show();
//     c3.show();
// return 0;
// }
 


#include<iostream>
using namespace std;
class comp{
    int real,img;
    public:
    comp(int r=0,i=0);
    real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
};

// operator overloading using +
#include <iostream>
using namespace std;

class comp {
    int real, img;

public:
    comp(int r = 0, int i = 0) : real(r), img(i) {}

    // + operator overloading
    comp operator+(comp c) {
        return comp(real + c.real, img + c.img);
    }
    void show() {
        cout << real << " + " << img << "i" << endl;
    }
};
int main() {
    comp c1(3, 4);
    comp c2(5, 6);

    comp c3 = c1 + c2;
    c3.show();
    return 0;
}
//BY USING THIS POINTER
#include <iostream>
using namespace std;

class comp {
    int real, img;

public:
    comp(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    comp operator+(comp c) {
        comp temp;

        temp.real = this->real + c.real;
        temp.img = this->img + c.img;

        return temp;
    }

    void show() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    comp c1(3, 4);
    comp c2(5, 6);

    comp c3 = c1 + c2;

    c3.show();

    return 0;
}
//OR RETURN COMP(THIS->REAL+C.REAL,THIS->IMG+C.IMG) IN 51 LINE 

//BY USING FRIEND FUNCTION
#include <iostream>
using namespace std;

class comp {
    int real, img;

public:
    comp(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Friend function:
    friend comp operator+(comp c1, comp c2);

    void show() {
        cout << real << " + " << img << "i" << endl;
    }
};

// Friend function definition
comp operator+(comp c1, comp c2) {
    comp temp;

    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}

int main() {
    comp c1(3, 4);
    comp c2(5, 6);

    comp c3 = c1 + c2;

    c3.show();

    return 0;
}

#include <iostream>
using namespace std;

class comp {
    int real, img;

public:
    comp(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    friend comp operator+(comp c1, comp c2);

    void show() {
        cout << real << " + " << img << "i" << endl;
    }
};

comp operator+(comp c1, comp c2) {
    return comp(c.real + d.real, c.img + d.img);
}

int main() {
    comp c1(3, 4);
    comp c2(5, 6);

    comp c3 = c1 + c2;

    c3.show();
    compc4=c1+5;
    c4.show();

    return 0;
}


//c3=10+c1;
comp c3=c1+5