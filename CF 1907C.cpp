#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
	int n, FreqAr[26] = {0}; string s; cin>>n>>s;
	
	int maxSize = 0; //Most frequent character (its amount)
	
	for (int k = 0; k < n; k++){
		FreqAr[s[k] - 'a']++;
		maxSize = max(FreqAr[s[k] - 'a'], maxSize);
	}
	
	if (maxSize >= n - maxSize) cout<<maxSize * 2 - n<<endl;
	else cout<<n % 2<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin>>t;
	while (t--) solve();
	
	return 0;
}
