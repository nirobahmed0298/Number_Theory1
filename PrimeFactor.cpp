#include<bits/stdc++.h>
//uva 10699 

using namespace std;

void primefactor(int n){
    
    
    for(int i = 2;i*i<=n;i++){
        
        if(n%i ==0){
            
            int cnt = 0;
        
            while(n%i == 0){
                cnt++;    
                n = n / i ;
            }
            cout<<i<<"^"<<cnt<<" ";
        }
    }
    
    if(n>2){
        
        cout<<n<<" ";
        
    }
    else{
        cout<<endl;
    }
    
}

int main(){
    int n;cin>>n;
    primefactor(n);
    
    
 return 0;
}