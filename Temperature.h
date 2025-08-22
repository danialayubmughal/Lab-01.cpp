#include<iostream>
using namespace std;
class Temperature{
	public:
		float celsius;
		float convertToFahrenheit(){
			return (celsius*9/5)+32;
		}
		void displayFahrenheit(){
			cout<<"Temperature in fahrenheit:"<<convertToFahrenheit()<<endl;
		}
};
