#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 100
int JumpSearch(int arr[],int n,int k)
{
    int m=sqrt(n);
    int low=0;
    while(arr[min(m,n)-1]<k)
    {
        low=m;
        m+=sqrt(n);
        if(low>=n)
            return -1;
    }
    while(arr[low]<k)
    {
        low++;
        if(low==min(m,n))
            return -1;
    }
    if(arr[low]==k)
        return low;

    return -1;
}

int main()
{
    int t,n,key;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        int a=JumpSearch(arr,n,key);
        if(a==-1)
            cout<<"Not Present "<<endl;
        else
            cout<<"Present "<<endl;
    }
}
