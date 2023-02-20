#include<iostream>
using namespace std;
int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2];
	
	//loop to take input matix1 from the user
	cout<<"Enter the values of matrix1\n\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter value of "<<i<<" row and "<<j<<" column: ";
			cin>>arr1[i][j];
		}
	}
	
	//showing elements of matrix1
	cout<<endl;
	cout<<"########################\n";
	cout<<"      Marix 1 is\n";
	cout<<"########################\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//loop to take input matix2 from the user
	cout<<"\nEnter the values of matrix2\n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter value of "<<i<<" row and "<<j<<" column: ";
			cin>>arr2[i][j];
		}
	}
	
	//showing elements of matrix2
	cout<<endl;
	cout<<"########################\n";
	cout<<"     Marix 2 is\n";
	cout<<"########################\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//multiplying both matrices
	cout<<endl;
			cout<<"##################################\n";
			cout<<" The product of both matrices is \n";
			cout<<"##################################\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]*arr2[i][j];
			cout<<arr3[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	
	
	
	
}
