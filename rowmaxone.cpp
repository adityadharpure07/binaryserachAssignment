#include<iostream>
using namespace std;
int main(){
	int arr[6][5]={{0,0,1,1,1},{1,1,1,1,1},{0,0,0,0,1},{0,1,1,1,1},{0,0,0,0,0},{0,0,1,1,1}};
	int target=1;
	int n=6,m=5;
	int firstidx=-1;
	int max=-1;
	int row=-1;
	for(int i=0;i<m;i++){
		int lo=0;
        int hi=m-1;
		int count=0;
        while(lo<=hi){
		int mid=(lo+(hi-lo)/2);
		if(arr[i][mid]==target){
			if(mid==0){
				firstidx=mid;
				break;
			}
			else if(arr[i][mid]!=target){
				firstidx=mid;
				break;
			}
			else{
				hi=mid-1;
			}
		}
		else if(arr[i][mid]<target){
			lo=mid+1;
		}
		else {
			hi=mid-1;
		}
	}
	count = (firstidx == -1) ? 0 : (m - firstidx);
	if(count>max){
        max=count;
		row=i;
	 }
	}
	
	 cout<<row<<" "<<max;
	
	
}
	