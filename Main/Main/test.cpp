#include "test.h";
#include "question.h";
#include <iostream>
using namespace std;
void test(int diffculty) {
	int number_of_questions,total_score = 0;  //need to think how many questions we will have
	for (size_t i = 0; i < number_of_questions; i++) {
		int questionindx; // need to do a random numbers that dont repeats
		switch (diffculty) {
		case 1:
			question(1,questionindx);
		case 2:
			question(2,questionindx);
		case 3:
			question(3,questionindx);
		}
	}
	// need to do a total score counter here that will show grade
}