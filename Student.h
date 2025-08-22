#include<iostream>
using namespace std;
class Student{
	string name;
	int rollNumber;
	float marks;
	public:
	void getData(){
		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter roll number:"<<endl;
		cin>>rollNumber;
		cout<<"Enter marks:"<<endl;
		cin>>marks;
	}
	void displayData(){
		cout<<"Name:"<<name<<endl;
		cout<<"Roll Number:"<<rollNumber<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};
