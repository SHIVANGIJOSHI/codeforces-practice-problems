#include <bits/stdc++.h>

using namespace std;

int calculate(int n, int k) {
   return k - n;
}

int main() {
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        cout << calculate(n, k) << "\n"; // Output the result
    }
    return 0;
}