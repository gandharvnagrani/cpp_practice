#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;

    int LowerCase, UpperCase;
    LowerCase = (c =='a' || c == 'e' || c=='i' || c=='o' || c=='u');
    UpperCase = (c =='A' || c == 'E' || c=='I' || c=='O' || c=='U');

    if(LowerCase || UpperCase) {
        cout<<"Vowel\n";
    }
    else{
        cout<<"Consonant\n";
    }
}