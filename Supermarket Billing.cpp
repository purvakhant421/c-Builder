#include<iostream>
#include<string.h>

using namespace std;
class Item  {
	
	public: 
		int Item_Number;
		char Item_Name[100];
		int Quantity;
		char Tax[100];
		char Discount[100];
        int setter(){
        	cout<<endl<<"enter Item Number :  ";
        	cin>>Item_Number;
        	cout<<"enter Item Name :  ";
        	cin>>Item_Name;
        	cout<<"enter Quantity  :  ";
        	cin>>Quantity;
        	cout<<"enter Tax  :  ";
        	cin>>Tax;
        	cout<<"enter Discount  :  ";
        	cin>>Discount;
        	
        	return Item_Number;
		}
		void getter(){
			cout<<endl<<"enter Item Number :  "<<Item_Number<<endl;
        	cout<<"enter Item Name :  "<<Item_Name<<endl;
        	cout<<"enter Quantity  :  "<<Quantity<<endl;
        	cout<<"enter Tax  :  "<<Tax<<endl;
        	cout<<"enter Discount  :  "<<Discount<<endl;
		}
};


int main(){
	
	Item obj1[2];
	int i,j,a[10];
	
	for(i=0 ; i<=1 ; i++){
		a[i] = obj1[i].setter();
	}
	

	for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<2; j++) { 
		
			if(a[i]>a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }	
    
	for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++) { 
		
			if(obj1[j].Item_Number == a[i]) {
				
               obj1[j].getter();
            }
        }
    }	
    
    return 0;
}