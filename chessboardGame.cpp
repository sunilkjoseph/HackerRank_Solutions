#include <iostream>

using namespace std;

string chessboardGame(int x, int y) {
    // Check if the starting position is winning or not
    x %= 4;
    y %= 4;

    // If the coordinates are at one of the corner cells, Second player wins; otherwise, First player wins.
    if (y == 0 || y == 3 || x == 0 || x == 3) {
        return "First";
    } else {
        return "Second";
    }
}

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int x, y;
        cin >> x >> y;

        // Get the result for each test case
        string result = chessboardGame(x, y);

        // Output the result
        cout << result << "\n";
    }

    return 0;
}
