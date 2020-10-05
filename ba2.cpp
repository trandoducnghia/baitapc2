#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char i;
    for(i=2;i<=8;i++)
    {
        if(i==2) cout << "\nMonday";
        if(i==3) cout << "\ntuesday";
        if(i==4) cout << "\nWednesday";
        if(i==5) cout << "\nThurday";
        if(i==6) cout << "\nFriday";
        if(i==7) cout << "\nsaturday";
        if(i==8) cout << "\nSunday";
    }

    return 0;
}
