#include<iostream>
using namespace std;
int main()
{
	//Initialization
	int a[4][5]={
		{1,2,3},
		{4,5,6},
		{7,8,9,10},
		{11,12,13,14,15}
	};
	int n=4,m=5;
	for (int row=0;row<n;row++)
	{
		for(int col=0;col<m;col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	return 0;
}