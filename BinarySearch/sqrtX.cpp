#include <bits/stdc++.h>
using namespace std;

long long binary_sqrt(long long x) {
	if (x<2) return x;

	long long left = 0;
	long long right = x/2;
	long long ans = 0;

	while (left <= right) {
		long long mid = left + (right - left)/2;

		if (mid <= x / mid) {
			ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return ans;
}

int main() {
	long long x;
	cout << "Enter the number" << "\n";
	cin >> x;

	long long ans = binary_sqrt(x);

	cout << "The square root of " << x << " is " << ans << "\n";
}
