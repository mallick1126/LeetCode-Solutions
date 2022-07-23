class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), i, k=0;
        for(i=1 ; i<n; i++){
            if(nums[i]!= nums[i-1]){
                nums[i-k]=nums[i];
            }
            else
                k++;
        }
        return n-k;
    }
};