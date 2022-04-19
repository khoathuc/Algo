#include<bits/stdc++.h>
using namespace std;
unsigned long long a, b;
const long long mod = 1e9 + 7;
int main(){
    cin >> a >> b;
    cout << (a % mod + b % mod)%mod;
}
