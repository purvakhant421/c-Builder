#include<iostream>
#include<string.h>

using namespace std;

class HighSchool {
	
	private:
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		int stu_contact;
	static char stu_edu_institute_name [100];
		char stu_address[100];
		
		public:
			void setdata();
			void getdata();
};
char HighSchool :: stu_edu_institute_name[100] = "n. m. sheth kumar vidhyalaya";
void HighSchool :: setdata(){
	    cout<<endl<<"enter student id : ";
     	cin>>id;
     	cout<<"enter student name : ";
		cin>>stu_name;
		cout<<"enter student roll no : ";
		cin>>stu_roll_no;
		cout<<"enter student standard : ";
		cin>>stu_standard;
		cout<<"enter student age : ";
		cin>>stu_age;
		cout<<"enter student contact : ";
		cin>>stu_contact;
		cout<<"enter student address : ";
		cin>>stu_address;
}
void HighSchool :: getdata(){
	cout<<endl<<"student id : "<<id<<endl;
	cout<<"student name : "<<stu_name<<endl;
	cout<<"student roll no : "<<stu_roll_no<<endl;
	cout<<"student standard : "<<stu_standard<<endl;
	cout<<"student age : "<<stu_age<<endl;
	cout<<"student contact : "<<stu_contact<<endl;
	cout<<"student institute name : "<<stu_edu_institute_name<<endl;
	cout<<"student address : "<<stu_address<<endl;
}
	
int main(){
	HighSchool obj[3];
	int x;
	for(x=0;x<3;x++){
		obj[x].setdata();
	}
	for(x=0;x<3;x++){
		obj[x].getdata();
	}
	return 0;
}