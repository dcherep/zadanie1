#include <iostream>
#include <Windows.h>
#include <locale.h>

struct Student {
    std::string name;
    std::string surname;
};

int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student student;
    int poseshcheniya, propuski;
    int bal;
    float sredniy_bal;

    std::cout << "Введите имя студента: ";
    std::cin >> student.name;

    std::cout << "Введите фамилию студента: ";
    std::cin >> student.surname;

    std::cout << "Введите количество посещенных занятий: ";
    std::cin >> poseshcheniya;

    std::cout << "Введите количество пропусков: ";
    std::cin >> propuski;

    if (poseshcheniya >= 0 && propuski >= 0) {
        bal = (poseshcheniya * 5) + (propuski * 2);
        sredniy_bal = static_cast<float>(bal) / (poseshcheniya + propuski);

        std::cout << std::endl;
        std::cout << student.name << " " << student.surname << " " << std::endl;
        std::cout << "Баллы студента: " << bal << std::endl;
        std::cout << "Средний балл студента: " << sredniy_bal << std::endl;
        std::cout << "Кол-во пропусков: " << propuski << std::endl;
    }
    else {
        std::cout << "Введено некорректное значение для количества посещенных занятий или пропусков." << std::endl;
    }

    return 0;
}
