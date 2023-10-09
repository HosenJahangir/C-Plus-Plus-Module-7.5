#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        if (a.roll < b.roll)

            return true;

        else
            return false;
    }
    else
    {
        if (a.marks > b.marks)
            return true;
        else
            return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i].name >> arry[i].roll >> arry[i].marks;
    }
    // sort function
    sort(arry, arry + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i].name << " " << arry[i].roll << " " << arry[i].marks << endl;
    }

    return 0;
}
