//My Solution

#define toStr(a) #a
#define foreach(v,i) for(int i =0;i<v.size();i++) 
#define io(v) std::cin >> v 
#define FUNCTION(name,ch) void name(int &a,int b){!(a ch b)? a = b :false;}
#define INF 10000000

//End

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, < )
	FUNCTION(maximum, > )

	int main() {
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result = ) << ' ' << ans;
	return 0;

}