#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[100], n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int t;
	for(int i=0; i<n; i++){
		t=a[i];
		while(a[i]%5!=0){
			a[i]++;
		}
		if(a[i]-t>=3 || a[i]<38){
			a[i]=t;
		}
	}
	for(int i=0; i<n; i++){
		cout << a[i] << "\n";
	}
}