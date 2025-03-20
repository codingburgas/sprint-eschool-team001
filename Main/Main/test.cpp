#include "test.h"
#include "question.h"
#include <iostream>
#include <random>
#include <vector>
using namespace std;
void test(int diffculty) {
	int number_of_questions = 25, total_score = 0,min = 1, max = 25,count = 25;

	vector<int> numbers;
	for (int i = min; i <= max; ++i) {
		numbers.push_back(i);
	
	random_device rd;
	mt19937 g(rd());
	shuffle(numbers.begin(), numbers.end(), g);
		for (size_t i = 0; i < number_of_questions; i++) {
			switch (diffculty) {
			case 1:
				if (question(1, numbers[i]) == true) {
					total_score += 2;
				}
			case 2:
				if (question(2, numbers[i]) == true) {
					total_score += 2;
				}
			case 3:
				if (question(3, numbers[i]) == true) {
					total_score += 2;
				}
				else {
					cout << "Wrong Answer!";
				}
			}
		}
}