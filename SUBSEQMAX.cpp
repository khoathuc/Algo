#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000005], res[1000005];
long long ans;
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    res[0] = 0;
    for(int i = 1; i <= n; ++i){
        res[i] = max(res[i - 1] + a[i], a[i]);
    }
    ans = res[1];
    for(int i = 1; i <= n; ++i){
        ans = max(ans, res[i]);
    }
    cout << ans;
}
