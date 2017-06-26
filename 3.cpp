	#include <iostream>
	#include <cstring>
	using namespace std;
int main(){
	
	int x=0;
	int c = 0;
	int i = 1;
	string s;
	
	cout<<"Enter the string you would like to examine"<<endl;
	cin>> s;
	
	while(s[x]!='('){
		x++;
	}
	while(i<s.length()-x){
		if(s[x+i]=='('){
			c++;
		}
		if (s[x+i] == ')'){
			if(c==0){
				cout<<"The closing parethesis is at index "<<x+i<<endl;
				i=s.length()-x;
			}
			else{
				c--;
			}
		}
		i++;
	}
}
	

