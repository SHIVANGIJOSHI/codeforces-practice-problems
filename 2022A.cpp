#include <bits/stdc++.h>

using namespace std;

int calculate(int n, int r,const vector<int>& families) {
    int sum = 0, oddCount = 0,seats = 2 * r;
   for(int f:families){
        sum+=f;
        if(f%2 != 0)
            oddCount++;
   }
   if(seats > sum){
        if((seats - sum) >= oddCount ){
            return sum;
        }else{
            return sum - (oddCount - (seats - sum)) ;
        }
   }else{
    return sum - oddCount;
   }
   return 0;
}

int main() {
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++) {
        int n, r;
        cin >> n >> r;
        vector<int> families(n);
        for(int i = 0 ; i < n ;++i){
            int members = 0;
            cin>>members;
            families.push_back(members);
        }
        cout << calculate(n, r,families) << "\n"; // Output the result
    }
    return 0;
}