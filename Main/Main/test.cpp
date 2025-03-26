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
			cout << "YOUR GRADE IS 6" << endl;
			cout << R"( 
 __    __   ___   __    __  __       _____ __ __  ____   ___  ____  
|  |__|  | /   \ |  |__|  ||  |     / ___/|  |  ||    \ /  _]|    \ 
|  |  |  ||     ||  |  |  ||  |    (   \_ |  |  ||  o  )  [_ |  D  )
|  |  |  ||  O  ||  |  |  ||__|     \__  ||  |  ||   _/    _]|    / 
|  `  '  ||     ||  `  '  | __      /  \ ||  :  ||  | |   [_ |    \ 
 \      / |     | \      / |  |     \    ||     ||  | |     ||  .  \
  \_/\_/   \___/   \_/\_/  |__|      \___| \__,_||__| |_____||__|\_|


                   __ooooooooo__
              oOOOOOOOOOOOOOOOOOOOOOo
          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo
       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo
     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo
   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo
  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo
 oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo
 oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo
oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo
oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo
oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo
 *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*
 *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*
  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*
   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*
     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*
       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*      
          *OOOOOOOOo           oOOOOOOOO*      
              *OOOOOOOOOOOOOOOOOOOOO*          
                   ""ooooooooo""

)";



			presstoexit();
		}
		if (total_score >= 34 && total_score < 42)
		{
			cout << "YOUR GRADE IS 5" << endl;
			cout << R"(
 ____     ___   ____  _      _      __ __       ____   ___    ___   ___    __ 
|    \   /  _] /    || |    | |    |  |  |     /    | /   \  /   \ |   \  |  |
|  D  ) /  [_ |  o  || |    | |    |  |  |    |   __||     ||     ||    \ |  |
|    / |    _]|     || |___ | |___ |  ~  |    |  |  ||  O  ||  O  ||  D  ||__|
|    \ |   [_ |  _  ||     ||     ||___, |    |  |_ ||     ||     ||     | __ 
|  .  \|     ||  |  ||     ||     ||     |    |     ||     ||     ||     ||  |
|__|\_||_____||__|__||_____||_____||____/     |___,_| \___/  \___/ |_____||__|

                    *****************
               ******               ******
           ****                           ****
        ****                                 ***
      ***                                       ***
     **           ***               ***           **
   **           *******           *******          ***
  **            *******           *******            **
 **             *******           *******             **
 **               ***               ***               **
**                                                     **
**       *                                     *       **
**      **                                     **      **
 **   ****                                     ****   **
 **      **                                   **      **
  **       ***                             ***       **
   ***       ****                       ****       ***
     **         ******             ******         **
      ***            ***************            ***
        ****                                 ****
           ****                           ****
               ******               ******
                    *****************
)";
			presstoexit();
		}
		if (total_score >= 26 && total_score < 33)
		{
			cout << "YOUR GRADE IS 4";
			cout << R"(
  ____   ___    ___   ___    __ 
 /    | /   \  /   \ |   \  |  |
|   __||     ||     ||    \ |  |
|  |  ||  O  ||  O  ||  D  ||__|
|  |_ ||     ||     ||     | __ 
|     ||     ||     ||     ||  |
|___,_| \___/  \___/ |_____||__|



________$$$$
_______$$__$
_______$___$$
_______$___$$
_______$$___$$
________$____$$
________$$____$$$
_________$$_____$$
_________$$______$$
__________$_______$$
____$$$$$$$________$$
__$$$_______________$$$$$$
_$$____$$$$____________$$$
_$___$$$__$$$____________$$
_$$________$$$____________$
__$$____$$$$$$____________$
__$$$$$$$____$$___________$
__$$_______$$$$___________$
___$$$$$$$$$__$$_________$$
____$________$$$$_____$$$$
____$$____$$$$$$____$$$$$$
_____$$$$$$____$$__$$
_______$_____$$$_$$$
________$$$$$$$$$$


)";
			presstoexit();
		}
		if (total_score >= 18 && total_score < 25)
		{
			cout << "YOUR GRADE IS 3";
			cout << R"(
 ______  ____   __ __      ____     ___ ______  ______    ___  ____   __ 
|      ||    \ |  |  |    |    \   /  _]      ||      |  /  _]|    \ |  |
|      ||  D  )|  |  |    |  o  ) /  [_|      ||      | /  [_ |  D  )|  |
|_|  |_||    / |  ~  |    |     ||    _]_|  |_||_|  |_||    _]|    / |__|
  |  |  |    \ |___, |    |  O  ||   [_  |  |    |  |  |   [_ |    \  __ 
  |  |  |  .  \|     |    |     ||     | |  |    |  |  |     ||  .  \|  |
  |__|  |__|\_||____/     |_____||_____| |__|    |__|  |_____||__|\_||__|


    .-""""""-.
   .'          '.
  /   O    -=-   \
 :                :   you'll study more, won't you?
 |                |  
 : ',          ,' :
  \  '-......-'  /
   '.          .'
     '-......-'

)";
			presstoexit();
		}
		else {
			cout << "OH! YOUR GRADE IS 2...";
			cout << R"(  
  ___   __ __      ____    ___              	 .-""""""-.
 /   \ |  |  |    |    \  /   \                .'          '.
|     ||  |  |    |  _  ||     |              /   O      O   \
|  O  ||  _  |    |  |  ||  O  |             :           `    :
|     ||  |  |    |  |  ||     | __  __  __  |                |
|     ||  |  |    |  |  ||     ||  ||  ||  | :    .------.    :
 \___/ |__|__|    |__|__| \___/ |__||__||__|   '.          .'
)";
			presstoexit();
		}

	}


