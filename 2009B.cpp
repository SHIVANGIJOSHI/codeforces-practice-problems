#include <bits/stdc++.h>

using namespace std;

void calculate(int n, vector<vector<char>> &rhyt)
{
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (rhyt[i][j] == '#')
            {
                cout << j + 1 << " ";
                break;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<vector<char>> rhyt(n, vector<char>(4));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                char c;
                cin >> c;
                rhyt[i][j] = c;
            }
        }
        calculate(n, rhyt);
        cout << "\n"; // Output the result
    }
    return 0;
}