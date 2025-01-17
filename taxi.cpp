#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> s(n); for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int taxis = 0;
    sort(s.begin(),s.end()); // sort ascending
    int i = 0; // lowest index
    int j = n-1; // highest index

    while (i <= j) {
        taxis++;
        int taxi_space = 4 - s[j];
        j--;

        while (i <= j && s[i] <= taxi_space) {
            taxi_space -= s[i];
            i++;
        }

    }

    cout << taxis;

}
