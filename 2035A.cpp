#include <bits/stdc++.h>

using namespace std;

long long calculate(long long n, long long m,long long r,long long c) {
   return (n-r) * (2 * m - 1) + (m-c);
}

int main() {
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++) {
        long long n, m,r,c;
        cin >> n >> m >> r >> c;
        cout << calculate(n, m,r,c) << "\n"; // Output the result
    }
    return 0;
}