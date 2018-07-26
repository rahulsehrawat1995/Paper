#include<iostream>
using namespace std;

void display(int arr[],int size){

	if(size>0)
		cout<<"\n"<<arr[--size];		
	else
		return;
	display(arr,size--);
	
}

int main(){
	int n,arr[50];
	
	cout<<"\n Enter number of elements : ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nEnter data : ";
		cin>>arr[i];
	}
	
	display(arr,n);
	
	return 0;
}
