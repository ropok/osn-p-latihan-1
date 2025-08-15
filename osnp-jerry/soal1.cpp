#include <iostream>
#include <cctype>
using namespace std;

string S;
int sizeS;

void inputS()
{
    cout << "Masukkkan S: " << endl;
    cin >> S;
}

void validateS()
{
    sizeS = S.size();

    if (!(sizeS >= 1) || !(sizeS <= 100000))
    {
        throw "invalid size S, must be 1<=abs(S)<=100000,";
        return;
    }
}

void validateSCapital()
{
    for (int i = 0; i < sizeS; i++)
    {
        cout << S[i] << endl;
        if (!isupper(S[i]))
        {
            throw "invalid string: harus kapital";
        }
    }
}

void findStringCantikOSN(){
    int limitChar = 3;
    string tempS;

    int i = 0;
    while(true){
        tempS = S.substr(i, limitChar);

        cout <<  tempS << endl;

        int index = 0;
        for (char c : tempS)
        {
            cout << "c: " << c << endl;
            if (c != 'O' && c != 'S' && c != 'N')
            {
                // hapus character
                cout << "hapus: " << c << endl;
                S.erase(index + i, 1);
            }
            index++;
        }
        i++;
        if (tempS.length() < 3){
            break;
        }
    }
}

void displayStringFinal(){
    cout << "Final string: " << S << endl;
}

int main()
{
    // masukkan S
    inputS();
    // 1 <= absolute size(S) <=100000
    validateS();
    // S hanya kapital A - Z
    validateSCapital();

    // ambil 3 karakter dari S
    // jika karakter selain O,S,N => hapus
    // hitung jumlah O S N, jika ada duplikasi hapus
    // setiap hapus, simpan S sebelumnya
    // selesai hapus, kembali ambil 3 karakter dari awal.
    findStringCantikOSN();
    displayStringFinal();

    return 0;
}