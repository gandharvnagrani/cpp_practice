#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    int i;
    for(i=a; i<=b; i++){
        int j;
        for(j=2; j<b; j++){
            if(i%j == 0){
                break;
            }
          }
        if(i==j){
            cout<<i<<endl;
        }
 
    }
}