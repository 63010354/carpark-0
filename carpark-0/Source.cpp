#include<iostream>
using namespace std;

int total;

int parkcost(int, int);

int main() {
	int s, h, m, time;
	cin >> s >> h >> m;

	time = (h * 60) + m;
	parkcost(s, time);

	cout << total;
}

int parkcost(int shop, int time) {
	if (shop >= 1000) {
		time = time - 240;
		if (time % 60 > 0) {
			total = ((time / 60) * 30) + 30;
			return total;
		}
		else if (time % 60 == 0) {
			total = ((time / 60) * 30);
			return total;
		}
	}
	else if (shop < 1000) {
		time = time - 60;
		if (time % 60 > 0) {
			total = ((time / 60) * 30) + 30;
			return total;
		}
		else if (time % 60 == 0) {
			total = ((time / 60) * 30);
			return total;
		}
	}
}
