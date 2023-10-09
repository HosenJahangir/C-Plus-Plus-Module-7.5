#include <bits/stdc++.h>
using namespace std;
class Student
{
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i].name >> arry[i].roll >> arry[i].marks;
    }

    return 0;
}