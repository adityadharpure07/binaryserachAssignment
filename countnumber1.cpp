
#include<iostream>
using namespace std;
int main(){
	int arr[]={0,0,1,1,1,1};
	int target=1;
	int lo=0;
	int n=6;
	int hi=n-1;
	int ans=-1;
	
	
	while(lo<=hi){
		int mid=(lo+(hi-lo)/2);
		if(arr[mid]==target){
			if(arr[mid-1]==target){
				hi=mid-1;

			}
			else{
				ans=mid;
				break;
			}
		}
		else if(arr[mid]<target){
			lo=mid+1;
		}
		else {
			hi=mid-1;
		}
	}
	
	if(ans==-1) {cout<<0;}
	else{ cout<<(n)-ans;}
	
	
}
	