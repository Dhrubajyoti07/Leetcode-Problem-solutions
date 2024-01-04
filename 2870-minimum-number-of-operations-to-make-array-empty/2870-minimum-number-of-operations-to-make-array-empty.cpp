class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n= nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int cnt=0;
        
        for(auto it:mp){
            if(it.second==1){
                return -1;
            }
            else{
                if(it.second%3==0){
                    cnt += it.second/3;
                }
                else{
  
                    int val = (it.second/3) + 1;
                    cnt += val;
                    
                }
            }
        }
        return cnt;
    }
};