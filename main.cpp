#include <iostream>

class Car {
    public:
        std::string brand;
        std::string model;
        int speed = 0;
        int year;

        void acceleration(int speedPlus) {
            speed = speed + speedPlus;
        }
};

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
    return 0;
}
