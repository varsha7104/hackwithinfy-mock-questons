// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int>mp;
    //int s=0;
    int r=0,l=0;
  
    int ans=0,s=0,maxi=0;
   while(r<n){
       mp[a[r]]++;
       s+=a[r];
      while(mp.size()>k){
           mp[a[l]]--;
           if(mp[a[l]]==0) mp.erase(a[l]);
         
           s-=a[l];  l++;
       }cout<<l<<" "<<r<<" "<<s<<"\n";
       
       if(s>maxi)maxi=s;
       ans=max(ans,(r-l+1));
   r++;}
    cout<<maxi<<endl;
  return 0;
}
/*11 2
1 2 2 3 2 3 5 1 2 1 1 
0 0 1
0 1 3
0 2 5
1 3 7
1 4 9
1 5 12
5 6 8
6 7 6
7 8 3
7 9 4
7 10 5
12
Sample INPUT:alignas
3 1
-1 -2 -3
0 0 -1
1 1 -2
2 2 -3
0

5 5
-1 1 3 2 -1
1 0 0
1 1 1
1 2 4
1 3 6
1 4 5
6

*/