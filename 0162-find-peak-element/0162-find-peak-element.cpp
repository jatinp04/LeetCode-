class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int a= 0;
        int max=INT_MIN;
        
        for(int i =0 ; i <n ; i++)
        {
            if(nums[i]>max){
                max=nums[i];
                a=i;
            }
        }
        return a;
    }
};


