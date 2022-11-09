#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	auto mx = int{ 0 };
	auto mn = int{ 10000 };
	while (0 < (n--)) {
		int x;
		cin >> x;

		if (mx < x) {
			mx = x;
		}

		if (x < mn) {
			mn = x;
		}
	}

	cout << mx - mn;

	return 0;
}