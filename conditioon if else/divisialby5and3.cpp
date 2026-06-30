//Ques : Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%5==0&&n%3==0   ){
    //if(n%5==0||n%3==0   ){
        cout<<"The number is dividual by 3 and 5";


    }
    else {
        cout<<"number is not dividual by 3 and 5 ";
    }
    return 0;

}

//   || this is use when ther is 2 condition anyy one is true it will run  
//    && this is use whenn both cpndition has to be true then it will run 