#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
        {
            p1++;
        }
        else
        {
            p2++;
        }
    }

    if (p1 >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i+1;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i+1;
                break;
            }
        }
    }
}