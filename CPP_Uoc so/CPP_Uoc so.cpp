



#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap so: ";
    cin >> n;
    cout << "cac uoc so cua n ";
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            cout << i << " ";
        }
    return 0;
}
