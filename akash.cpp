#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int max;
for( int i=0;i<n;i++){
     cin>>arr[i];
}

for( int i=0;i<n;i++){
     if(arr[i]>arr[i+1]){
         maxi=arr[i];
     }
}
cout<<maxi;

    return 0;
}