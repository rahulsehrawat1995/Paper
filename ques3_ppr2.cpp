#include<iostream>
using namespace std;

int main(){
	int arr[50],n,temp1=0,temp2;
	
	cout<<"\nEnter number of elements in array : ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Enter data : ";
		cin>>arr[i];
	}
	
	temp2 = arr[0];
	
	for(int i=0;i<n;i++){
		if(temp1<=arr[i]){
			temp1 = arr[i];
		}
		else if(temp2>arr[i]){
			temp2=arr[i];
		}
		else{
			temp1 = temp1;
		}
	}
	
	cout<<"\nMaximum number is : "<<temp1<<"\nMin number is : "<<temp2;
	
	return 0;
}
