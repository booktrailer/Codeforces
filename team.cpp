#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int total_goods = 0;

    for (int i = 0; i < n; i++){
	    int triple[2]; cin >> triple[0] >> triple[1] >> triple[2];
        int yesses = 0;
        for (int i = 0; i < 3; i++) {
            if (triple[i] == 1) {
                yesses += 1;
            }
        }

        if (yesses > 1) {
            total_goods += 1;
        }

    }

    cout << total_goods;
}
