//Ques : Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<" Enter a number"<<endl;
    cin>>n;
    if(n>99&&n<=999)
    { 
        cout<<"The number is 3 digit number "<<endl;

    }
    else{
        cout<<"the number is not 3 digit number "<<endl;
    }
}