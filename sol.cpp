#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	// to create the sequence needed:
	// add the current and the next element in the vector
	vector<int> a;
	for (int i = 0; i < n - 1; i++) {
		a.emplace_back(b[i] + b[i + 1]);
	}
	// also, store the last value of array in the vector
	a.emplace_back(b[n - 1]);
	for (auto x : a) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;	
}
