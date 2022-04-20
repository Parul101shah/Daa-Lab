#include<iostream>
#include<bits/stdc++.h>
#define N 30
using namespace std;
int Count(int arr[],int i,int j,int key,int n)
{
    cout<<i<<endl;
    cout<<j<<endl;
    int c1=0,c2=0;
    if(arr[i]==key|| i>=0){
        c1++;
        i--;
        cout<<"c1 = "<<c1;
    }
    if(arr[j]==key || j<=n)
    {
        c2++;
        j++;
        cout<<"c2 = "<<c2;
    }
    return c1+c2+1;
}

int BinarySearch(int arr[],int l ,int r,int k,int n)
{
    int mid;

    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==k)
        {
            return Count(arr,l,r,k, n);
        }
        else if(arr[mid] < k)
        {
            l=mid+1;
        }
        else if(arr[mid] >k)
        {
            r=mid-1;
        }
        else{
            return 0;
        }
    }
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
        int l=arr[0];
        int r=arr[n-1];
        int a=BinarySearch(arr,l,r,key,n);
        if(a==0)
            cout<<"Key not present ";
        else
            cout<<a;
        
    }
}
