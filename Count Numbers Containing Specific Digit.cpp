class Solution {
  public:
    int countValid(int n, vector<int>& arr) {
        // code here
         int tot=9*pow(10,n-1);
        int z=count(arr.begin(), arr.end(), 0);
        int N=arr.size(); 
        return tot-(9-N+z)*pow(10-N,n-1);
    }
};
