#include <iostream>

using namespace std;

int main(){
	int x[3] = {1,5,4};
	int y[3] = {3,2,5};
	
	for(int i=0;i<3;i++){
		cout<<"Array X "<<i<<" : "<<x[i]<<endl;
	}
	cout<<endl;
	for(int j=0;j<3;j++){
		cout<<"Array Y "<<j<<" : "<<y[j]<<endl;
	}
	cout<<endl;
	for(int a=0;a<3;a++){
		cout<<"Array Penjumlahan "<<a<<" : "<<x[a]+y[a]<<endl;
	}
}
