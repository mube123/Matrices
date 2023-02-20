#include<iostream>
using namespace std;
int main()
{
	int arr1[3][3];
	
	//loop to take input matix from the user
	cout<<"Enter the values of matrix\n\n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter value of "<<i<<" row and "<<j<<" column: ";
			cin>>arr1[i][j];
		}
	}
	
	//showing elements of matrix
	cout<<endl;
	cout<<"########################\n";
	cout<<"      Matrix is\n";
	cout<<"########################\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
	

			cout<<endl;
			cout<<"##################################\n";
			cout<<"#                                #\n";
			cout<<"#   The transpose of matrix is   #\n";
			cout<<"#                                #\n";
			cout<<"##################################\n";
			
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<arr1[j][i]<<"\t";
				}
				cout<<endl;
			}
		
	
	
}
