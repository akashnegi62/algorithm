// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;              // Initialize the first pointer

        for (int j = 1; j < nums.size(); j++) { 

            if (nums[i] != nums[j]) {           // If the elements are not equal
                i++;                            // Increment the first pointer
                nums[i] = nums[j];              // copy
            }
        }

        return i + 1;           // Return the size of the array
    }
};