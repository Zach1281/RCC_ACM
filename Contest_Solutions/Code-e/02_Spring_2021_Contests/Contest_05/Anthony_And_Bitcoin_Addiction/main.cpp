#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool isPrime = 1;

        for(int i = 2; i * i <= n; i++){
            if(n % i == 0)
                isPrime = 0;
        }
        
        if(isPrime)
            cout<<"BUY\n";
        else
            cout<<"WAIT\n";
    }
    return 0;
}