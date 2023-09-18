#include <bits/stdc++.h>

using namespace std;

vector<bool> dp(100, false);
vector<long long> nums;
set<long long> st;
int n, a;

void calc(int k, long long val){
    cout << val << endl;
    if(dp[k] or k >= n){
        return;
    }
    calc(k+1, val+nums[k]);
    calc(k+1, val);

    if(val != 0){
        st.insert(val);
    }

    st.insert(val+nums[k]);
    dp[k] = true;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        nums.push_back(a);
    }
    calc(0, 0);
    cout << st.size() << "\n";
    for(auto i : st){
        cout << i << " ";
    }
}