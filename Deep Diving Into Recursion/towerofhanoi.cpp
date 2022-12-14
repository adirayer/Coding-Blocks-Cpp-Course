#include<iostream>
using namespace std;


void towerOfHanoi(int n, char src, char dest, char helper)
{
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}


int main()
{ 
    int n; 
    cin>>n;
    towerofHanoi(n,'A','C','B');
    return 0;
}
