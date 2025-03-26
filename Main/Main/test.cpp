#include "test.h"
#include "menu.h"
#include "question.h"
#include <iostream>
#include <random>
#include <vector>
using namespace std;
void presstoexit() {
	char something;
	do {
		cin >> something;
	} while (something == '\0');
	menu();
}

void test(int diffculty) {
	int number_of_questions = 25, total_score = 0, min = 1, max = 25;

	vector<int> numbers;
	for (int i = 0; i <= max; ++i) {
		numbers.push_back(i);

		random_device rd;
		mt19937 g(rd());
		shuffle(numbers.begin(), numbers.end(), g);
	}
		for (size_t i = 0; i < number_of_questions; i++) {
			switch (diffculty) {
			case 1:
				system("cls");
				if (question(1, numbers[i]) == true) {
					total_score += 2;
				}
				break;
			case 2:
				system("cls");
				if (question(2, numbers[i]) == true) {
					total_score += 2;
				}
				break;
			case 3:
				system("cls");
				if (question(3, numbers[i]) == true) {
					total_score += 2;
				}
				break;
			}
		}
		system("cls");
		if (total_score >= 42)
		{
			cout << "You have 6";
			presstoexit();
		}
		if (total_score >= 34 && total_score < 42)
		{
			cout << "5";
			presstoexit();
		}
		if (total_score >= 26 && total_score < 33)
		{
			cout << "4";
			presstoexit();
		}
		if (total_score >= 18 && total_score < 25)
		{
			cout << "3";
			presstoexit();
		}
		else {
			cout << "2";
			presstoexit();
		}

	}
