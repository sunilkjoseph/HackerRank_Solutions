#include <iostream>

using namespace std;

int towerBreakers(int n, int m) {
    // If m is 1 or n is even, Player 2 wins; otherwise, Player 1 wins.
    return (m == 1 || n % 2 == 0) ? 2 : 1;
}

int main() {
    // Number of test cases
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        int result = towerBreakers(n, m);
        cout << result << "\n";
    }

    return 0;
}
