#include <iostream>

using namespace std;

class Wheel {

private:

    double diameter;
    string material;

public:

    Wheel(double diam, string mat) : diameter(diam), material(mat) {}

    void display() {

        cout << "Wheel - Diameter: " << diameter << " meters, Material: " << material << '\n';
    }
};

/// 

class Bicycle {

private:

    Wheel frontWheel;
    Wheel rearWheel;
    string frameType;
    int numGears;

public:

    Bicycle(double frontDiam, double rearDiam, string frontMat, string rearMat, string frame, int gears):
        
        frontWheel(frontDiam, frontMat), rearWheel(rearDiam, rearMat), frameType(frame), numGears(gears) {}

    void display() {

        cout << "Bicycle - Frame: " << frameType << ", Gears: " << numGears << '\n';
        cout << "Front ";
        frontWheel.display();
        cout << "Rear ";
        rearWheel.display();
    }
};

///

class Car {

private:

    Wheel frontLeftWheel;
    Wheel frontRightWheel;
    Wheel rearLeftWheel;
    Wheel rearRightWheel;
    string make;
    string model;

public:

    Car(double frontDiam, double rearDiam, string frontMat, string rearMat, string carMake, string carModel):

        frontLeftWheel(frontDiam, frontMat), frontRightWheel(frontDiam, frontMat),
        rearLeftWheel(rearDiam, rearMat), rearRightWheel(rearDiam, rearMat), make(carMake), model(carModel) {}

    void display() {

        cout << "Car - Make: " << make << ", Model: " << model << '\n';
        cout << "Front left ";
        frontLeftWheel.display();
        cout << "Front right ";
        frontRightWheel.display();
        cout << "Rear left ";
        rearLeftWheel.display();
        cout << "Rear right ";
        rearRightWheel.display();
    }
};

int main() {

    Wheel bicycleWheel(0.6604, "Rubber");
    Bicycle Bicycle(0.6604, 0.6604, "Rubber", "Rubber", "Mountain", 21);

    Wheel carWheel(0.4064, "Metal alloy");
    Car Car(0.4064, 0.4064, "Metal alloy", "Metal alloy", "Toyota", "Corolla");

    cout << "Bicycle: " << '\n';
    Bicycle.display();
    cout << '\n';

    cout << "Car: " << '\n';
    Car.display();

    return 0;
}
