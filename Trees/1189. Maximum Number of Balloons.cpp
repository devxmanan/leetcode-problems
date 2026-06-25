class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string b = "balloon";
        unordered_map <char, int> freq;
        for(char ch: text) freq[ch]++;
        int result = INT_MAX;
        for(char ch: b) {
            if(ch == 'l' || ch == 'o')
                result = min(result, freq[ch]/2);
            else
                result = min(result, freq[ch]);
        }
        return result;
    }
};