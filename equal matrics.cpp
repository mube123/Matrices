

#include<iostream>
using namespace std;
int main()
{
	int arr1[3][3],arr2[3][3];
	bool flag=false;
	
	//loop to take input matix1 from the user
	cout<<"Enter the values of matrix1\n\n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
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
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//loop to take input matix2 from the user
	cout<<"\nEnter the values of matrix2\n\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
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
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//checking equality of matrices
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr1[i][j]!=arr2[i][j])
			{
				flag=true;
				break;
			}
		}
	}
	
	if(flag==false)
		{
			cout<<endl;
			cout<<"##################################\n";
			cout<<"#                                #\n";
			cout<<"#     matrices are equal         #\n";
			cout<<"#                                #\n";
			cout<<"##################################\n";
		}
		
	else
		{
			cout<<endl;
			cout<<"##################################\n";
			cout<<"#                                #\n";
			cout<<"#     matrices are not equal     #\n";
			cout<<"#                                #\n";
			cout<<"##################################\n";
		}
	
	
}
