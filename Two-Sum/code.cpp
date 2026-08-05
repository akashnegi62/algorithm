// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;  // Create a new array of pairs

        for(int i = 0; i < nums.size(); i++){   
            arr.push_back({nums[i], i});        // Push the pair into the new array
        }
        sort(arr.begin(), arr.end());          // Sort the new array

        int left = 0 , right = arr.size() - 1; // Initialize two pointers

        while (left< right){                  
            int sum = arr[left].first + arr[right].first; 

            if(sum == target){                  
                return {arr[left].second, arr[right].second};
            }
            else if (sum < target){
                left++;

            }
            else {
                right--;
            }
        }

        return{};

    }
};