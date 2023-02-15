#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> group;
	int n, k;
	cin >> n >> k;
	if (n > 1000 || k > 1000) return 0;
	for (int i = 1; i <= n; i++) {
		group.push_back(i);
	}

	int counter = 1, index =0;
	while (n != 1) {
		if (counter % k == 0) {
			auto l_front = group.begin();
			std::advance(l_front, index);
			group.remove(*l_front);
			n--;
			index--;
			counter = 0;
		}
		if (index >= n - 1) index = 0;
		else index++;
		counter++;
	}

	cout << group.front();
        return 0;
}