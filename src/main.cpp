#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto c = int{};
	cin >> c;

	auto ta = int{ 0 };
	auto bed = int{ 0 };
	auto cost = double{ 0 };
	for (auto i = 0; i < n; ++i) {
		auto a = int{};
		auto s = string{};
		cin >> a >> s;

		ta += a;

		if ("bedroom" == s) {
			bed += a;
		}

		if ("balcony" == s) {
			cost += a / 2.0;
		}
		else {
			cost += a;
		}
	}

	cost *= c;

	cout << ta << '\n'
		<< bed << '\n'
		<< fixed << setprecision(6) << cost;

	return 0;
}