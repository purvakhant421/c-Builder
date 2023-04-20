#include<iostream>
#include<string.h>

using namespace std;
class student  {
	private:
		char name[100];
		int roll_no;
		char course[100];

	public: 
        void setdata(){
        	cout<<endl<<"enter student name :  ";
        	cin>>name;
        	cout<<"enter student roll no :  ";
        	cin>>roll_no;
        	cout<<"enter student course :  ";
        	cin>>course;
		}
		void getdata(){
			cout<<endl<<"enter student name :  "<<name<<endl;
        	cout<<"enter student roll no : "<<roll_no<<endl;
        	cout<<"enter student course :  "<<course<<endl;
        
		}
		
};

int main(){
	int n,x;
	cout<<"enter student count for data "<<endl;
	cin>>n;
	student arr[n];
	for(x=0;x<n;x++){
		arr[x].setdata();
	}
	for(x=0;x<n;x++){
		arr[x].getdata();
	}
	
	return 0;
}