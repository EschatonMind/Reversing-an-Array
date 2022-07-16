#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	string* name = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> name[i];
	}
	//-----------------------------------------
	int Size = sizeof(*name)*n / sizeof(string);
	int LastIndex = Size - 1;
	string* FirstElem = &name[0];
	string* LastElem = &name[LastIndex];
	while (FirstElem < LastElem) {

		string temp = *FirstElem;
		*FirstElem = *LastElem;
		*LastElem = temp;
		FirstElem++;
		LastElem--;
	}
	//-----------------------------------------
	int counter = 0;
	do {
		
		cout << " | " << name[counter] << " | " << flush;
		counter++;
	} while (counter <= LastIndex);
	return 0;
}
