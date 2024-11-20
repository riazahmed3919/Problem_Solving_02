#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }

        for (int i = 1, j = i + 1; i <= n; i++, j++)
        {
            cout << arr[i] + arr[j] + j - i << endl;
        }
    }
    return 0;
}