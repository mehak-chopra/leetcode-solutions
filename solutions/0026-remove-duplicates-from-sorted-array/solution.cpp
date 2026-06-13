class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 1 2 3 4 3 //12334
        if (nums.empty()) return 0;

        int k = 1;
        for (int j = 1; j < nums.size(); j++){
            if (nums[j] != nums[j - 1]){
                nums[k] = nums[j];
                k = k + 1;
            }
        }   
        return k;
    }
};
