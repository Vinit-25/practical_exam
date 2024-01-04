class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        //two ptr
        while(i < nums.size()){
            if(nums[i]==nums[j]){
                i++;
            }
            else{
                j++;
               nums[j]=nums[i];
               i++;
            }
        }
        return j+1;
    }
};