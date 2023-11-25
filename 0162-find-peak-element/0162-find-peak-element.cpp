class Solution {
public:
    int findpeakindex(vector<int> nums){
        int strt =0;
        int end=nums.size()-1;
        int mid = strt +(end-strt)/2;
        while(strt<end){
            if(nums[mid]<nums[mid+1]){
                strt=mid+1;
            }
            else{
                end = mid;           
            }
            mid = strt+(end-strt)/2;
        }
        return strt;
    }
    int findPeakElement(vector<int>& nums) {
        return findpeakindex(nums);
        
    }
};