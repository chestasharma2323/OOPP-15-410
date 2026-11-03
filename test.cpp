#include<iostream>
using namespace std;
class student{
    private:
    int marks=90;
    friend class teacher;
};
class teacher{
    public:
    void display(student s){
        cout<<"marks="<<s.marks;
    }
};
int main(){
    student s;
    teacher t;
    t.display(s);
return 0;
}



















// #include<iostream>
// using namespace std;
// class bank{
//     private:
//     int balance=1;
//     public:
//     void deposit(int amt){
//         if(amt>0){
//             balance+=amt;
//         }
//     }
//     void display(){
//         cout<<balance;
//     }
// };
// int main(){
//     bank b;
//     b.deposit(200);
//     b.display();
// return 0;
// }
















//   #include<iostream>
//  using namespace std;
//  class ma{
//     public:
//     int squ(int n);
//  };
//  inline int ma::squ(int n){
//     return n*n;
//  }
//  int main(){
//     ma m;
//     cout<<m.squ(2);
//  return 0;
//  }
































//  #include<iostream>
//  using namespace std;
//  class student{
//     private:
//     string name;
//     int roll;
//     float marks;
//     public:
//     void set(string n,int r,float m){
//         name=n;
//         roll=r;
//         marks=m;
//     }
//     void display(){
//         cout<<name;
//         cout<<roll;
//         cout<<marks;
//     }

//  };
//  int main(){
//     student s1,s2;
//     s1.set("chesta",1,89);
//     s2.set("pari",3,87);
//     s1.display();
//     s2.display();
//  return 0;
//  }





















// #include<iostream>
// #include<cstdarg>
// using namespace std;
// int sum(int n,...){
//     va_list args;
//     va_start(args,n);
//     int total=0;
//     for(int i=0;i<n;i++){
//         total+=va_arg(args,int);
//     }
//     va_end(args);
//     return total;
// }
// int main(){
//     cout<<sum(2,2,2);

// return 0;
// }

























// #include<iostream>
// #include<cstdarg>
// using namespace std;
// int add(int n,...){
//     va_list args;
//     va_start(args,n);
//     int total=0;
//     for(int i=0;i<n;i++){
//         total+=va_arg(args,int);
//     }
//     va_end(args);
//     return total;


// }
// int main(){
//     cout<<add(3,1,2,3);
// return 0;
// }




















// #include<iostream>
// using namespace std;
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int max(int a,int b,int c){
//     if(a>b&&a>c){
//         return a;
//     }
//     else if(b>c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }
// int main(){
//     cout<<"max="<<max(2,4);
//     cout<<"max="<<max(1,5,2);
// return 0;
// }























// #include<iostream>
// using namespace std;
// inline int square(int x){
//     return x*x;
// }
// int main(){
//     cout<<"square="<<square(5);
// return 0;
// }













// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x=10,y=20;
//     cout<<"Before Swap:x="<<x<<" ,y="<<y<<endl;
//     swap(&x,&y);
//       cout<<"After Swap:x="<<x<<" ,y="<<y<<endl;
// return 0;
// }










//include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int &ref=x;
//     cout<<x<<endl;
//     ref=20;
//     cout<<x<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// class a{
//     public:
//     void show(){
//         cout<<"a"<<endl;
//     }
// };
// class b{
//     public:
//     void show(){
//         cout<<"b"<<endl;

//     }
// };
// class c:public a,public b{
//     public:
//     void show(){
//         a::show();
//         b::show();
//     }
// };
// int main(){
//     c obj;
//     obj.show();

// return 0;
// }


// #include<iostream>
// using namespace std;
// class base{
//     public:
//     void show(){
//         cout<<"base";
//     }
// };
// class derived:public base{
//     public:
//     void show(){
//         base::show();
//         cout<<endl;
//         cout<<"derived";
//     }
// };
// int main(){
//     derived d;
//     d.show();
// return 0;
// }







// #include<iostream>
// using namespace std;
// class math{
//     public:
//     static int square(int n){
//         return n*n;
//     }
// };
// int main(){
//     cout<<math::square(6);

// return 0;
// }


// #include<iostream>
// using namespace std;
// class counter{
//     public:
//     static int count;
// };
// int counter::count=0;
// int main(){
//     counter::count=5;
//     cout<<counter::count;

// return 0;
// }


 


// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     void show();
// };
// void Student::show(){
//     cout<<"hello";
// }
// int main(){
//     Student s;
//     s.show();
// return 0;
// }




// #include<iostream>
// using namespace std;
// int a=10;
// int main(){
//     int a=5;
//     cout<<a<<endl;
//     cout<<::a<<endl;
// return 0;
// }



// #include<iostream>
// using namespace std;
// class bankAccount{
//     public:
//     string AccHolder;
//     double balance;

//     void deposit(double amount){
//         balance+=amount;
//     }
//     void show(){
//         cout<<"Balance="<<balance<<endl;
//     }

// } ;
// int main(){
//     bankAccount a;
//     a.AccHolder="chesta";
//     a.balance=5000;
//     a.deposit(20000);
//     a.show();
// return 0;
// }




// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     int roll;
//     public:
//     void set(string n,int r){
//         name=n;
//         roll=r;
//     }
//     void show(){
//         cout<<"name="<<name<<endl;
//         cout<<"roll="<<roll<<endl;
//     }

// };
// int main(){
//     Student s;
//     s.set("Chesta",10);

//     s.show();
// }
