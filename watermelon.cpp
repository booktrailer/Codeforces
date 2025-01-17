#include <bits/stdc++.h>
using namespace std;

int main() {
    int kilos;
	cin >> kilos;

    if (kilos%6 == 0 || kilos%4 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
