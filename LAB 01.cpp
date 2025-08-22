#include<iostream>
#include"Student.h"
#include"Rectangle.h"
#include"Voter.h"
#include"Temperature.h"
#include"Calculator.h"
#include"Product.h"
using namespace std;
int main(){

	cout<<"=================task 02========================="<<endl;
	Rectangle r;
	r.setDimension();
	cout<<"Area:"<<r.area()<<endl;
	cout<<"Perimeter:"<<r.perimeter()<<endl;
	cout<<"=================task 03========================="<<endl;
	Voter v;
	v.setData();
	if (v.isEligible())
		cout<<"Eligible for vote:"<<endl;
		else  
		cout<<"Not eligible for vote:"<<endl;	
	cout<<"=================task 04========================="<<endl;
	Temperature t;
	cout<<"Enter temperature in celcius:"<<endl;
	cin>>t.celsius;
	t.displayFahrenheit();
	cout<<"=================task 05========================="<<endl;
	Calculator c(2,5);
	cout<<"Addition:"<<c.add()<<endl;
	cout<<"Subtraction:"<<c.subtract()<<endl;
	cout<<"Multiplication:"<<c.multiply()<<endl;
	cout<<"Division:"<<c.divide()<<endl;
	
	cout<<"=================task 06========================="<<endl;
	Product p;
	p.setName("bat");
	p.setPrice(10000);
	p.setQuantity(2);
	cout<<"Product:"<<p.getName()<<endl;
	cout<<"price:"<<p.getPrice()<<endl;
	cout<<"Quantity:"<<p.getQuantity()<<endl;	
}
