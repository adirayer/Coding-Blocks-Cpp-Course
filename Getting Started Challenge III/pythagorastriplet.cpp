#include <iostream>
using namespace std;
#define ll long long int

int main(){
	ll no , m ,n;
	while(cin>>no){
		if(no<3){
			cout<<"-1\n";
		}
		else{
			if(no & 1){ //no is odd | m^2 - n^2 = no | m+n = no | m-n = 1 | m = (no + 1)/2 | n = (no-1)/2
				m = (no+1)/2;
				n = (no-1)/2;
			//  cout<<(no*no -1 )/2<<" "<<(no*no +1)/2<<endl;
				cout<<2*m*n << " "<< (m*m) + n*n<<endl;
			}
			else{ // no is even | 2mn = no | m = no/2 | n = 1
				m = no/2;
				n = 1;
				cout << (m*m) -(n*n) <<" " <<(m*m) +(n*n) <<endl;
			}
		}

	}
}