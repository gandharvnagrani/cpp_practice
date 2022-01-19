#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cin>>rows>>cols;
    char p = '*';
    for(int n=1;n<=rows;n++){
        for(int n=1;n<=cols;n++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
