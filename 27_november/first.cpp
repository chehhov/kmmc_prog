#include <iostream>

int main() {
	int user_input;
	
	do {
			std:: cout << "Обучайка приветствует тебя, мой юный ученик!" << std:: endl;
			std:: cout << "1 - Хочу учиться математике"  << std:: endl;
			std:: cout << "0 - Лучше пойду полежу" << std:: endl;
			std:: cout << "Обучайка  >";
			
			std:: cin >> user_input;
			
			if (user_input == 1) {
				//TODO
			}
			else {
				exit(0);
			}
	} while (true);
	
	return 0;
		
}
