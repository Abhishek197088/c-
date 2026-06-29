#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    if(n%5){
    cout<<"this is divisible by 5 "<<endl;
    } 
    if (n%5!=5) {
        cout<<"this is divisible by 5 but not equa to 9 "<<endl;
    }
    else {
     cout<<"this is divisible by 5"<<endl;
    }
    return 0;
}