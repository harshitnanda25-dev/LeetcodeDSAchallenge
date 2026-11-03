class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       unordered_map<int,int> mp;
       for(int x : nums){
        mp[x]++;
       } 
       int s = 0;
       for(auto p: mp){
        if(p.second > n/2){
            s = p.first;
        }
       }
         return s;
    }
};