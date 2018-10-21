class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();++i){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();++i){
            int t=target-nums[i];
            if(m.count(t)&&m[t]!=i){
                res.push_back(i);
                res.push_back(m[t]);
                break;
            }
        }
        return res;
    }
};