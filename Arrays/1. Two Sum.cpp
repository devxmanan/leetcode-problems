//Brute Force Approach:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};


// Optimized(Hash Map) Approach:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int j = target - nums[i];
            if (map.find(j) != map.end() && map[j] != i) {
                return {i, map[j]};
            }
        }
        return {};
    }
};