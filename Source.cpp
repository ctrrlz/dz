//Гляк_Алёна 
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*1
	const int n = 100;
	int a[n];
	srand(time(0));
	for (int i = 0; i < n; i++) { 
		a[i] = rand() % 201 - 100; 
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		s+= a[i];
	}
	cout << s << endl;*/
	/*2
	const int n = 80;
	int a[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			s += a[i];
		}
	}
	cout << s << endl;*/
	/*3
	const int n = 60;
	int a[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == 0) {
			s++;
		}
	}
	cout << s << endl;*/
	const int n = 90;
	int a[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 201 - 100;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			s*=a[i];
		}
	}
	cout << s << endl;
	return 0;
}
