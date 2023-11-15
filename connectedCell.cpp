#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'connectedCell' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 */

int dfs(vector<vector<int>>& matrix, int row, int col) {
    int n = matrix.size();
    int m = matrix[0].size();

    // Check if the cell is out of bounds or already visited
    if (row < 0 || row >= n || col < 0 || col >= m || matrix[row][col] == 0) {
        return 0;
    }

    // Mark the cell as visited
    matrix[row][col] = 0;

    // Initialize the size of the connected component
    int size = 1;

    // Explore the neighboring cells
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            size += dfs(matrix, row + i, col + j);
        }
    }

    return size;
}

// Main function to find the size of the largest connected component in the matrix
int connectedCell(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int maxComponentSize = 0;

    // Iterate through each cell in the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // If the cell is part of a connected component, find its size using DFS
            if (matrix[i][j] == 1) {
                int componentSize = dfs(matrix, i, j);
                maxComponentSize = max(maxComponentSize, componentSize);
            }
        }
    }

    return maxComponentSize;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    vector<vector<int>> matrix(n);

    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }

    int result = connectedCell(matrix);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
