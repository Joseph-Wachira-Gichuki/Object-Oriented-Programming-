//Grading System
#include <iostream>
using namespace std;

int main(){
	int math, english, kiswahili, ssRE, science, sum, Average, n;
	cout <<"Enter marks for five units"<<endl;
	cout <<"Math:";	
	cin>>math;
	cout <<"English:";	
	cin>>english;
	cout <<"Kiswahili:";	
	cin>>kiswahili;
	cout <<"SS/CRE:";	
	cin>>ssRE;
	cout <<"Science:";	
	cin>>science;
	
	n=5;
	sum=math+english+kiswahili+ssRE+science;
	Average=sum/n;
	
	if(Average>=70 && Average<=100){
		cout<<"Grade A - Excellent";
	}
	else if(Average>=60 && Average<70){
		cout<<"Grade B - Very Good";
	}
	else if(Average>=50 && Average<60){
		cout<<"Grade C- Good";
	}
	else if(Average>=40 && Average<=50){
		cout<<"Grade D - Fair";
	}
	else if(Average<40){
		cout<<"Grade E - Fail";
	}
	else
		cout<<"Not Valid"<<endl;	
return 0;
}
