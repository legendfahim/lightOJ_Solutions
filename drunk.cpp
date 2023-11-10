
// Drunk--unsolved
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int m;
        cin >> m;
        bool result = false;

        while (m--)
        {
            string a, b;
            cin >> a >> b;
            if (b == "wine")
            {
                if (a == "soda" || a == "water")
                {
                    result = true;
                }
                else
                {
                    result = false;
                }
            }
            else if (b == "lemonjuice")
            {
                if (a == "tequila")
                {
                    result = true;
                }
                else
                {
                    result = false;
                }
            }

            else
            {
                result = false;
            }
        }
        if (result)
        {
            cout << "Case " << i << ": "
                 << "Yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": "
                 << "No" << endl;
        }
    }
}