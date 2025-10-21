#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.empty())
            return 0;

        int i = 0;

        for (int j = 1; j < nums.size(); j++)
        {

            if (nums[j] != nums[i])
            {

                i++;

                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Unique count = " << k << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++)
    {
        cout << nums[x] << " ";
    }
    cout << endl;
}