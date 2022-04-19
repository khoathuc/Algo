#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long a[1000005];
int main(){
    long long n;
    long long res = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        res = (res + a[i]%mod)%mod;
    }
    cout << res;
}
