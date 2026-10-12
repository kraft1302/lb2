//Integer16

#include <iostream>

int main() {
    int number;
    std::cout << "Введіть тризначне число: ";
    std::cin >> number;

    // Виділяємо кожну цифру числа
    int hundreds = number / 100;       // Перша цифра (сотні)
    int tens = (number / 10) % 10;     // Друга цифра (десятки)
    int units = number % 10;           // Третя цифра (одиниці)

    // Збираємо нове число, міняючи місцями десятки та одиниці
    int result = hundreds * 100 + units * 10 + tens;

    std::cout << "Результат: " << result << std::endl;

    return 0;

//Integer25

#include <iostream>

    int K;
    std::cout << "Введіть день року (K від 1 до 365): ";
    std::cin >> K;

    // Оскільки 1 січня (K=1) — це четвер (4), формула має вигляд:
    // (K + 3) % 7
    int day_of_week = (K + 3) % 7;

    std::cout << "Номер дня тижня: " << day_of_week << std::endl;

    return 0;

//Integer19

#include <iostream>

    int N;
    std::cout << "Введіть кількість секунд (N): ";
    std::cin >> N;

    // Обчислюємо кількість повних хвилин
    int full_minutes = N / 60;

    std::cout << "Кількість повних хвилин: " << full_minutes << std::endl;

    return 0;
}
