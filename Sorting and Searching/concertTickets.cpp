#include <bits/stdc++.h>
using namespace std;

/*void checker(int tick[], int user[])
{
}
*/
int main()
{
    int n, m;
    cin >> n >> m;
    int tick[n], user[m];
    for (int i = 0; i < n; i++)
    {
        cin >> tick[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> user[i];
    }

    sort(tick, tick + n);
    //  checker(tick, user);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (user[i] >= tick[j])
            {
                if (user[i] == tick[j] || (user[i] < tick[j + 1] && user[i] > tick[j]))
                {
                    cout << tick[j] << endl;
                    tick[j] = -1;
                    break;
                }
                else if (user[i] < tick[0])
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}