#include <iostream>
using namespace std;
int main()
{
	int n,i=2;
	cin>>n;

	while(i<n)
	{
		if(n%i==0)
		{
			cout<<"Not Prime";
			break;
		}
		
		i=i+1;
		
	}
	if(i==n)
	{
		cout<<"Prime";
	}

	cout<<endl;
	return 0;
}