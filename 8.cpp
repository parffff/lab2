#include <iostream>
#include <vector>
#include <list>
using namespace std;

struct OneForm{
	int key;
	string str;
};


int main() {
	int length = 1000001;
	vector<list<string>> lists(length);
	list <int> keys;

	int n;
	cin >> n;
	if (n < 1 || n>2 * 100000) return 0;

	for (int i = 0; i < n; i++) {
		OneForm temp;
		cin >> temp.key >> temp.str;
		if (temp.key<0 || temp.key>length) continue;

		lists[temp.key].push_back(temp.str);
		keys.push_back(temp.key);
	}
	keys.sort();
	keys.unique();
	for (int k : keys) {
		for (string element : lists[k])
			std::cout << k << " " + element << endl;
	}
        return 0;
}

