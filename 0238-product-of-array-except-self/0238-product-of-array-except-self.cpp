class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> output;
 
        int prod=1;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            output.push_back(prod);
        }
        prod =1;
        for(int i=n-1;i>0;--i){
            output[i]=output[i-1]*prod;
            prod*=nums[i];
        }
        output[0]=prod;
        return output;
    }
};