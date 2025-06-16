**Problem Analysis**

My first thoughts on how to solve this problem were to identify the maximum difference between any two elements in the given array,
where the array contains duplicate elements. I considered iterating through the array to keep track of the minimum value seen so far 
and the maximum difference found.

**Approach**

My approach to solving this problem is to use a single pass through the array, maintaining two variables: minVal to store the minimum 
value seen so far and maxDiff to store the maximum difference found. When a new element is encountered, I check if it's greater than 
the current minVal. If it is, I update maxDiff if the difference between the new element and minVal is greater than the current maxDiff.
If the new element is not greater, I update minVal to the new element.

**Complexity**

Time complexity: O(n), where n is the number of elements in the array, as we're making a single pass through the array.
Space complexity: O(1), as we're using a constant amount of space to store minVal and maxDiff.
Code Review

Your code looks correct and follows the approach I described. However, I'd like to point out that the variable name maxDiff
could be more descriptive. Consider renaming it to maxDifference to better reflect its purpose.

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
