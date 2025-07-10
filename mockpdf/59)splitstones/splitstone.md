# Split Stones
There are three piles of stones. The first pile contains a stones, the second pile contains b stones and the third pile contains c stones. You must choose one of the piles and split the stones from it to 
the other two piles; specifically, if the chosen pile initially contained s stones, you should choose 
an integer k (0≤k≤s), move k stones from the chosen pile onto one of the remaining two piles and 
s−k stones onto the other remaining pile. Determine if it is possible for the two remaining piles (in 
any order) to contain x stones and y stones respectively after performing this action.
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if((a+b+c==x+y)&&((a<=x && a<=y)||(b<=x && b<=y) ||(c<=x&& c<=y)))
    cout<<"YES\n";
    else cout<<"NO\n";
}
}
```
````
input:
4
1 2 3 2 4
3 2 5 6 5
2 4 2 6 2
6 5 2 12 1
````
````
Output:
YES
NO
YES
NO
````
We will check if  the stones are enough to form the group

First condition: a + b + c == x + y

Checks if the total number of stones remains unchanged.

Second condition: One of the original piles (a, b, or c) is less than or equal to both x and y.

This is used to guess if it can be the donor pile from which stones are split and added to the other two to form x and y.

If both conditions are true, prints YES; otherwise, prints NO.



