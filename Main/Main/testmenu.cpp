#include "testmenu.h";
#include "test.h"
#include <iostream>;
using namespace std;
void testmenu() {
	int difficulty;
	cout << "Choose difficulty!";
	do {
		cin >> difficulty;
	}
	while (difficulty < 3 && difficulty > 0); // need to do some kind of message for for that

	switch (difficulty){
	case 1:
		test(1);
	case 2:
		test(2);
	case 3:
		test(3);
}