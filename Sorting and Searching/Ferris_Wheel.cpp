#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, cnt = 0;
    cin >> n;
    cin >> x;
    int weight[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> weight[i];
    }
    sort(weight, weight + n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (weight[i] + weight[i + 1] <= x)
        {
            cnt++;
            i += 2;
        }

        if (weight[i] + weight[i + 1] > x && (weight[i] <= x) && (weight[i + 1] <= x))
        {
            /* code */
            cnt += 2;
            break;
        }

        if (weight[i] + weight[i + 1] > x && ((weight[i] <= x) || (weight[i + 1] <= x)))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}