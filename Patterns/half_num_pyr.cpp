#include<iostream>
using namespace std;
//1
//22
//333
//4444
//55555

int main(){
    int n;
    cin>>n;

    int i=1;
    for(i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<i;
        }
        cout<<"\n";
    }
}