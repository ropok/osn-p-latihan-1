//https://tlx.toki.id/problems/osnp-2024/C

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int n;
long long m;
vector<int> a;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   cin >> n >> m;
   for(int i = 1; i <= n; i++){
       int temp = 0;
       cin >> temp;
       a.push_back(temp);
   }

   double sum = accumulate(a.begin(), a.end(), 0);
   double avg = sum / a.size();
   avg = round(avg);

   long long temp_m = 0;

   while (temp_m < m)
   {
       temp_m = 0;
       for (int t : a)
       {
        if (t > avg)
        {
            temp_m += t - avg;
        }
       }
       if (temp_m >= m)
       {
           break;
       }

       // jika masih belum ketemu, maka avg/2
       if (avg > 1)
       {
           avg = avg / 2;
       }
       else if(avg > 0){
        avg = 0;
       }
       else
       {
           cout << -1;
           return 0;
       }
   }

       // cek apakah totalnya itu mencukupi?
       cout << avg;

   return 0;
}