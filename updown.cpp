#include <iostream>
#include <string>
#include <locale> // ��� �㭪権 std::toupper � std::tolower

int main() {
    setlocale(LC_ALL, "Russian"); // ��⠭�������� ������ ��� ࠡ��� � ���᪨� �몮�
    std::string str;

    std::cout << "������ ��ப�: ";
    std::getline(std::cin, str);

    // �८�ࠧ������ ��� ������ �㪢 � ��������
    for (char& c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }

    std::cout << "��ப� � �������묨 �㪢���: " << str << std::endl;

    // �८�ࠧ������ ��� ��������� �㪢 � �����
    for (char& c : str) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }

    std::cout << "��ப� � ����묨 �㪢���: " << str << std::endl;

    return 0;
}

git add
x
