#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a; cin >> n >> m >> a;
	long long na; if (n%a == 0) {na = n/a;} else {na = n/a+1;}
	long long ma; if (m%a == 0) {ma = m/a;} else {ma = m/a+1;}

	cout << (na)*(ma);
}