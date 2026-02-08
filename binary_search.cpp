#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& nums, int target, int left, int right) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (nums[mid] == target) {
        return mid;
    }

    if (nums[mid] > target) {
        return binarySearch(nums, target, left, mid - 1);
    }

    return binarySearch(nums, target, mid + 1, right);
}

int main() {
    int n, target;

    if (!(cin >> n)) return 0;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    int result = binarySearch(nums, target, 0, n - 1);
    cout << result << endl;

    return 0;
}