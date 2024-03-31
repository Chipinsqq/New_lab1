#include <iostream>
#include <string>
#include <locale> // ��� ������� std::toupper � std::tolower

int main() {
    setlocale(LC_ALL, "Russian"); // ������������� ������ ��� ������ � ������� ������
    std::string str;

    std::cout << "������� ������: ";
    std::getline(std::cin, str);

    // �������������� ���� �������� ���� � ���������
    for (char& c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }

    std::cout << "������ � ���������� �������: " << str << std::endl;

    // �������������� ���� ��������� ���� � ��������
    for (char& c : str) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }

    std::cout << "������ � ��������� �������: " << str << std::endl;

    return 0;
}

