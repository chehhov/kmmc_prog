#include <iostream>


#include "main.hpp"
#include "menu_function.hpp"

int main() {
	LAlex::MenuItem study = {"1 - Хочу учиться математике", LAlex:: study};
	LAlex::MenuItem exit = {"0 - Лучше пойду полежу", LAlex:: exit};


	LAlex::MenuItem* main_children[] = {&study, &exit};

	const int main_size = sizeof(main_children)/sizeof(main_children[0]);

	int user_input;

	do {
	    std:: cout << "Обучайка приветствует тебя, мой юный ученик!";
	    for (int i = 0; i < main_size; i++) {
	    	std::cout << main_children[i]->title << std:: endl;
	    }
	    std::cout << main_children[0]->title << std::endl;
	    std::cout << "Обучайка > ";

	    std::cin >> user_input;
	    main_children[user_input]->func();

	    std::cout << " " << std::endl;
	}
	while (true);
	
}
