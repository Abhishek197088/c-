//Ques : If cost price and selling price of an item is input through the keyboard, write a program to
//determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include<iostream>
using namespace std;
int main() {
    int cp,sp;
    cout<<"enter a selling price "<<endl;
    cin>>sp;
    cout<<"enter a cost price "<<endl;
    cin>>cp;
    if(sp>cp){
        cout<<"The seller make profit of:";
        cout<<sp-cp;

    }
    if(sp<cp) {
        cout<<"The seller make the loss of :"<<cp-sp;
    
    }
    if (sp==cp){
        cout<<"the seller not make any profit";
    }
    return 0;
}