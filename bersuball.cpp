#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
	int b; cin >> b;
    vector<int> boys(b);
    for (int i = 0; i < b; i++) {
        cin >> boys[i];
    }
    int g; cin >> g;
    vector<int> girls(g);
    for (int i = 0; i < g; i++) {
        cin >> girls[i];
    }

    int pairs = 0;
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    while (!(boys.empty())) {
        int boy_level = boys[0];
        int max_index = -1;
        for (int i = 0; i < girls.size(); i++) {
            // check if its possibility
            if (abs(boy_level - girls[i]) <= 1){
                if (max_index == -1 || boy_level - girls[i] < max_index) {
                    max_index = i;
                }
            }
        }
         // erase first boy, erase girl if good and +1 pairs
        boys.erase(boys.begin());
        if (max_index != -1) {
            pairs++;
            girls.erase(girls.begin() + max_index);
        }
    }

    cout << pairs;
}