#include <bits/stdc++.h>

using namespace std;

string calculate(int n, int k) {
   if (((n + 1) / 2 - (n - k + 1) / 2) & 1) {
       return "NO";
    } 
    return"YES";
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