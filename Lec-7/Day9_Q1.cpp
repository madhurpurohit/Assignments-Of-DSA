#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= row)
                cout << col << " ";
        }
        cout << endl;
    }
}