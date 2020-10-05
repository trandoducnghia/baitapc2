#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    short int N;
    cout << "Vui long nhap N";
    cin >> N;
    string chuoi;
    chuoi = to_string(N);
    cout << "So tu nhien " << chuoi << "\n";
    cout << "Hang tram =" << chuoi[0];
    cout << "\n Hang chuc=" << chuoi[1];
    cout << "\n hang don vi=" << chuoi[2];

    return 0;
}
