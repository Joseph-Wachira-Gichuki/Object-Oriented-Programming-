#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout<<"Input first number:";
	cin>>num1;
	cout<<"Input second number:";
	cin>>num2;
	cout<<"Input third number:";
	cin>>num3;
		
	if (num1>num2 && num1>num3){
		cout<< "The largest number is "<<num1;
	}
	else if (num2>num1 && num2>num3){
		cout<<  "The largest number is "<<num2;
	}
	else
		cout<< "The largest number is "<<num3;
	
	return 0;
}