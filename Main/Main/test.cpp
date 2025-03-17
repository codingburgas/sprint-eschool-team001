#include "test.h";
#include "question.h";
#include <iostream>
using namespace std;
void test(int diffculty) {
	int number_of_questions = 25, total_score = 0;  //need to think how many questions we will have
	for (size_t i = 0; i < number_of_questions; i++) {
		int questionindx; // need to do a random numbers that dont repeats
		switch (diffculty) {
		case 1:
			if (question(1, questionindx) == true) {
				total_score += 2;
			}
		case 2:
			if (question(2, questionindx) == true) {
				total_score += 2;
			}
		case 3:
			if (question(3, questionindx) == true) {
				total_score += 2;
			}
			else {
				cout << "Wrong Answer!";
			}
		}
	}
}