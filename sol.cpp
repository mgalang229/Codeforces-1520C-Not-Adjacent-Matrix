#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		if (n == 2) {
			cout << -1 << '\n';
			continue;
		}
		// print the odd numbers first, then print the remaining even numbers
		// note: all numbers must be within this range, 1 <= A[i] <= (N ^ 2)
		int odd = 1;
		int even = 2;
		int last = n * n;
		int a[n][n] = {0};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (odd <= last) {
					a[i][j] = odd;
					odd += 2;
				} else {
					a[i][j] = even;
					even += 2;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
  }	
	return 0;
}
