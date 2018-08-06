#include<iostream>
using namespace std;

void upperBond(int arr[10][10],int m,int n){
	int temp1=0;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			temp1=temp1+arr[i][j];
		}
		n=n-1;
	}
	cout<<"\nSum of upper triangular elements is : "<<temp1;
}

void lowerBond(int arr[10][10],int m,int n){
	int temp2=0,k=0;
	
	for(int i=m-1;i>=0;i--){
		for(int j=n-1;j>=k;j--){
			temp2=temp2+arr[i][j];
		}
		k +=1;
	}
	
	cout<<"\nSum of lower triangular elements is : "<<temp2;
}

int main(){
	int arr[10][10];
	int n,m,temp1=0,temp2=0;
	
	cout<<"\nEnter the number of rows and coloumns u want : ";
	cin>>m>>n;
	
	cout<<"\nEnter the elements in d array : ";
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"\nEnter data : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\nEntered matrix is : \n";
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"	"<<arr[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	upperBond(arr,m,n);
	lowerBond(arr,m,n);
	return 0;
}
