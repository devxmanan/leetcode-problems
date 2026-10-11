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