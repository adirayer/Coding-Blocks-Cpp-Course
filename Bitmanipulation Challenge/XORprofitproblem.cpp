#include<iostream>
#include<math.h>
using namespace std;

int main () {
	int l, r;
	cin>>l>>r;
	
//	int ans = (1 << int(log2(l ^ r) + 1)) - 1;
	
	int length = log2(l^r)+1;
	int ans = -1;
	ans=ans<<length;
	ans=~ans;
	cout<<ans;
	
}