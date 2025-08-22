#include<iostream>
using namespace std;
class Voter{
	private:
	string name;
	int age;
	public:
	void setData();
	bool isEligible();
};
void Voter::setData(){
cout<<"Enter name"<<endl;	
cin>>name;
cout<<"Enter age"<<endl;
cin>>age;
}
bool Voter::isEligible(){
	return age>=18;
}

