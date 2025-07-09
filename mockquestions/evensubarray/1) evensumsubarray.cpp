/*You are given an array of n integers.
Find the number of sub arrays whose sum is even and starts with an odd number.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int c=0;
   
   for(int i=0;i<n;i++){
     
       if(a[i]%2==1){  int s=0;
           for(int j=i;j<n;j++){
               s+=a[j];
               if(s%2==0)  c++;
           }
       }
   }cout<<c<<endl;
    return 0;
}/*
5
1 2 3 4 5
3

*/
/*Optimal Solution

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int c=0;
   int s=0,count[2]={0,0},res=0;
   
   for(int i=0;i<n;i++){
     
       s+=a[i];
       int p=s%2;
       if(a[i]%2==1 && p==0) res++;
       res+=count[p];
       if(a[i]%2) count[p]++;
   }cout<<res<<endl;
    return 0;
}
/*5
1 2 3 4 5
4*/
