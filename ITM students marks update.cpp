#include<iostream>
using namespace std;

int main()
{
	int studentMarks[3][2];
	
	
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cout<<"Enter mark of class "<<i<<" and student "<<j<<" : ";
			cin>>studentMarks[i][j];
		}
	}
	
	
	
	for(int i=1;i<=4;i++)
	{
		int sum=0,avg=0;
		for(int j=1;j<=3;j++)
		{
			sum=sum+studentMarks[i][j];
		}
		avg=sum/3;
		cout<<"average of class "<<i<<" = "<<avg;
	}
}
