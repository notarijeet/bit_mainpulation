#include <bits/stdc++.h>
using namespace std;

int main() {
	// converting number to binary;
	int num;
	cin>>num;
	string s = "";
	while(num>0){
	    s.push_back((num%2)+'0');
	    num/=2;
	}
	
	//converting binary to number;
	long long decimal = 0;
	for(int i=0;i<s.size();i++){
	    decimal = (decimal * 2 + (s[i]-'0'));
	}
	
	
	cout<<"number to binary: "<<s<<endl;
	cout<<"binary to number: "<<decimal<<endl;
	
	

}
