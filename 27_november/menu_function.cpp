#include "menu_function.hpp"
#include "main.hpp"
#include <iostream>

using namespace LAlex;

const MenuItem* LAlex::show_menu(const MenuItem* current) {
    std::cout << current->title << ":\n";
    for (int i = 0; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << "\n";
    }
    
    int choice;
    std::cin >> choice;
    
    if (choice >= 0 && choice < current->children_count) {
        return current->children[choice];
    }
    
    return current;
}

const MenuItem* LAlex::exit(const MenuItem* current) {
    return nullptr;
}

const MenuItem* LAlex::study_summ(const MenuItem* current) {
    std::cout << "Изучаем сложение...\n";
    return current->parent;
}

const MenuItem* LAlex::study_substract(const MenuItem* current) {
    std::cout << "Изучаем вычитание...\n";
    return current->parent;
}

const MenuItem* LAlex::study_multiply(const MenuItem* current) {
    std::cout << "Изучаем умножение...\n";
    return current->parent;
}

const MenuItem* LAlex::study_divide(const MenuItem* current) {
    std::cout << "Изучаем деление...\n";
    return current->parent;
}

const MenuItem* LAlex::study_go_back(const MenuItem* current) {
    return current->parent->parent;
}
