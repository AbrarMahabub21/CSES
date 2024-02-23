#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int arival, deptarture;
        cin >> arival >> deptarture;
        mp.insert({arival, deptarture});
    }

    auto i = mp.begin();
    while (i != mp.end())
    {
        cout << i->first << " " << i->second << endl;
        i++;
    }
    return 0;
}