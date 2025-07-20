class Solution {
  public:
    int nonLisMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
         vector<int>length(n,0);
       vector<int>number(n,-1);
       int max_length=0;
       int sum=0;
       for(int i=0;i<n;i++)
       {
           sum=sum+arr[i];
           length[i]=1;
           for(int j=0;j<i;j++)
           {
               if(arr[j]<arr[i])
               {
                   if(length[i]<=length[j]+1)
                   {
                       length[i]=length[j]+1;
                        number[i]=j;
                   }
               }
               
           }
           max_length=max(max_length,length[i]);
       }
       
       
       int result=INT_MAX;
       for(int i=0;i<n;i++)
       {
           if(length[i]==max_length)
           {
               int sum=arr[i];
               int index=number[i];
               while(1)
               {
                   if(index==-1)
                   break;
                   
                   sum=sum+arr[index];
                   index=number[index];
               }
               result=min(result,sum);
           }
       }
       
       return sum-result ;
    }
};
