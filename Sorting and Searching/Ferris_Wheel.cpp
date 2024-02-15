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
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (weight[i] + weight[j] <= x)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            cnt++;
            j--;
        }
    }
    cout << cnt << endl;
    return 0;
}