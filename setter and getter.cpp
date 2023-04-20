#include<iostream>
#include<string.h>

using namespace std;

class Employee {

	public:
		char id[100], name[100], role[100], salary[100], experience[100],address[100], email[100], contact[100]; 
		void setdata();
		void getdata();
};
 void Employee:: setdata(){
	cout<<endl<<"Enter Employee Id : ";
	cin>>id;
	cout<<"Enter Employee name : ";
	cin>>name;
	cout<<"Enter Employee role : ";
	cin>>role;
	cout<<"Enter Employee salary : ";
	cin>>salary;
	cout<<"Enter Employee experience : ";
	cin>>experience;
	cout<<"Enter Employee address : ";
    cin>>address;
	cout<<"Enter Employee email : ";
	cin>>email;
	cout<<"Enter Employee contact : ";
	cin>>contact;
}
 void Employee:: getdata(){
	cout<<endl<<"Employee Id : "<<id<<endl;
	cout<<"Employee name : "<<name<<endl;
	cout<<"Employee role : "<<role<<endl;
	cout<<"Employee salary : "<<salary<<endl;
	cout<<"Employee experience : "<<experience<<endl;
	cout<<"Employee address : "<<address<<endl;
	cout<<"Employee email : "<<email<<endl;
	cout<<"EnEmployee contact : "<<contact<<endl;

}



int main(){
	
	Employee obj[3];

int u;
cout<<"enter employee data"<<endl;
for(u=0;u<3;u++){
	obj[u].setdata();
}

cout<<"get employee data"<<endl;
	for(u=0;u<3;u++){
	obj[u].getdata();
}
	return 0;
}