class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
         int i=0;
         while(i<nums.size()){
              if(nums[i]==nums[i+1]){
                i=i+2;
            }else{
                return nums[i];
            }
         }
           return 0;
      
    }
};




class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i=i+2){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};
