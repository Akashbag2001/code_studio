#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n ==1 ) return 1;
    if(n ==2 ) return 1;
    
    int fibo1 = fibo(n-1);
    int fibo2 = fibo(n-2);
    return fibo1 + fibo2;
}

int main()
{
    int n;
    cin>>n;
    if(n<0){
        cout<<"Error";
    }else{
         cout<<fibo(n);
    }
   
    
    
    return 0;
}
