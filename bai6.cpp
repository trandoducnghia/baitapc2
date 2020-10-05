#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Vui long nhap N";
    cin >> n;
    if(n <=1)
    {
        cout << "khong la so ngueyn to";
    }
    else
    if(n <= 4 && n >1)
    {
        cout << "\n" << n << "La so nguyen to";
    }
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i ==0)
            {
                cout << n << " k la so nguyen to";
                return false;
            }
        }

        cout << n << " la so nt";
    }



    return 0;
}
