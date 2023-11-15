#include <iostream>
#include <vector>

using namespace std;

string nimbleGame(vector<int> s) {
    int xorSum = 0;

    // Calculate the XOR sum of nim-values
    for (int i = 2; i < s.size(); i++) {
        if (s[i] % 2 == 1) {
            xorSum ^= (i - 1);
        }
    }

    // Determine the winner based on the XOR sum
    return (xorSum == 0) ? "Second" : "First";
}

int main() {
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;

        vector<int> s(n + 1); // 1-indexed array

        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }

        string result = nimbleGame(s);
        cout << result << "\n";
    }

    return 0;
}
