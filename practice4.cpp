#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    bool brakeSystem;
    bool lightingSystem;

public:
    Car() {
        brakeSystem = false;
        lightingSystem = false;
    }

    virtual string initialize() {
        brakeSystem = true;
        lightingSystem = true;
        string result;
        result += "Brake system checked.\n";
        result += "Lighting system checked.\n";
        return result;
    }

    virtual ~Car() {}
};

class Pride : public Car {
private:
    string enableWipers() {
        return "Wipers activated.\n";
    }

    string playCassette() {
        return "Cassette player running.\n";
    }

public:
    string initialize() override {
        string result = Car::initialize();
        result += enableWipers();
        result += playCassette();
        return result;
    }
};

class BMW : public Car {
private:
    string enableVoiceControl() {
        return "Voice control system online.\n";
    }

    string autoPark() {
        return "Auto-parking system ready.\n";
    }

    string checkTirePressure() {
        return "Tire pressure optimal.\n";
    }

public:
    string initialize() override {
        string result = Car::initialize();
        result += enableVoiceControl();
        result += autoPark();
        result += checkTirePressure();
        return result;
    }
};

int main() {
    Car* car1 = new Pride();
    Car* car2 = new BMW();

    cout << "Pride Initialization:\n" << car1->initialize() << endl;
    cout << "BMW Initialization:\n" << car2->initialize() << endl;

    delete car1;
    delete car2;

    return 0;
