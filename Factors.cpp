#include<iostream>
using namespace std;

int main()
{
    int n,j;

    n=60;
// find factors
    if(n==0)
    {
        cout<<"enter a new value"<<endl;
    }
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
    
}
