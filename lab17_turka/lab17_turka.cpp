#include <iostream>

using namespace std;

// колесо
class Wheel {

protected:

    int size;

public:

    Wheel(int size) : size(size) {}

    void displayInfo() const {

        cout << "Wheel size: " << size << " mm" << '\n';
    }
};

// велосипед
class Bicycle : public Wheel {

private:

    string type;

public:

    Bicycle(int size, const string& type) : Wheel(size), type(type) {}

    void displayInfo() const {

    Wheel:: displayInfo();

    cout << "Bicycle type: " << type << '\n';
    }
};

// машина
class Car : public Wheel {

private:

    string model;
    int horsepower;

public:

    Car(int size, const string& model, int horsepower) : Wheel(size), model(model), horsepower(horsepower) {}

    void displayInfo() const {

        Wheel::displayInfo();

        cout << "Car model: " << model << '\n';
        cout << "Horsepower: " << horsepower << "km/h " << '\n';
    }
};

int main() {

    Bicycle bike(97, "Mountain");

    Car car(185, "Toyota Camry", 210);

    cout << "Bicycle Info:" << '\n';
    bike.displayInfo();

    cout << "\nCar Info:" << '\n';
    car.displayInfo();

    return 0;
}






