#include<iostream>
using namespace std;

int main()
{
	int studentMarks[3][44];
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=45;j++)
		{
			cout<<"Enter mark of class "<<i<<" and student "<<j<<" : ";
			cin>>studentMarks[i][j];
		}
	}
	
	cout<<"The marks of all students of all class are as follows:\n";
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=45;j++)
		{
			cout<<"Marks of class "<<i<<" and student "<<j<<" = "<<studentMarks[i][j]<<endl;
		}
	}
}
