#include<iostream>
using namespace std;
class Calculator{
public:
float num1;
float num2;
public:
	Calculator(float a,float b){
		num1=a;
		num2=b;
	}
	
float add(){
	return num1+num2;
}
float subtract(){
	return num1-num2;
} 
float multiply(){
	return num1*num2;
}	
float divide(){
	if(num2!=0)
	return num1/num2;
}
};