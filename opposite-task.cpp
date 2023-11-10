
// opposite-task
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin >> T;

    while (T--)
    {
        cin >> n;

        int problemsOnFirst;
        int problemsOnSecond;
        if (n > 10)
        {
            problemsOnFirst = 10;
        }
        else
        {
            problemsOnFirst = n;
        }
        problemsOnSecond = n - problemsOnFirst;
        cout << problemsOnFirst << " " << problemsOnSecond << endl;
    }

    return 0;
}