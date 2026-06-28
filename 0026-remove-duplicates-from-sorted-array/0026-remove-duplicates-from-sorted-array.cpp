class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=nums.size();
        while(j<k){
            if (nums[j]==nums[i]){
                j++;
                continue;
            }
            else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
};