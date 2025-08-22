#include<iostream>
using namespace std;
class Product{
	private:
	string name;
	double price;
	int quantity;
	public:
	void setName(string n){
		if(n.empty()){
			cout<<"Invalid name."<<endl;
		}else{
			name=n;
		}
	}
	void setPrice(double p){
		if(p>0)
		price=p;
		else 
		cout<<"Price must be positive:"<<endl;
	}
	void setQuantity(int q){
		if(q>0)
		quantity=q;
		else
		cout<<"Quantity can not be negative:"<<endl;
	}
	string getName(){
		return name;
	}
    double getPrice(){
		return price;
	}
	int getQuantity(){
		return quantity;
	}
};
