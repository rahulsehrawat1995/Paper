#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string str1;
	
	cout<<"\nEnter the string : ";
	cin>>str1;
	
	int n=str1.length();
	int k=n;
	
	for(int i=n;i>0;i--){
		if (str1[i]=='.') {
			for(int j=i+1;j<k;j++){
			cout<<str1[j];
		}
			cout<<".";
			k -=i-1;
	}
}
	return 0;
}
