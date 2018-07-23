#include<iostream>
using namespace std;

int main(){
	 int n,temp1=0,temp2=0,arr[50];
	
	cout<<"\nEnter number of elements in array : ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nEnter value : ";
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>temp1){
			temp1 = arr[i];
		}
		else{
			if(arr[i]>temp2){
				temp2=arr[i];
			}
		}
	}
	
	
	cout<<"\nMaximum sum of "<<temp1<<"+"<<temp2<<"="<<temp1+temp2;
	
	return 0;
}
