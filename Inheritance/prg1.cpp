#include<iostream>
using namespace std;
class emp{
    public:
    emp(){
        cout<<"employee constructor"<<endl;
    }
};
class man:public emp{
    public:
    man(){
        cout<<"manager constructor"<<endl;

    }
     
};


// class family(){
//     family(){
//         cout<<"family constructor"

//     }
     
// };
// class director:public family,public man{
//     public:
//     director(){
//         cout<<"director constructor"<<endl;
//     }
// }







class director:public man{
    public:
    director(){
        cout<<"director constructor"<<endl;
    }
};
int main(){
    // emp e;
    // man m;
    director d;
    return 0;
}