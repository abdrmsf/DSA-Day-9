#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int k;
cin>>k;
int arr[]={1,2,3,4,5};
int size=5;
while(k>0)
{
int z=arr[size-1];
for(int i=size-1;i>0;i--)
{
    arr[i]=arr[i-1];
}
arr[0]=z;
k--;
}
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}