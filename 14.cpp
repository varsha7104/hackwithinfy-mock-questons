class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int rem=0;
        for(int i=0;i<s.size();i++){
            int d=s[i]-'0';
            rem=(rem*10+d)%13;
        }return rem==0;
    }
};
