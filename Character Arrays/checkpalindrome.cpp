#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char a[])
{
	int i=0;
	int j= strlen(a)-1;

	while(i<j)
	{
		if(a[i]!=a[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main()
{
	char a[100];
	cin>>a;

	if(ispalindrome(a)==true)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}



	
	return 0;
}