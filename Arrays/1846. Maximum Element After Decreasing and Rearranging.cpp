class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int size = arr.size();
        if(size<1) return 0;
        arr[0] = 1;
        for(int i =1; i<size; i++){
            if(arr[i] - arr[i-1] >=1){
                arr[i] = arr[i-1] +1;
            }
        }

        return arr[size-1];
    }
};