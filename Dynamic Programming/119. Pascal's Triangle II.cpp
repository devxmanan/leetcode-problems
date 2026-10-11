class Solution{
    public:
        vector<int> getRow(int rowIndex){
            vector<int> previous;
            for(int i = 0; i<=rowIndex; i++){
                vector<int> current(i+1, 1);
                for(int j = 1; j<i; j++){
                    current[j] = previous[j-1] + previous[j];
                }
                previous = current;
            }
            return previous;
        }
};

//Space optimized
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> result = {1};
        for(int i = 0; i<rowIndex; i++){
            result.push_back(1);
            for(int j = i; j> 0; j--){
                result[j] = result[j-1]+result[j];
            }
        }
        return result;
    }
};