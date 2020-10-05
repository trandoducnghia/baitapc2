#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    cout << "vui long nha n";
    cin >> n;
    int all[n] = {};
    int s;
    s = 0;
    for (i=1;i < n; i++)
    {
        if(n%i == 0)
        {
            all[i] = i;
            s+=i;
        }
    }

    if(s == n) cout << "true";



    return 0;
}
