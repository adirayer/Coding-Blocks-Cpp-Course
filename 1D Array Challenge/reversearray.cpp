#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100] = {0};
	for(int i=0; i<= n-1; i++)
	{
		cin>>a[i];
	}

	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
	cout<<endl;

}
