#include <iostream>
#include "main.hpp"
#include "menu_function.hpp"

using namespace LAlex;

int main() {
    // Пункты меню изучения математики
    MenuItem study_summ_item = {"1 - хочу научиться складывать", study_summ, nullptr, nullptr, 0};
    MenuItem study_substract_item = {"2 - Хочу научиться вычитать", study_substract, nullptr, nullptr, 0};
    MenuItem study_multiply_item = {"3 - Хочу научиться умножать", study_multiply, nullptr, nullptr, 0};
    MenuItem study_divide_item = {"4 - Хочу научиться делить", study_divide, nullptr, nullptr, 0};
    MenuItem study_go_back_item = {"0 - Выйти в главное меню", study_go_back, nullptr, nullptr, 0};
    
    MenuItem* study_children[] = {
	&study_go_back_item,
        &study_summ_item,
        &study_substract_item,
        &study_multiply_item,
        &study_divide_item
    };
    
    // Меню изучения
    MenuItem study_item = {"1 - Хочу учиться математике", show_menu, nullptr, study_children, 5};
    
    MenuItem exit_item = {"0 - Лучше пойду полежу", exit, nullptr, nullptr, 0};
    
    MenuItem* main_children[] = {&exit_item, &study_item};
    
    // Главное меню
    MenuItem main_item = {"Главное меню", show_menu, nullptr, main_children, 2};
    
    // Устанавливаем родителей
    study_item.parent = &main_item;
    exit_item.parent = &main_item;
    
    study_summ_item.parent = &study_item;
    study_substract_item.parent = &study_item;
    study_multiply_item.parent = &study_item;
    study_divide_item.parent = &study_item;
    study_go_back_item.parent = &study_item;
    
    // Основной цикл меню
    const MenuItem* current = &main_item;
    while (current != nullptr) {
        current = current->func(current);
    }
    
    return 0;
}
