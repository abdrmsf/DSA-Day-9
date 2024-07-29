#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int m,n,target;
cin>>n;
cin>>m;
cin>>target;
vector<vector<int> >arr(n,vector<int>(m,0));
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr[0].size();j++)
    {
        cin>>arr[i][j];
    }
}
int start=0;
int totalsize=m*n;
int end=totalsize-1;
int mid=start+(end-start)/2;
while(start<=end)
{
    int rowno=mid/m;
    int columnno=mid%m;
    int element=arr[rowno][columnno];
    if(element==target)
    {
        cout<<"Found"<<endl;
        return 0;
    }
    if(element<target)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return -1;
}
