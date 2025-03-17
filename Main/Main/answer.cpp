#include "answer.h"
#include <string>
#include <iostream>
using namespace std;
bool answer(string rightanswer) {
	string useranswer;
	getline(cin, useranswer);
	if (rightanswer == useranswer) {
		return true;
	}
	else {
		return false;
	}
}