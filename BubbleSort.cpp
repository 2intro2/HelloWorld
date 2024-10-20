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
    vector<int> nums={9,8,7,10,3,2,1};
    return 0;
}