// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
 int e;
 cin>>e;
 int n;
 cin>>n;
 int  a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 sort(a,a+n);
 reverse(a,a+n);
 int s=0;
 for(int i=0;i<n;i++){int c=0;
     while(a[i]<=e&&c<2){
         e-=a[i];
         c++;
     }
     s+=c;
 }if(e>0) cout<<"-1\n";
 else 
 
 cout<<s<<endl;
    return 0;
}/*10
2
1 2
-1
*/
