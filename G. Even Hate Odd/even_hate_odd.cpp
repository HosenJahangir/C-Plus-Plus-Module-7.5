#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int odd_cnt;
    // int even_cnt;
    if (n % 2 == 0)
    {
        int odd_cnt = 0;
        int even_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even_cnt++;
            }
            else
            {
                odd_cnt++;
            }
        }
        if (even_cnt == odd_cnt)
        {
            cout << 0;
        }
        else
        {
            cout << abs((n / 2) - odd_cnt);
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}