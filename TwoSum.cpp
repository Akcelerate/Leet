class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        std::unordered_map<int, int> map(n);
        for(int i = 0; i < n; i++){
            int x = target - nums[i];
            if(map.contains(x)){
                return {map[x], i};
            }else{
                map[nums[i]] = i;
            }
        }
        return {};
    }
};
