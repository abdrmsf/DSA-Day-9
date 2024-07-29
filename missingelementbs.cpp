#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n<=1)
{
    cout<<"No missing element"<<endl;
    return 0;
}
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
if(arr[0]!=1)
{
    cout<<1<<" is missing element"<<endl;
    return 0;
}
int start=0;
int end=arr.size()-1;
while(start<=end)
{
    int mid=start+(end-start)/2;
    if( mid<n-1 && arr[mid]!=arr[mid+1]-1)
    {
        cout<<arr[mid+1]-1;
        return 0;
    }
    if(arr[mid]==mid+1)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
}
cout<<n+1<<"Is missing element"<<endl;
return 0;
}
