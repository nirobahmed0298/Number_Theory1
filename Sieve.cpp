#include<bits/stdc++.h>
using namespace std;
long long mark[5000000];

void sieve(long long n){
    
    mark[0]= 1 ;mark[1] = 1 ;
    
    for(int i = 4;i<=n;i = i + 2){
            
        mark[i] = 1 ;
        
    }
    for(int i = 3;i<=(sqrt(n)+2);i++){
        if(!mark[i]){
            
            for(long long j = i*i ;j<=n;j = j + i ){
                mark[j] = 1;
            }
        }
    }
    
}

int main(){
    int n;cin>>n;
    sieve(n);
    for(int i =2;i<n;i++){
        if(!mark[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}