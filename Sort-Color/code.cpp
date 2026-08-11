// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(left <= right){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid])
                low++ ;
                mid++ ;
            }

            else if(nums[mid] == 1){
                mid++;
            }

            else{
                swap(nums[mid], nums[high])
                high--;
            }
        }
    }
};

