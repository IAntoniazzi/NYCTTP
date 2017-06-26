	#include <iostream>
	#include <cstring>
	using namespace std;
int main(){
	
	int k;
	string s;
	
	cout<<"Enter the string you would like to reformat"<<endl;
	cin>> s;
	cout<<"Enter the value k"<<endl;
	cin>> k;
	string n = "";
	int r = s.length()%k;
	int x = s.length();
	
	if(r>0){
		for(int i = 0; i<r; i++){
			n+=s[i];
		}
		n+="-";
		x++;
	}
	for(int j=r; j<s.length(); j++){
		n+=s[j];
		if((j+1+r)%k==0&&n.length()!=x){
			n+="-";
			x++;
		}
	}
	cout<< n;
}
	

