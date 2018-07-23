#include<iostream>
using namespace std;

int main(){
	
	int n,temp=0,arr[50];
	
	cout<<"\nEnter number of elements in array : ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nEnter value : ";
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		temp=arr[i];
		for(int j=i+1;j<n;j++){
			temp +=arr[j];
			if(temp==16){
				cout<<"\n sub array is : ";
				cout<<"\n [";
				for(int k=i;k<=j;k++){
					cout<<arr[k];
					cout<<",";
				}
				cout<<"]";
				temp=0;
			}
			else if(temp>16){
				temp=0;
				break;
			}
		}
	}
	
	return 0;
}
