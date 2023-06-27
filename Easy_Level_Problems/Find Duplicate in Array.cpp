#include <bits/stdc++.h>

int findDuplicate(vector<int>& arr, int n) {
    unordered_set<int> seen;

    for (int num : arr) {
        if (seen.count(num)) {
            return num;
        }
        seen.insert(num);
    }

    // Return -1 if no duplicate is found
    return -1;
}
