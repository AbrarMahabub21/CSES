#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nu, m;
    cin >> nu >> m;
    vector<int> tick(nu), user(m);
    for (auto &i : tick)
        cin >> i;
    for (auto &i : user)
        cin >> i;
    sort(tick.begin(), tick.end());
    int n = min(tick.size(), user.size());

    for (int i = 0; i < n; i++)
    {
        if (binary_search(tick.begin(), tick.end(), user[i]))
        {
            cout << user[i];
            break;
        }

        if (user[i] < tick[0])
        {
            cout << -1 << endl;
            break;
        }

        if (user[i] > tick[i] && user[i] < tick[i + 1])
        {
            cout << tick[i] << endl;
            break;
        }
    }

    /*  for (auto i : user)
      {
          if (binary_search(tick.begin(), tick.end(), user[i]))
          {
              cout << user[i];
          }
          else if ()
          {
          }
      }
      */
    return 0;
}