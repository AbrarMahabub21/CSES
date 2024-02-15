#include <bits/stdc++.h>
using namespace std;

int main()
{
    int applicants, apartments, max_diff, cnt = 0;
    cin >> applicants;
    cin >> apartments;
    cin >> max_diff;
    int app[applicants], apart[apartments];
    for (int i = 0; i < applicants; i++)
    {
        cin >> app[i];
    }

    for (int j = 0; j < apartments; j++)
    {
        cin >> apart[j];
    }

    for (int i = 0; i < applicants; i++)
    {
        for (int j = 0; j < apartments; j++)
        {
            if (app[i] - max_diff || app[i] + max_diff || app[i] == apart[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}