#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vecotr<int> &nums,int n)
{   
    bool flag=true;
    for(int i=n-1;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(nums[j-1]>nums[j]) swap(nums[j-1],nums[j]);
        }
    }
    for(auto&x:nums) cout<<x<<' ';
}
int main()
{   
    int n; cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++) cin>>nums[i];
    BubbleSort(nums,n);
    return 0;
}