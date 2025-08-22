#include<iostream>
using namespace std;
class Rectangle{
	private:
	int length;
	int width;
	public:
	int setDimension();
	int area();
	int perimeter();
};
int Rectangle::setDimension(){
	cout<<"Enter length:"<<endl;
	cin>>length;
	cout<<"Enter width:"<<endl;
	cin>>width;
}
int Rectangle::area(){
	return length*width;
}
int Rectangle::perimeter(){
	return 2*(length+width);
	
}