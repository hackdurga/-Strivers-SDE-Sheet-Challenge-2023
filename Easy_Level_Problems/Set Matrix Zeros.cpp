#include <bits/stdc++.h>

void setZeros(vector<vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        return;
    }

    int rows = matrix.size();
    int cols = matrix[0].size();

    unordered_set<int> zeroRows;
    unordered_set<int> zeroCols;

    // Iterate through the matrix and find zero positions
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroRows.insert(i);
                zeroCols.insert(j);
            }
        }
    }

    // Set the entire row and column to zeros if any zero is found
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (zeroRows.count(i) || zeroCols.count(j)) {
                matrix[i][j] = 0;
            }
        }
    }
}
