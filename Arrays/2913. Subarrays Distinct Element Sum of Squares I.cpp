class Solution{
public:
    int sumCounts(vector<int> &nums){
        int result = 0;

        for(int i = 0; i<nums.size(); i++){
            set <int> distinct;

            for(int j =i; j<nums.size(); j++){
                distinct.insert(nums[j]);
                result += distinct.size()*distinct.size();
            }
        }
        return result;
    }
};