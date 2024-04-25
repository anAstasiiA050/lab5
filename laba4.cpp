#include <iostream>
#include <string>

using namespace std;

// Оголошення базового класу "Кінь"
class Horse {
protected:
    string breed;
    string gender;
    int age;

public:
    // Конструктор класу "Кінь"
    Horse(string _breed, string _gender, int _age) : breed(_breed), gender(_gender), age(_age) {}

    // Метод для виведення інформації про кінь
    void display() {
        cout << "Кінь: " << breed << endl;
        cout << "Стать: " << gender << endl;
        cout << "Вік: " << age << " років" << endl;
    }
};

// Оголошення дочірнього класу "Заїзд"
class Race : public Horse {
private:
    int number;
    string track;
    string time;

public:
    // Конструктор класу "Заїзд"
    Race(string _breed, string _gender, int _age, int _number, string _track, string _time) 
        : Horse(_breed, _gender, _age), number(_number), track(_track), time(_time) {}

    // Метод для виведення інформації про заїзд
    void displayRace() {
        display(); // Викликаємо метод базового класу для виведення інформації про кінь
        cout << "Номер заїзду: " << number << endl;
        cout << "Траса: " << track << endl;
        cout << "Час: " << time << endl;
    }
};

int main() {
    // Приклад використання класів
    Race raceHorse("Трековий", "Кобила", 5, 1, "Львівська траса", "15:30");
    raceHorse.displayRace();

    return 0;
}
