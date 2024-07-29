#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int num;
cin>>num;
int target=num;
int ans;
vector<int>n;
for(int i=0;i<=num;i++)
{
    n.push_back(i);
}
int start=0;
int end=n.size()-1;
while(start<=end)
{
    int mid=start+(end-start)/2;
    if(mid*mid==target)
    {
        ans=mid;
    }
    else if(mid*mid>target)
    {
        end=mid-1;
    }
    else
    {
        ans=mid;
        start=mid+1;
    }
}
cout<<ans<<endl;
double finalans=ans;
int precision;
cin>>precision;
double step=0.1;
for(int i=0;i<precision;i++)
{
    for(double j=finalans;j*j<=target;j=j+step)
    {
        finalans=j;
    }
    step=step/10;
}
cout<<finalans;
return 0;
}