#include <iostream>

#define MODE 1

#if !defined MODE
#error Define MODE.
#endif // !MODE

#if MODE == 1
void add()
{
    int Num1 = 0, Num2 = 0;
    std::cout << "Введите число 1: ";
    std::cin >> Num1;
    std::cout << "Введите число 2: ";
    std::cin >> Num2;
    std::cout << "Результат сложения: " << Num1 + Num2 << std::endl;
}
#endif // MODE

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран

#if MODE == 0
    std::cout << "Работаю в режиме тренировки"<<std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    add();
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

    return 71;
}