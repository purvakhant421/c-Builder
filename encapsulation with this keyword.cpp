#include<iostream>
#include<string.h>

using namespace std;

class Employee {
	private:
	int	id;
	char staff_name[100] ;
	char staff_count[100];
	char room_size[100];
	int establish_year;
	char address[100];
	int	rating ;
	char website[100];

	public:
		void setdata(int id,char staff_name[],char staff_count[],char room_size[],int establish_year,char address[],int rating,char website[])	{
			this->id = id;
			strcpy(this->staff_name,staff_name);
			strcpy(this->staff_count,staff_count);
			strcpy(this->room_size,room_size);
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this->rating=rating;
			strcpy(this->website,website);
       };
       void getdata(){
       	cout<<"staff id : "<<id<<endl;
       	cout<<"staff named : "<<staff_name<<endl;
       	cout<<"staff count : "<<staff_count<<endl;
       	cout<<"room_size : "<<room_size<<endl;
       	cout<<"establish_year : "<<establish_year<<endl;
       	cout<<"address : "<<address<<endl;
       	cout<<"rating : "<<rating<<endl;
       	cout<<"website : "<<website<<endl;
	   }

};

int main(){
	int	id = 11;
	char staff_name[] = "virat";
	char staff_count []= "50";
	char room_size[] = "15feet x 15feet";
	int establish_year = 1991;
	char address[]= "127 bakers street ";
	int	rating = 5 ;
	char website[] = "www.bookmyhotel.com";
	
	Employee obj;
     obj.setdata(id,staff_name,staff_count,room_size,establish_year,address,rating,website);
     obj.getdata();
}