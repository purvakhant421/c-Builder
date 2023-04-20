#include<iostream>

using namespace std;

class constructor {
	private:
	   int id;
	   char name[100];
	
	public:
	constructor(){
		cout<<"default constructor or no argument constructor";
		
	}
};


int main(){
	constructor obj;
	
	return 0;
}

