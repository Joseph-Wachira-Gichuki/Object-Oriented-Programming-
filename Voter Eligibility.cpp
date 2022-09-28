//Checking Voter Eligibility
#include <iostream>
using namespace std;
int main(){
	int age, kenyan, registeredVoter;;
	
	
	cout<<"Are you a Kenyan?\n 1. Yes \n 2. No"<<endl;
	cin>>kenyan;
	if (kenyan=1){
				
	}
	else
	{
		cout<<"Voter Details Error";
		return 0;
	}
	cout<<"Are you registered as a voter?\n 1. Yes \n 2. No"<<endl;
	cin>>registeredVoter;
	if(registeredVoter=1){
		
	}
	else
	{
		cout<<"Voter Details Error";
		return 0;
	}
	
	age;
	cout<<"Enter your age?\n";
	cin>>age;
	if(age>=18){
		cout<<"You are eligible for voting.";
	}
	else
	{
	cout<<"You are not eligible for voting.";	
	}
	
	
return 0;	
}