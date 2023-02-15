#include <iostream>
#include <list>
using namespace std;


int main() {
	list <int> nList, mList;

	int n, m, temp;
	cin >> n >> m;
	if (m > 1000 || n > 1000) return 0;

	for (int i = 0; i < n+m;i++) {
		cin >> temp;
		if(i<n) nList.push_back(temp);
		else mList.push_back(temp);
	}

	copy(nList.rbegin(), nList.rend(), front_inserter(mList));
	mList.sort( std::greater<int>());

	
	for (int element : mList) {
		cout << element << " ";
	}
	mList.clear();
	nList.clear();
        return 0;
	
}