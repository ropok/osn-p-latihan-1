#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main()
{
        long long B;
        long long C;
        long long D;
        long long kemungkinan = 0;

        cin >> B;
        cin >> C;
        cin >> D;

        for (int i = 1; i <= B; i++)
        {
            if (D == C % i)
            {
                kemungkinan++;
            }
        }
        cout << kemungkinan;

    return 0;
}