#include "question.h"
#include "answer.h"
#include <string>
#include <iostream>
using namespace std;
bool question(int diffuclty, int question_index) {
	string rightanswer;
	switch (diffuclty) {
	case 1: {
		switch (question_index) {
		case 1:
			cout << R"(How many stars are on the Chinese flag ? 
1) 4
2) 5
3) 6
4) 7)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 2:
			cout << R"(What is the chemical element with the symbol Fe?
1) Iron
2) Iodine
3) Fermium
4) Flerovium)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 3:
			cout << R"(In what year did World War II end?
                       1) 1944s
                       2) 1945
                       3) 1946
                       4) 1942)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 4:
			cout << R"(Where did sushi originate?
                       1) Japan
                       2) South Korea
                       3) Nepal
                       4) China)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 5:
			cout << R"(How many days does it take for the Earth to orbit the Sun?
                       1) 356
                       2) 365
                       3) 362
                       4) 368)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 6:
			cout << R"(What's the smallest country in the world?
                       1) The Vatican
                       2) The UK
                       3) Monaco
                       4) Tuvalu)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 7:
			cout << R"(What's the capital city of Bulgaria? (type only one word, beginning with capital letter))" << endl;
			rightanswer = "Sofia";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 8:
			cout << R"(What's the most spoken language in the world?
                       1) English
                       2) Mandarin
                       3) Hindi
                       4) Arabic)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 9:
			cout << R"(How do you say 'Hello' in French?
                       1) Hallo
                       2) Bonjour
                       3) Anneyong
                       4) Privet)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 10:
			cout << R"(The largest planet of Solar System is...
                       1) Earth
                       2) Moon
                       3) Jupiter
                       4) Sun)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 11:
			cout << R"(The longest river in the world is...
                       1) The Nile
                       2) the Amazon
                       3) Mississippi
                       4) Lena)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 12:
			cout << R"(What primary colors can be mixed to get purple?
                       1) Orange and Blue
                       2) Red and Blue
                       3) Blue and Green
                       4) Blue and Black)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
			cout << endl;
		case 13:
			cout << R"(Which state is famous for Hollywood?
                       1) California
                       2) Ohio
                       3) Texas
                       4) Arizona)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 14:
			cout << R"(Who wrote Hamlet?
                       1) Dostoevsky
                       2) William Shakespeare
                       3) Agatha Christie
                       4) J.K Rowling)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 15:
			cout << R"(How many colors are in a rainbow?
                       1) Eight
                       2) Six
                       3) Nine
                       4) Seven)" << endl;
			rightanswer = "4";
			return answer(rightanswer);;
			break;
		case 16:

			cout << R"(Arachnophobia means you're scared of...
                       1) People
                       2) School
                       3) Spiders
                       4) Mountains)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;
		case 17:

			cout << R"(The tallest mountain in the world is:
                       1) Mount Everest
                       2) K2
                       3) Kilimanjaro
                       4) Mount Blackburn)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 18:
			cout << R"(Who wrote the novel "War and Peace"?
                       1) Anton Chekhov
                       2) Fyodor Dostoevsky
                       3) Leo Tolstoy
                       4) Ivan Turgenev)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;
		case 19:
			cout << R"(Which country's silhouette is this?
                 _,__        .:
         Darwin <*  /        | \
            .-./     |.     :  :,
           /           '-._/     \_
          /                '       \
        .'                         *: Brisbane
     .-'                             ;
     |                               |
     \                              /
      |                            /
Perth  \*        __.--._          /
        \     _.'       \:.       |
        >__,-'             \_/*_.-'
                              Melbourne
                             :--,
                              '/
                       1) The UK
                       2) Australia
                       3) Russia
                       4) Pakistan)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 20:
			cout << R"(Which language is this: "annyeonghaseyo!"?
                       1) Chinese
                       2) Japanese
                       3) Hindi
                       4) Korean)" << endl;
			rightanswer = "4";
			return answer(rightanswer);;
			break;
		case 21:

			cout << R"(What does die Katze mean in German?
                       1) Cat
                       2) Hi
                       3) Dog
                       4) Carrot)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 22:
			cout << R"("A piece of cake" means...
                       1) Something very difficult
                       2) Someone silly
                       3) Something easy
                       4) Bad weather)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;
		case 23:
			cout << R"(How many vowels are there in the English alphabet?
                       1) 5
                       2) 7
                       3) 3
                       4) 4)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 24:
			cout << R"(How many days does February have in a leap year?
                       1) 29
                       2) 28
                       3) 27
                       4) 26)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 25:
			cout << R"(Which continent is this?⠀⠀
⠀⠀          ____________
           / |       | |
        ,' ,'         \/',_    __
     ,'__/             |    ',|  "'-,,,,,,,
   ,/  _|',            |                |   \
   |  |   |',           \               |    \
   |__|   |  ',          ',             |     \
  /       |     ',        ,_"""""---'-_,'______\
 /        |        ',,_-'"    |        |        ',
|_________|         |         /        |        / ',,'""""|
|__  |        ,____/         |        _|       /    |___  /
'\___|      ,'_,'|_,-,_______|         |       /      , '/
  \,' _', _/  ,, ,',|        |          \       |   '" ,'
   \ / |_ ,  |  \||||       ,' |      ,'|    _""    |,'
    ' ,'  ', |  ||||| __ ,'   _|_ ,'    |    |""---/
       ' ,"""','"""""" |     /           \"""|    /
                      |_____|_      __''"    \   |
                     |  |  /  """"""   |      \ /
                      \ / |            |       /
                       \--'            |      /
                       |   \__        _|__    |
                       |      |__     |   ',,,|
                       |         |____|   /   |
                       /         _|    ,,'_   |
                      |__________|___,'  ,,' /
                       \      ---'    \,/  ,'
                        \     |    ,,,' \_/
                         |    |_,''      |/
                         |    |       []_|
                          \___'        /
                           \       __,'
                            \_____/
type your answer, one word only, beginning with capital letter)" << endl;
			rightanswer = "Africa";
			return answer(rightanswer);;
		}
		break;
	}

	case 2: {
		switch (question_index) {

		case 1: cout << R"(How many minutes are in a full week?
			1) 10080;
			2) 3600; 
			3) 36000;
			4)1080;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 2: cout << R"(true or false: Holland is a region in The Netherlands?
			type true or false, all lowercase)" << endl;
			rightanswer = "true";
			return answer(rightanswer);;
			break;

		case 3: cout << R"(In what country is the Chernobyl nuclear plant located?
			1) USA;
			2) Belarus; 
			3) Ukraine; 
			4) Poland;)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 4: cout << R"(What is the largest Spanish-speaking city in the world?
			1) Mexico City; 
			2) Madrid; 
			3) Rome; 
			4) Paris;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 5: cout << R"(On which continent would you find the world's largest dessert?
			1) Africa; 
			2) Antarctica; 
			3) Australia; 
			4) Asia;)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;


		case 6: cout << R"(The capital of Ireland is...
			1) Dublin; 
			2) Lissabon; 
			3) Yakutsk; 
			4) Bangkok;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 7: cout << R"( Which country is portrayed?

                 \..,.-
                 .\   |         __
                 .|    .-     /  .;
           _      _|      \__/..     \
          \ ...\|   X Hamburg        :_
           |                           \
          /                            /
         -.                           |
          \  X Rheine      Berlin X    \
       __/                              |
      |                                 /
      |                                 \
     /                                   |
     \     X Cologne        Dresden  X . ,
      \                            ._-. .
     /                        __.-/
     |         X Frankfurt    \
      \                        \
       \                        \
        ...,.                    \
            /                     \.
           /                       ,.
          /                      ./
         |         Munich X     |
         \,......,__  __,  __.-. .
                    \/   -/     ..
 1) Germany;
 2) Switzerland;
 3) Poland;
 4) Canada;⠀⠀⠀⠀
)" << endl; rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 8: cout << R"( Which country is portrayed? 
          .  .-+  ._/V\
   / \/   \/    /__
  )                "-+._
 ."                      \
(                         )
 \                      /
   \__                 (
      >_               )
        \_.           /
           < S.Paulo /
            \   *  _/
             >    /
            /    /
           <    /
            "^./
1) Brasil; 2) Belgium; 3) Sudan; 4) Morocco;

)" << endl;

			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 9: cout << "If its 4 pm in Berlin, what time is it in Beijing? type your answer like this - 1am, all lowercase with no spaces;";
			rightanswer = "11pm";
			return answer(rightanswer);;
			break;

		case 10: cout << R"(How many elements are in the periodic table? 
			1) 118; 
			2) 18; 
			3) 28; 
			4) 158;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;


		case 11: cout << R"(Which is the only body part that is fully grown from birth?
			1) Eyes;
			2) Nose; 
			3) Lungs; 
			4) Ears;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 12: cout << R"( What animal has the largest brain relative to body size?
			1) Fish;
			 2) Eagle; 
			3) Bat; 
			4) Dolphin;)" << endl;
			rightanswer = "4";
			return answer(rightanswer);;
			break;
		case 13: cout << R"(Identical twins don't have the same...
			1) fingerprints; 
			2) eye color; 
			3) nose form; 
			4) hair color;
)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;


		case 14: cout << R"(Who painted the Mona Lisa?

			1) Leonardo da Vinci;
			2) Michelangelo;
			3) Rembrandt;
		    4) Vermeer;
)" << endl; rightanswer = "1";
			return answer(rightanswer);;
			break;


		case 15: cout << R"( What is the rarest blood type among humans?
			1) AB-negative; 
			2) A+; 
			3) AB+; 
			4) O+;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 16: cout << R"(Who wrote "Pride and Prejudice"?
			1) Jane Austen; 
			2) Albert Einstein; 
			3) Van Gogh; 
			4) Salvador Dali;
)" << endl; rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 17: cout << "In which year did the Titanic sink? type the answer in numbers.";
			rightanswer = "1912";
			return answer(rightanswer);;
			break;
		case 18: cout << R"(What is the currency of Japan?
			1) Won; 
			2) usd; 
			3) eur; 
			4) yen;
			)" << endl;
			rightanswer = "4";
			return answer(rightanswer);;
			break;
		case 19: cout << R"(Google Chrome, Safari, Firefox, and Explorer are different types of what?
			1) Apps; 
			2) Social media; 
			3) Web browsers; 
			4) Archives;
)" << endl;			rightanswer = "3";
			return answer(rightanswer);;
			break;
		case 20: cout << R"(Which programming language is often used for developing Android applications?
			1) Java; 
			2) C; 
			3) C++; 
			4) HTML;
)" << endl;			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 21: cout << "How many molecules of oxygen does ozone have? type your answer with number only;";
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 22: cout << R"( The shortest distance between Russia and the US is:
			1) 3.8 kilometers; 
			2) 38 km;	
			3) 380 km; 
			4) 3800km; )" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 23: cout << R"(What name does deer meat go by?
			1) beef; 
			2) pork; 
			3) venison; 
			4) deermeat;)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;
		case 24: cout << R"( Which country invented tea?
			1) Bulgaria; 
			2) China; 
			3) Finland; 
			4) Norway;)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 25: cout << R"( What is your body’s largest organ?
			1) Skin; 
			2) Leg; 
			3) Heart; 
			4) Stomach; )" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		}
		break;

	}




	case 3: {
		switch (question_index) {
		case 1:	cout << R"( What is the chemical symbol for gold?
			type like this : Br(beginning with capital letter, two letters in sum))" << endl;
			rightanswer = "Au";
			return answer(rightanswer);;
			break;

		case 2: cout << R"( What is the only continent where coffee grows naturally?
			1) Africa; 
			2) Australia; 
			3) South America; 
			4) Asia;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 3: cout << R"(What fruit is known as the "king of fruits"?
			1) Dragon Fruit; 
			2) Durian; 
			3) Mango; 
			4) Pineapple;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 4: cout << R"(What is the most spoken language in the world (by native speakers)?
            1) French; 
			2) Mandarin Chinese; 
			3) Hindi; 
			4) Arabic;)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 5: cout << R"(How many keys does a standard full-size piano have?
			1) 99; 
			2) 77; 
			3) 88; 
			4) 66;)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 6: cout << R"(What does this insect look like when developing/ being really young?

                           .oMc
                        .MMMMMP
                      .MM888MM
....                .MM88888MP
MMMMMMMMb.         d8MM8tt8MM
 MM88888MMMMc `:' dMME8ttt8MM
  MM88tt888EMMc:dMM8E88tt88MP
   MM8ttt888EEM8MMEEE8E888MC
   `MM888t8EEEM8MMEEE8t8888Mb
    "MM88888tEM8"MME88ttt88MM
     dM88ttt8EM8"MMM888ttt8MM
     MM8ttt88MM" " "MMNICKMM"
     3M88888MM"      "MMMP"
      "MNICKM"

			 1) caterpillar;
			 2) fly; 
		     3) worm; 
			 4) moth
)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 7: cout << R"( What do you call this animal being a female?

    .     _,
                   |`\__/ /
                   \  . .(
                    | __T|
                   /   |
      _.---======='    |
     //               {}
    `|      ,   ,     {}
     \      /___;    ,'
      ) ,-;`    `\  //
     | / (        ;||
     ||`\\        |||
     ||  \\       |||
     )\   )\      )||
     `"   `"      `""
1) hare; 2) doe; 3) ferret; 4) tadpole;)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 8: cout << R"(What is this type of precipitation called?

                           000      00
                           0000000   0000
              0      00  00000000000000000
            0000 0  000000000000000000000000       0
         000000000000000000000000000000000000000 000
        0000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000
              / / / / / / / / / / / / / / / /
            / / / / / / / / / / / / / / /
            / / / / / / / / / / / / / / /
          / / / / / / / / / / / / / /
          / / / / / / / / / / / / /
        / / / / / / / / / / / /
        / / / / / / / / / /

1) rain; 2) snow; 3) sleet; 4) hail;)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;

		case 9: cout << R"(In what year did the Chernobyl disaster occur?
			1) 1980; 
			2) 1983; 
			3) 1986; 
			4) 1989;)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 10: cout << R"( What style of art is Salvador Dali known for?
			1) realism; 
			2) surrealism; 
			3) impressionism; 
			4) cubism)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		case 11: cout << R"(What is the second largest country by land area?
			1) The US; 
			2) Russia; 
			3) Canada; 
			4) China;)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 12: cout << R"(What element has the atomic number 1?
			1) Hydrogen; 
			2) Iron; 
			3) Oxygen; 
			4) Gold;
)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 13: cout << R"(Who painted The Starry Night?

1) Vincent van Gogh; 2) Salvador Dali; 3) Shirley Chisholm; 4) Harper Lee
)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 14: cout << R"(What is the largest lake in the world?

1) Caspian Sea 2) Baikal 3) Lake Superior 4) Ontario
)" << endl; rightanswer = "2";
			return answer(rightanswer);;
			break;


		case 15: cout << R"(What animal is the national symbol of Australia?

1) Kangaroo 2) Koala 3) Emu 4) Crocodile

)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;



		case 16: cout << R"(Hitler's party is known as:

1) Labour Party 2) Nazi Party 3) Ku-Klux-Klan 4) Democratic Party
)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;

		case 17: cout << R"(Which is the largest island?

1) New Guinea 2) Andaman Nicobar 3) Greenland 4)Hawaii

)" << endl;			rightanswer = "1";
			return answer(rightanswer);;
			break;


		case 18: cout << R"(
Which one of the following countries is not in Africa?

1) Morocco 2) Yemen 3) Sudan 4)Algeria
)" << endl;			rightanswer = "2";
			return answer(rightanswer);;
			break;



		case 19: cout << R"(In which century the Mona Lisa was painted?

1) 18th century 2) 15th century 3) 16th century 4) 14th century
)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 20: cout << R"(How many bones are in the body of an adult human?

1) 330 2) 206 3) 250 4) 210)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;

		case 21: cout << R"(On the map the distance from the city to the village is 23 cm  Map scale is 1:200000. Find the true distance from the city to the village.
type your answer like this: 98km (example). No spaces, all lowercase

)" << endl;
			rightanswer = "46km";
			return answer(rightanswer);;
			break;

		case 22: cout << R"(What is the most common color on world flags?
1) Blue; 2) White; 3) Red; 4) Black;
)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 23: cout << R"(Which of these countries has the most colors on their flag?
1) France 2) Scotland 3) South Korea 4) China
)" << endl;
			rightanswer = "3";
			return answer(rightanswer);;
			break;

		case 24: cout << R"(How many colors are used in the South African flag?
1) 6; 2) 5; 3) 7; 4) 2;
)" << endl;
			rightanswer = "1";
			return answer(rightanswer);;
			break;
		case 25: cout << R"(Which country’s flag contains an image of the country?

1) Canada 2) Cyprus 3) India 4) Russia;
)" << endl;
			rightanswer = "2";
			return answer(rightanswer);;
			break;
		}
		break;
	}
	default: return false;
	}
}