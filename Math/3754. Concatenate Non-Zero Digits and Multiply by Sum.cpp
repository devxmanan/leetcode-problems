class Solution {
    public:
        long long sumAndMultiply(int n) {
                if(!n) return 0;
                        long long sum = 0;
                                string x="";
                                        while(n>0){
                                                    int digit = n%10;
                                                                sum+= digit;
                                                                            if(digit) x+= to_string(digit);
                                                                                        n=n/10;
                                                                                                }
                                                                                                       reverse(x.begin(), x.end());
                                                                                                              return  stoll(x)*sum;
                                                                                                                  }
                                                                                                                  };
}