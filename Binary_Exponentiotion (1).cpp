#include<bits/stdc++.h>
#define mo 1e9 
//https://codeforces.com/problemset/problem/742/A

using namespace std;

long long power(long long base , long long n,long long mod){
    
    long long res =  1 ;
    while(n){
        
        if(n%2==1){
            res = (res * base)%mod ;
            n--;
        }
        else{
            base = (base*base) % mod ; 
            
            
            n = n / 2;
        }
    }
    
    return res;
}
int main(){
    long long base , n;cin>>base>>n;
    
    cout<<power(base,n,1e9)<<endl;
    
    
    
 return 0; 
}


