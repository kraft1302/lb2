//Integer16

#include <iostream>

int main() {
    int number;
    std::cout << "Введіть тризначне число: ";
    std::cin >> number;

    // Перевірка, чи число є тризначним
    if (number < 100 || number > 999) {
        std::cout << "Помилка: число повинно бути тризначним!" << std::endl;
        return 1;
    }

    // Виділяємо кожну цифру
    int hundreds = number / 100;       // Цифра сотень
    int tens = (number / 10) % 10;     // Цифра десятків
    int units = number % 10;           // Цифра одиниць

    // Збираємо нове число, міняючи місцями десятки та одиниці
    int result = hundreds * 100 + units * 10 + tens;

    std::cout << "Результат перестановки: " << result << std::endl;

    return 0;
}

//Integer25

#include <iostream>

int main() {
    int K;
    std::cout << "Введіть день року K (1-365): ";
    std::cin >> K;

    // Перевірка коректності введення
    if (K < 1 || K > 365) {
        std::cout << "Помилка: число має бути в діапазоні від 1 до 365!" << std::endl;
        return 1;
    }

    // Обчислення номера дня тижня
    int day_of_week = (K + 3) % 7;

    std::cout << "Номер дня тижня для " << K << "-го дня року: " << day_of_week << " ";
    
    // Додатково виведемо назву дня для зручності
    switch (day_of_week) {
        case 0: std::cout << "(неділя)"; break;
        case 1: std::cout << "(понеділок)"; break;
        case 2: std::cout << "(вівторок)"; break;
        case 3: std::cout << "(середа)"; break;
        case 4: std::cout << "(четвер)"; break;
        case 5: std::cout << "(п'ятниця)"; break;
        case 6: std::cout << "(субота)"; break;
    }
    std::cout << std::endl;

    return 0;
}

//Integer19

#include <iostream>

int main() {
    long long N;
    std::cout << "Введіть кількість секунд N, що минули з початку доби: ";
    std::cin >> N;

    // Перевірка на коректність (у добі 86400 секунд)
    if (N < 0) {
        std::cout << "Помилка: кількість секунд не може бути від'ємною!" << std::endl;
        return 1;
    }

    // Обчислення кількості повних хвилин
    long long full_minutes = N / 60;

    std::cout << "З початку доби минуло повних хвилин: " << full_minutes << std::endl;

    return 0;
}
