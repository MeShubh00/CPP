#include <iostream>
using namespace std;

void patt()
{
    for (int i = 1; i <= 4; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // stars in each row
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    patt();
    return 0;
}
