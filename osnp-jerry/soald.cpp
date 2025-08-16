#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    int B;

    vector<int> numbers = {1, 2, 3, 4, 5};
    reverse(numbers.begin(), numbers.end());
    for (int num : numbers){
        cout << num << " ";
    }

        cout << endl;

            for (int num : numbers){
        cout << to_string(num);
    }

    cin >> X >> B;
    int hasil_bagi = X / B;
    int sisa_bagi = X % B;
    cout << "hasil bagi: " << hasil_bagi << endl;
    cout << "sisa bagi: " << X % B << endl;
    while (true)
    {
        hasil_bagi = hasil_bagi / B;
        sisa_bagi = hasil_bagi % B;

        cout << "hasil bagi: " << hasil_bagi << endl;
        cout << "sisa bagi: " << sisa_bagi << endl;

        if (hasil_bagi <= 0)
        {
            break;
        }
    }

    return 0;
}