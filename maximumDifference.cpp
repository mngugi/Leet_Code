# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = nums[0];
        int maxDiff = -1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > minVal) {
                maxDiff = max(maxDiff, nums[i] - minVal);
            } else {
                minVal = nums[i]; 
            }
        }
       return maxDiff; 
    }
};
```

**Solution**

#include <vector>
#include <algorithm> // for std::max
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = nums[0];
        int maxDiff = -1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > minVal) {
                maxDiff = max(maxDiff, nums[i] - minVal);
            } else {
                minVal = nums[i]; 
            }
        }
       return maxDiff; 
    }
};
