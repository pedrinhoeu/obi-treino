#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> sap(n);
        vector<long long> cords(n+1, 0);
        for (long long i = 0; i < n; i++) {
            cin >> sap[i];
        }
        int som, max = 0;
        for(auto i: sap){
            som = i;
            while(som <= n){
                cords[som] += 1;
                if(cords[som] > max){
                    max = cords[som];
                }
                som += i;
            }
        }
        cout << max << endl;
    }
    return 0;
}