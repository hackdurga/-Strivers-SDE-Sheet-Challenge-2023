#include <bits/stdc++.h> 

void sort012(int *arr, int n) {
    int low = 0;          // Pointer for 0s boundary
    int mid = 0;          // Pointer for 1s boundary
    int high = n - 1;     // Pointer for 2s boundary

    while (mid <= high) {
        if (arr[mid] == 0) {
            std::swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            std::swap(arr[mid], arr[high]);
            high--;
        }
    }
}
