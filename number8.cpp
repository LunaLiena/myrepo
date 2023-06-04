#include<iostream>
#include<vector>
using namespace std;

template<typename a, typename v>void find(a elem, vector<v>& f) {
	
	a chet;
	size_t index = 0;
	for (size_t i = 0; i < f.size(); i++) {
		if (f[i] == elem) {
			chet = f[i];
			index = i;
		}
	}

	if (chet == elem) {
		cout << "find is " << chet << ", index is " << index;
	}
	else {
		cout<<"Not found";
	}
}

int main() {

	vector<int>a{ 1,2,3,4,5,6,7 };
	int d = 4;
	int g = 5;
	find(d, a);
	cout << "\n";
	vector<string>s{ "apple","not bad","celebrated","hello" };
	string cel = "celebrated";
	find(cel, s);
}