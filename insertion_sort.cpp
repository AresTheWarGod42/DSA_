#include <iostream>
using namespace std;
int main() {
   int arr[] = {8, 2, 4, 7, 9, 2, 1, 5};
   int length = sizeof(arr) / sizeof(arr[0]);

   insertion_sort(arr, length);
    for(int i = 0; i < length; i++) {
         cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int length) {
    for(int i = 0; i<length; i++) {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr [j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
