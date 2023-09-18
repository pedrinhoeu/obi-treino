#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> nums(n);
        for (long long i = 0; i < n; i++) {
            cin >> nums[i];
        }
        __int128 l = 0, d = c, resp = 0, mid;
        while (resp != c) {
            mid = (d + l) / 2;
            resp = 0;
            for (long long i = 0; i < n; i++) {
                resp += (nums[i] + mid * 2) * (nums[i] + mid * 2);
                if (resp > c) {
                    break;
                }
            }
            if (resp > c) {
                d = mid;
            } else {
                l = mid;
            }
        }
        cout << static_cast<long long>(mid) << endl;
    }

    return 0;
}
