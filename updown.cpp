#include <iostream>
#include <string>
#include <locale> // Для функций std::toupper и std::tolower

int main() {
    setlocale(LC_ALL, "Russian"); // Устанавливаем локаль для работы с русским языком
    std::string str;

    std::cout << "Введите строку: ";
    std::getline(std::cin, str);

    // Преобразование всех строчных букв к заглавным
    for (char& c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }

    std::cout << "Строка с заглавными буквами: " << str << std::endl;

    // Преобразование всех заглавных букв к строчным
    for (char& c : str) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }

    std::cout << "Строка с строчными буквами: " << str << std::endl;

    return 0;
}

git add
x
