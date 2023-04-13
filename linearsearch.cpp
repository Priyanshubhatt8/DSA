#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
int n;
cin>>n;

int arr[n];
//explain wroking of loop
// cin>>arr[0];
// cin>>arr[1];
// cin>>arr[2];
// cin>>arr[3];
// for(int i=0;i<n;i++){
//     cout<<arr[i];
// }


for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
cout<<linearsearch(arr,n,key);



    return 0;
}