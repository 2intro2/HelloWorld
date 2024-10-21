#include<iostream>
#include<vector>
using namespace std;

//添加注释
int findPos(vector<int>& nums, int l, int r)
{
	int val = nums[l];
	while (l < r)
	{
		while (l < r && nums[r] >= val) r--;
		nums[l] = nums[r];
		while (l < r && nums[l] <= val) l++;
		nums[r] = nums[l];
	}
	nums[l] = val;
	return l;
}
void QuickSort(vector<int>& nums, int l, int r)
{
	if (l < r)
	{
		int pos = findPos(nums, l, r);
		QuickSort(nums, l, pos - 1);
		QuickSort(nums, pos + 1, r);
	}
}

int main()
{
	int n; cin >> n;
	vector<int> nums(n, 0);
	for (int i = 0;i < n;i++) cin >> nums[i];
	QuickSort(nums, 0, n - 1);
	for (auto& x : nums) cout << x << ' ';
	return 0;
}