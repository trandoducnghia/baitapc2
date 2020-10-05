#include <iostream>
#include <math.h>
using namespace std;

checknt(int n)
{
    if (n <=1) return 0;
    if(n <= 4 && n >1) return n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i ==0)
        {
            return 0;
        }
    }
    return n;
}

int main()
{
    int n, i;
    cout << "vui long nhap n";
    cin >> n;
    for(i =0; i <=n ; i++)
    {

        int ktra;
        ktra = checknt(i);
        if(ktra !=0)
        {
            cout << ktra << "\n";
        }
    }


    return 0;
}
