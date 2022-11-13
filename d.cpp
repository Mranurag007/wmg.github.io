#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void f1()
{

    string s;
    cin >> s;
    ll ans = 0, n = s.size();
    char x = s[0], y = s[n - 1];
    vector<pair<char, ll>> v;
    for (ll i = 1; i < n - 1; i++)
    {
        if ((s[i] >= x && s[i] <= y) || (s[i] <= x && s[i] >= y))
        {
            // ans += s[i];
            v.push_back({s[i], i + 1});
        }
    }
    sort(v.begin(), v.end());
    if (x > y)
        reverse(v.begin(), v.end());
    v.push_back({y, n});
    ll m = v.size() + 1;
    ans += abs(x - v[0].first);
    for (ll i = 0; i < v.size() - 1; i++)
    {
        ans += abs(v[i].first - v[i + 1].first);
    }
    cout << ans << " " << m << endl;
    cout << 1 << " ";
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i].second << " ";
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        f1();
    }
}