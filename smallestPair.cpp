#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        long long arr[n];

        for (int i =1 ; i <= n; i++)
        {
            cin >> arr[i];
        }

        long long minimum = LLONG_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                minimum = min(minimum, arr[i] + arr[j] + j - i);
            }
        }
        cout << minimum << endl;
    }
    
    return 0;
}