#include<iostream>
using namespace std;
int main()
{
	int arr1[2][2],adj[2][2];
	float inv[2][2],det;
	
	//loop to take input matix from the user
	cout<<"Enter the values of matrix\n\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
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
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
			
			//calculating determinent
			det=(arr1[0][0]*arr1[1][1])-(arr1[0][1]*arr1[1][0]);
			cout<<"\ndeterminent= "<<det;
			
			if(det==0)
				cout<<"The inverse is impossible because the matrix is singular i.e determinent is 0";
			else
			{
				//finding adjoint
				 adj[0][0]=arr1[1][1];
				 adj[1][1]=arr1[0][0];
				 adj[0][1]=(-1)*arr1[0][1];
				 adj[1][0]=(-1)*arr1[1][0];
			
				cout<<"\n\nAdjoint of the matrix is:\n";
				{
					cout<<adj[0][0]<<"\t"<<adj[0][1]<<endl;
					cout<<adj[1][0]<<"\t"<<adj[1][1]<<endl;
				}
			
			
			}
			
		//calculating and displying inverse of the matrix
			cout<<endl;
			cout<<"##################################\n";
			cout<<"#                                #\n";
			cout<<"#   The inverse of matrix is     #\n";
			cout<<"#                                #\n";
			cout<<"##################################\n";
	
			{
				//dividing adjoint by determinent
				 inv[0][0]=(adj[0][0])/det;
				 inv[1][1]=(adj[1][1])/det;
				 inv[0][1]=(adj[0][1])/det;
				 inv[1][0]=(adj[1][0])/det;
			
				
				
				cout<<inv[0][0]<<"\t"<<inv[0][1]<<endl;
				cout<<inv[1][0]<<"\t"<<inv[1][1]<<endl;
				
			
			
			}
			
			
			
		
	
	
}
