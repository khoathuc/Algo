#include<bits/stdc++.h>
using namespace std;
unsigned long long a,b,res;
const long long mod = 1e9 + 7;
unsigned long long ans(unsigned long long x, unsigned long long y){
    if(y < sqrt(mod)){
        unsigned long long S = 1;
        for(unsigned long long i = 1; i <= y; ++i){
            S = (S * x)% mod;
        }
        return S;
    }
    else{
        if(y % 2 == 0){
            unsigned long long tmp = ans(x,y/2);
            return tmp * tmp % mod;
        }
        else{
            unsigned long long tmp = ans(x,y/2);
            tmp = tmp * tmp % mod;
            return tmp * x % mod;
        }
    }
}
int main(){
    cin >> a >> b;
    a = a % mod;
    res = b;
    while(res >= mod){
        res = b % mod + b / mod;
        b = res;
    }
    cout << ans(a,res);
}
