#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count = 1;
    while(count <= 10){
        cout<< n * count << endl;
        count += 1;
    }
}