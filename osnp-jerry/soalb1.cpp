#include <iostream>
using namespace std;

int main()
{
    int B;
    int C = 100;
    int D = 10;
    // int x;

    while (true)
    {
        cin >> B;

        // C -= D;

        // x = C % B;
        D = C % B;

        bool x = D == C % B;

        cout << "x : " << x << endl;
    }

    return 0;
}