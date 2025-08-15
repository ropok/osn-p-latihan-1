#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vec vector
#define pb push_back

ll b, c, d, cnt = 0;
vec<ll> a;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> b >> c >> d;
    if (d == c)
    {
        cout << max(0ll, b - c);
        return 0;
    }
    c -= d;
    for (ll i = 1; i * i <= c; i++)
    {
        if (c % i == 0)
        {
            a.pb(i);
            if (i != c / i)
                a.pb(c / i);
        }
    }
    for (auto &x : a)
        if (x <= b && x > d)
            cnt++;
    cout << cnt;
    return 0;
}