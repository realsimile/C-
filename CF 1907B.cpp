#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

bool isupper(char c) {
	if (c == 'B' or c == 'b') return false;
    return (c >= 'A' && c <= 'Z');
}

bool islower(char c) {
	if (c == 'b' or c == 'B') return false;
    return (c >= 'a' && c <= 'z');
}

void solve(){
	string s, ans = ""; cin>>s;
	
	int sb = 0, bb = 0; // Small b; Big B;
	
	for (int k = s.size() - 1; k >= 0; k--){
		if (sb > 0 and islower(s[k])){
			sb--;
			continue;
		}
		if (bb > 0 and isupper(s[k])){
			bb--;
			continue;
		}
		if (s[k] == 'b'){
			sb++;
			continue;
		}
		if (s[k] == 'B'){
			bb++;
			continue;
		}
		ans += s[k];
	}
	
	reverse(ans.begin(), ans.end());
	
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin>>t;
	
	while (t--) solve();
	
	return 0;
}
