//Ques : Take 3 positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1 positive number"<<endl;
    cin>>a;
     cout<<"enter 2 positive number"<<endl;

    cin>>b;
     cout<<"enter 3 positive number"<<endl;
    cin>>c;
    if(a>b&&a>c)
    {
        cout<<a<<"  the the gretater nyumber is ";

    }
    if(b>a&&b>c)
    {
        cout<<b<<"  the the gretater nyumber is ";

    }
    if(c>a&&c>b)
    {
        cout<<c<<"  the the gretater nyumber is ";

    }
    else{
        cout<<"<< the number is equal";
    }

}