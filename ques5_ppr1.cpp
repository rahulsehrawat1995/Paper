#include<iostream>
using namespace std;

int main(){
	string str;
	int n,temp=0,j=1,x;
	
	cout<<"Enter string : ";
	cin>>str;
	
	n = str.size();
	
	for(int i=n-1;i>=0;i--){
		x = str[i];
		temp = temp + (x-48)*j;
 		j=j*10;
	}
	
	cout<<"Your number is : "<<temp;
	
	return 0;
}

