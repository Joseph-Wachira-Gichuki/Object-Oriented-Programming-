#include <iostream>
using namespace std;

 int main() {

int netIncome, salary, yearsOfservice, bonus;
cout<<"Enter basic salary: ";
cin>>salary;
cout<<"Enter number of years youve been in serving: ";
cin>>yearsOfservice;

if (yearsOfservice>=20){
	bonus = salary*20/100;
	cout<< "Bonus :"<<bonus<<endl;
}
else if (yearsOfservice<20&& yearsOfservice>=15){
	bonus = salary*15/100;
	cout<< "Bonus :"<<bonus<<endl;
}
else if (yearsOfservice<15 && yearsOfservice>=10){
	bonus = salary*10/100;
	cout<< "Bonus :"<<bonus<<endl;
}
else if(yearsOfservice<10 && yearsOfservice>=5){
	bonus = salary*5/100;
	cout<< "Bonus :"<<bonus<<endl; 
}
else
	cout<<"You are not eligible for bonus."<<endl;

netIncome= salary + bonus;
cout<<"Your net income is :"<<netIncome;

return 0;
 }



 