class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> res;
        mp[nums[0]] = 0;
        for(int i=1;i<nums.size();i++){
            int temp = target-nums[i];
            if(mp.find(temp) != mp.end()){
                res.push_back(mp[temp]);
                res.push_back(i);
                return res;
            }

            else{
                mp[nums[i]] = i;
            }
        }
        return res;
        
    }
};
