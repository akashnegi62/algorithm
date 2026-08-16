class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k = 0;

        for (int i = 0; i < nums.size(); i++) {

            // First two elements are always allowed
            if (k < 2) {
                nums[k] = nums[i];
                k++;
            }

            // Allow element only if it won't create 3 duplicates
            else if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};