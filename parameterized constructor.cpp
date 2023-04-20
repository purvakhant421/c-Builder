#include<iostream>

using namespace std;
class parameterized {
	private:
		int a;
		int b;
	public: parameterized(){
		cout<<"default"<<endl;
	}
	
	parameterized (int x,int y){
		int c;
		c=x+y;
		cout<<"sum of two number : "<<c;
		
	}
};

int main(){
	parameterized obj;
	parameterized obj1(100,20);

	
	return 0;
}
