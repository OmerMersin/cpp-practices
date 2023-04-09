#include <iostream>

class Car {
    int alsoPrivate = 7; // private by default
    private:
        std::string p; // private variable
        int salary;
    public:
        std::string brand;
        std::string model;
        int speed = 0;
        int year;

        Car(std::string b = "empty", std::string m = "empty", int s = 0, int y = 0) {
            brand = b;
            model = m;
            speed = s;
            year = y;
            std::cout << "Constructor is called!" << "\n";
        }

        void acceleration(int speedPlus) {
            speed = speed + speedPlus;
        }
        void info(int number);

        void callPrivates() {
            p = "private";
            std::cout << p << "\n";
            std::cout << alsoPrivate << "\n";
        }

        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};

void Car::info(int number) {
    std::cout << "number: " << number << "\n" << "brand: " << brand << "\n" << "model: " << model << "\n" << "speed: " << speed << "\n" << "year: " << year << "\n";
}

int main() {
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    std::cout << carObj2.speed << "\n";
    carObj2.acceleration(10);
    std::cout << carObj2.speed << "\n";
    carObj2.callPrivates();
    carObj2.setSalary(50000);
    std::cout << carObj2.getSalary() << "\n";

    carObj1.info(1);
    return 0;
}
