#include <iostream.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    IOS
        int t;
    long long n;
    cin >> t;
    while (t--)
    {

        cin >> n;
        long long  table[33];

        table[0] = 1;

        for (int i = 1; i < 32; i++) {

            table[i] = 2 * table[i - 1];


        }




        long long som1 = ((1 + n) * n) / 2;
        long long som2 = 0;
        for (int i = 0; i < 32; i++) {

            if (table[i] <= n)
                som2 += table[i];

        }




        som1 = som1 - (2 * som2);



        cout << som1 << endl;
    }
    return 0;
}