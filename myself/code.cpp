// Input: nums = [-1,0,1,2,-1,-4] to 0


class Solution{

    public:
        vector<vector<int>> threeSum(vector<int>& nums){
            
            vector <vector<int>> result;

            int n = nums.size();

            sort(nums.begin(),nums.end());

            for(int i = 0; i < n-2; i++){

                if(i > 0 && nums[i] == nums[i - 1]){
                    continue;
                }

                int left = i + 1;   // first pointer
                int right = n - 1;   // second pointer

                while(left < right){

                    int sum = nums[i] + nums[left] + nums[right];

                    if(sum == 0){
                        return result.push_back({
                            nums[i] , nums[left] , nums[right]
                        });
                    }

                    while(left < right && nums[left] == nums[left - 1]){
                        left ++;
                    }

                    while(left < right && nums[right] == nums[right + 1]){
                        right --;
                    }

                    else if( sum < 0){
                        left ++;
                    }
                    else{
                        right --;
                    }
                }
            }

            return result;
        }

}


// remove duplicate 

i = 0;

for(j=1; j<arr.size(); j++){
    if(arr[i]!=arr[j]){
        i++;
        arr[i] = arr[j];
    }
}

return i+1;


