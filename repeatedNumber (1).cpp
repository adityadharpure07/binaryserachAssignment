#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        int mid=(lo+(hi-lo)/2);

        if(arr[mid]!=(mid+1)){
           cout<<"repeated No. :"<<mid;
           break;
        }
        else {
            lo=mid+1;
        }
    }
}