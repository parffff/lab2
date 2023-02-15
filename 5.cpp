#include <iostream>
#include <list>
using namespace std;

int main() {

	int temp;

	list<int> nums;
	while (cin >> temp) {
		if (abs(temp) > 1000) return 0;
		nums.push_back(temp);
		nums.sort();
		nums.unique();
		if (cin.peek() == '\n') break;
	}
	for (int element : nums) {
		cout << element << " ";
	}
        return 0;
}