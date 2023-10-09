#include <bits/stdc++.h>
using namespace std;
void fun(int x, int n)
{
    int sum = 0;
    for (int i = 2; i < n; i += 2)
    {
        sum += pow(x, i);
    }
    cout << sum;
}

int main()
{
    int x, n;
    cin >> x >> n;
    fun(x, n);
    return 0;
}