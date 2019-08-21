#include<iostream>
#include<string>
using namespace std; 

int main() {
	string strochka;
	while (true) {
		getline(cin, strochka);
		if (strochka.length() <= 4) {
			cout << "Little to no pain.\n";
		}
		else if (strochka.length() > 4 && strochka.length() <= 10) {
			cout << "50% painful.\n";
		}
		else {
			cout << "Too much pain. My systems have been broken. Exiting.....\n";
		}	
	}
	return 0;
}
