class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while(i < j) {
            if(nums[i] == -nums[j] || nums[j] == -nums[i]) 
                return abs(nums[i]);
                if(abs(nums[i]) < abs(nums[j])) 
                    j--;
                
                else
                    i++;
                
            
        }
        return -1;
    }
};