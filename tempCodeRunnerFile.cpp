#include<iostream>
using namespace std;
float l,b,bt,h,a1,a2;

class polygon{
	public:
	virtual int area(){
	return 0;
	}
};

class rectangle:public polygon{
	public:
	int area(){
		cout<<"Enter length of the rectangle:";
		cin>>l;
		cout<<"Enter breadth of the rectangle:";
		cin>>b;
		a1=l*b;
		return a1;
	}
};

class triangle:public polygon{
	public:
	int area(){
		cout<<"Enter base of triangle:";
		cin>>bt;
		cout<<"Enter height of triangle:";
		cin>>h;
		a2=0.5*bt*h;
		return a2;
	}
};

int main(){
	polygon *bptr;
	polygon obj_1;
	rectangle obj_2;
	triangle obj_3;
	bptr=&obj_2;
	bptr->area();
	bptr=&obj_3;
	bptr->area();
	cout<<"Area of Rectangle:"<<a1<<endl;
	cout<<"Area of Triangle:"<<a2<<endl;
	return 0;
}