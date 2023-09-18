// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        vector<string> pal(8);
        for(int i = 0; i < 8; i ++){
            cin >> pal[i];
        }
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(pal[i][j] != '.'){
                    cout << pal[i][j];
                }
            }
        }
        cout << endl;
    }

    return 0;
}