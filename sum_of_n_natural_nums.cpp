#include<bits/stdc++.h>
using namespace std;

int sumOfNNaturalNums(int n){
    if(n == 1) return 1; // Base Condition
    int partialAns = sumOfNNaturalNums(n-1);
    return n + partialAns;
}


int main(){
    int n;
    cin>>n;
    if(n < 0){
        cout<<"Error";
    }else{
        cout<<sumOfNNaturalNums(n);
    }

    return 0;
}
