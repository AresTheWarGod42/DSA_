#include <iostream>
#include <vector>
using namespace std;

void merge_sort(int arr[], int l, int r);

void merge(int arr[], int l, int m, int r);


int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, n-1);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

void merge_sort(int arr[], int l, int r) {
    if (l<r) {
        int m = l + (r-l)/2;
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);

        merge(arr, l, m, r);

    }
}

void merge(int arr[], int l, int m, int r) {
    int left_length = m - l + 1;
    int right_length= r - m;

    vector<int> temp_left(left_length);
    vector<int> temp_right(right_length);

    for (int i = 0; i < left_length; i++)
    temp_left[i] = arr[l + i];

    for (int j = 0; j < right_length; j++)
    temp_right[j] = arr[m + 1 + j];


    for (int i = 0, j = 0, k = l; k <= r; k++) {
        if ( i< left_length && (j >= right_length || temp_left[i] <= temp_right[j])) {
            arr[k] = temp_left[i];
            i++;
        } else {
            arr[k] = temp_right[j];
            j++;
        }
    }

}