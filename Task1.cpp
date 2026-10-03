#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year >= 1896 && (year - 1896) % 4 == 0)
    {
        int edition;
        edition = (year - 1896) / 4 + 1;
        cout << "Olympic year" << endl;
        cout << "Edition: " << edition << endl;
    }
    else
    {
        cout << "Not an Olympic year" << endl;
    }

    return 0;
}
