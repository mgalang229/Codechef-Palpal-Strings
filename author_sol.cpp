#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		vector<int> counter(26, 0);
		for (int i = 0; i < (int) s.size(); i++) {
			// count the frequency of each letter
			counter[s[i] - 'a']++;
		}
		int odd = 0;
		for (int i = 0; i < (int) counter.size(); i++) {
			if (counter[i] & 1) {
				// count the letters with odd frequency
				odd++;
			}
		}
		// calculate the remaining even number of characters after removing a letter from
		// the letters which have an odd frequency
		int even = (int) s.size() - odd;
		// then, divide the remaining even number of characters by two in order to provide
		// the maximum number of pairs which are palindrome and check if it can accommodate
		// the single remaining characters which can be inserted in the middle (palindrome)
		cout << ((even / 2) >= odd ? "YES" : "NO") << '\n';
	}
	return 0;
}
