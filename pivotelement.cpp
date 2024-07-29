#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{2,4,6,8,10};
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(start==end)
        {
            cout<<start;
            return 0;
        }
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<mid;
            return 0;
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
    return -1;
}