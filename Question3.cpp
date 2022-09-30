//Peak Index in a Mountain Array
#include<iostream>
using namespace std;

int peak_index_mountain(int [],int );
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<peak_index_mountain(a,n);
    
}
int peak_index_mountain(int arr[],int n)
{
    int max=arr[0],k=0;
    if(n>=3)
    {
        for(int i=1;i<n;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
                k=i;
            }
        }
        return k;
    }
    else
      return 0;
}