#include <bits/stdc++.h>
using namespace std;
long long int numPath(vector<vector<int> >warehouse){
	long long int n=warehouse.size();
	long long int m=warehouse[0].size();
	long long int arr[n][warehouse[0].size()]={0};
	arr[0][0]=1;
	for(long long int i=0;i<n;i++){
		for(long long int j=0;j<m;j++){
			if(i==0 && j==0){
				continue;
			}
			if(warehouse[i][j]==1){
				//we can come to this point
				long long int ways = 0;
				if(i-1 >= 0){
					ways += arr[i-1][j];
				}
				if(j-1 >= 0){
					ways += arr[i][j-1];
				}
				arr[i][j]=ways%1000000007;
			}
			else{
				arr[i][j]=0; 
				// we cannot come to this point
			}
		}
	}
	return arr[n-1][m-1]%1000000007;
}

int main(){
	vector<vector<int> >arr;
	vector<int>tej;
	tej.push_back(1);
	tej.push_back(1);
	tej.push_back(1);
	tej.push_back(1);
	arr.push_back(tej);
	arr.push_back(tej);
	arr.push_back(tej);
	cout<<numPath(arr)<<"\n";
}