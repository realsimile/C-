#include <bits/stdc++.h>

using namespace std;

string sum(string a, string b){
    string ans = "";
    if (a.size() > b.size()) while (b.size() < a.size()) b.insert(0,"0");
	  if (a.size() < b.size()) while (b.size() > a.size()) a.insert(0,"0");
	
	  a.insert(0, "0"); b.insert(0, "0");
	
	  int s = 0, n = 0; char c;
	
  	for (int k = a.size() - 1; k >= 0; k--){
  		s = a[k] + b[k] + n - 96;
  		n = s / 10;
  		c = s % 10 + '0';
  		ans = c + ans;
  	}
	
  	if (n == 1) return "1";
  	return ans;
}

int main() {
  	string a,b; cin>>a>>b; cout<<sum(a, b);
  
    return 0;
}
