#include <bits/stdc++.h>

using namespace std;

vector<vector<long long int>> printPascal(int n) {
    vector<vector<long long int>> pascalTriangle;
    
    // Handle the base case for the first row
    if (n >= 1) {
        pascalTriangle.push_back(vector<long long int>{1});
    }
    
    // Generate Pascal's triangle for the remaining rows
    for (int i = 1; i < n; i++) {
        vector<long long int> row(i + 1);
        row[0] = 1;  // First element of each row is always 1
        
        // Calculate the elements in the current row based on the previous row
        for (int j = 1; j < i; j++) {
            row[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
        
        row[i] = 1;  // Last element of each row is always 1
        pascalTriangle.push_back(row);
    }
    
    return pascalTriangle;
}
