#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{4,5,6,7,0,1,2};
    int target,k;
    cin>>target;
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(mid>0 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            k=mid;
            break;
        }
        if(arr[mid]<arr[mid-1])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    if(target>=arr[start] && target<=arr[k])
    {
        start=0;
        end=k;
    }
    if(target>=arr[k+1] && target<=end)
    {
        start=k+1;
        end=arr.size()-1;
    }
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<"ANS="<<ans<<endl;
    return ans;
}
