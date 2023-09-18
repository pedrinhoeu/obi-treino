// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> pal(n);
        for(int i = 0; i < n; i ++){
            cin >> pal[i];
        }
        sort(pal.begin(), pal.end());
        int i = 1, resp = n-1, st = 0;
        while(i < n){
            if(pal[i] - pal[i-1] <= k){
                resp = min(resp, n - (i - st+1));
            }
            else{
                st = i;
            }
            i++;
        }
        cout << resp << endl;
    }

    return 0;
}