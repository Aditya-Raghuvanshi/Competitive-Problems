//1. Pallindrome Integer
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=n;
    long s=0;
    if(n<0)
    {
        cout<<"No"<<endl;
        return 0;
    }
    while(n!=0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    if(s==r)
        cout<<"True"<<endl;
    else  
        cout<<"No"<<endl;
    return 0;        
}