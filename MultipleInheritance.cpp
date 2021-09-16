#include<iostream>
#include <string>
using namespace std;
string n1,b,a,n,l;
int h,w,p,d,m,y;

class A{
    public:
    void details_1(){
        cout<<"Enter your name:";
        cin>>n1;
        cout<<"Enter your D.O.B - in format dd mm yy:";
        cin>>d>>m>>y;
        cout<<"Enter your Blood Group:";
        cin>>b;
    }
};

class B{
    public:
    void details_2(){
        cout<<"Enter your Height:";
        cin>>h;
        cout<<"Enter your weight:";
        cin>>w;
    }
};

class C{
    public:
    void details_3(){
        cout<<"Enter your Insurance Policy Number:";
        cin>>p;
        cout<<"Enter your Contact Address:";
        cin>>a;
    }
};

class D:public A,public B,public C{
    public:
    void details_4(){
        cout<<"Enter your Telephone Number:";
        cin>>n;
        cout<<"Enter your driving license:";
        cin>>l;
    }
    
    void show(){
        cout<<"Personal Information or Details of employees:"<<endl;
        cout<<"Name ="<<n1<<endl;
        cout<<"D.O.B ="<<d<<"/"<<m<<"/"<<y<<endl;
        cout<<"Blood Group ="<<b<<endl;
        cout<<"Height in cm = "<<h<<endl;
        cout<<"Weight in kg ="<<w<<endl;
        cout<<"Insurance Policy Number ="<<p<<endl;
        cout<<"Contact Address ="<<a<<endl;
        cout<<"Telephone Number ="<<n<<endl;
        cout<<"Driving License Number ="<<l<<endl;
    }
};

int main(){
    D obj1;
    obj1.details_1();
    obj1.details_2();
    obj1.details_3();
    obj1.details_4();
    obj1.show();
}