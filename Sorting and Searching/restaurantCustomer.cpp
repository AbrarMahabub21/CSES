#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = 0, ans = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int arival, departure;
        cin >> arival >> departure;
        mp[arival]++;
        mp[departure]--;
    }

    for (auto x : mp)
    {
        ans += x.second;
        if (max < ans)
        {
            max = ans;
        }
    }

    cout << max << endl;

    return 0;
}