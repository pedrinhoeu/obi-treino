// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b, resp, mai = 0;
        cin >> n;
        for(int i=0; i < n; i++){
            cin >> a >> b;
            if(a <= 10 and b >= mai){
                resp = i+1;
                mai = b;
            }
        }
        cout << resp << endl;
    }

    return 0;
}