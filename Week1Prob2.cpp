#include<iostream>
using namespace std;
#define N 100
int BinarySearch(int arr[],int start,int end,int key)
{
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            start=mid+1;
        else
            end=mid-1;
        
    }
    return 0;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    int s=0;
    int e=n-1;
    int a=BinarySearch(arr,s,e,key);
    if(a==0)
        cout<<"Element Not Present";
    else
        cout<<"Elemnent Present";

}
