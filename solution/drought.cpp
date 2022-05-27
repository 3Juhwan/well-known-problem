#include <bits/stdc++.h>

using namespace std;

long long solve()
{
    long long ans = 0, n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    if (n == 1)
        return 0;

    for (int j : {1, 2})
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1])
            {
                int diff = a[i] - a[i - 1];
                ans += 2 * diff, a[i + 1] -= diff, a[i] = a[i - 1];
            }
        }
        if (a[n - 1] > a[n - 2])
            return -1;
        reverse(a.begin(), a.end());
    }
    return a[0] < 0 ? -1 : ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}