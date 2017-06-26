	#include <iostream>
	using namespace std;
int main(int argc, char *argv[]){
	
	int v,x, y;
	cout<<"Enter the number of terms in Array A"<<endl;
	cin>> x;
	int a[x];
	cout<<"Enter the first term in Array A"<<endl;
	cin>> a[0];
	for(int m = 1; m<x; m++){
		cout<<"Enter the next term in Array A "<<endl;
		cin>>a[m];
	}
	
	cout<<"Enter the number of terms in Array B"<<endl;
	cin>> y;
	int b[y];
	cout<<"Enter the first term in Array B"<<endl;
	cin>> b[0];
	for(int n = 1; n<x; n++){
		cout<<"Enter the next term in Array B "<<endl;
		cin>>b[n];
	}
	
	cout<< "Enter the value v"<<endl;
	cin >>v;
	
	bool flag  = false;
	for(int i = 0; i<x; i++){
		for (int j = 0; j<y; j++){
	   		if(a[i]+b[j] == v){
	      	flag = true;
	   		}	
		}	 
	}

	if(flag ==true){
		cout<<"There is a pair that adds up to v";
	}
	else{
		cout<< "There is no pair that adds up to v";
	}
}
	

