#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;

vector<int>arr(n);

for(int i=0;i<n;i++)
cin>>arr[i];

int maxSum=arr[0];
int currentSum=arr[0];
int start=0,end=0,tempStart=0;

for(int i=1;i<n;i++){
if(currentSum+arr[i]<arr[i]){
currentSum=arr[i];
tempStart=i;
}
else{
currentSum+=arr[i];
}

if(currentSum>maxSum){
maxSum=currentSum;
start=tempStart;
end=i;
}
}

cout<<"Maximum Sum: "<<maxSum<<endl;
cout<<"Subarray: ";

for(int i=start;i<=end;i++)
cout<<arr[i]<<" ";

return 0;
}