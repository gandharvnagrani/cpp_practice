#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cin>>rows>>cols;
    for(int n=1; n<=rows; n++){
        for(int i = 1; i<=cols; i++){

            if(n==1 || n==rows){
                cout<<"*";
            }
            else if(i==1 || i==cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
