#include <iostream>
using namespace std;

struct Pen
{
    string inkColor;
    string type;
    string material;
    string color;
    double weight;
};

struct Student
{
    string name;
    string surname;
    string group;
    double averageGrade;
    int year;
    int studentID;
};

struct Monitor
{
    string manufacturer;
    string model;
    string displayType;
    string interfaceType;
    string color;
    double diagonalSize = 24.5;
    int updateFrequency = 60;
    bool hasSpeakers;
    bool hasCamera;
    bool hasBacklight;
};

struct Car
{
    string manufacturer;
    string model;
    string color;
    double fuelConsumation;
    int numberOfDoors;
    int maxSpeed;
};

struct Bucket
{
    string material;
    string color;
    string purpose;
    double volume;
    bool hasHandle;
};

void PrintPen(const Pen& pen);
void PrintStudent(const Student& student);
void PrintMonitor(const Monitor& monitor);
void PrintCar(const Car& car);
void PrintBucket(const Bucket& bucket);

int main()
{
    Pen pen;
    pen.inkColor = "Blue";
    pen.type = "Pressing";
    pen.material = "Plastic";
    pen.color = "Green";
    pen.weight = 20.1;

    Student student;
    student.name = "Ivan";
    student.surname = "Petrenko";
    student.group = "22";
    student.averageGrade = 76.3;
    student.year = 2;
    student.studentID = 18543123;

    Monitor monitor;
    monitor.manufacturer = "Asus";
    monitor.model = "TUF Gaming";
    monitor.displayType = "IPS";
    monitor.interfaceType = "HDMI";
    monitor.color = "Black";
    monitor.diagonalSize = 24.5;
    monitor.updateFrequency = 60;
    monitor.hasSpeakers = false;
    monitor.hasCamera = false;
    monitor.hasBacklight = true;

    Car car;
    car.manufacturer = "Mercedec";
    car.model = "Class A";
    car.color = "Red";
    car.fuelConsumation = 8.4;
    car.numberOfDoors = 5;
    car.maxSpeed = 250;

    Bucket bucket;
    bucket.material = "Plastic";
    bucket.color = "Green";
    bucket.purpose = "For home";
    bucket.volume = 15;
    bucket.hasHandle = true;

    PrintPen(pen);
    PrintStudent(student);
    PrintMonitor(monitor);
    PrintCar(car);
    PrintBucket(bucket);
}

void PrintPen(const Pen& pen)
{
    cout << "Pen:\n";
    cout << "-Ink color: " << pen.inkColor << "\n";
    cout << "-Type: " << pen.type << "\n";
    cout << "-Material: " << pen.material << "\n";
    cout << "-Color: " << pen.color << "\n";
    cout << "-Weight: " << pen.weight << "\n";
}

void PrintStudent(const Student& student)
{
    cout << "\nStudent:\n";
    cout << "-Name: " << student.name << "\n";
    cout << "-Surname: " << student.surname << "\n";
    cout << "-Group: " << student.group << "\n";
    cout << "-Average grade: " << student.averageGrade << "\n";
    cout << "-Year: " << student.year << "\n";
    cout << "-Student ID: " << student.studentID << "\n";
}

void PrintMonitor(const Monitor& monitor)
{
    cout << "\nMonitor:\n";
    cout << "-Manufacturer: " << monitor.manufacturer << "\n";
    cout << "-Model: " << monitor.model << "\n";
    cout << "-Display type: " << monitor.displayType << "\n";
    cout << "-Interface type: " << monitor.interfaceType << "\n";
    cout << "-Color: " << monitor.color << "\n";
    cout << "-Diagonal size: " << monitor.diagonalSize << "\n";
    cout << "-Update frequency: " << monitor.updateFrequency << "\n";
    cout << "-Has speakers: " << boolalpha << monitor.hasSpeakers << "\n";
    cout << "-Has camera: " << boolalpha << monitor.hasCamera << "\n";
    cout << "-Has backlight: " << boolalpha << monitor.hasBacklight << "\n";
}

void PrintCar(const Car& car)
{
    cout << "\nCar:\n";
    cout << "-Manufacturer: " << car.manufacturer << "\n";
    cout << "-Model: " << car.model << "\n";
    cout << "-Color: " << car.color << "\n";
    cout << "-Fuel consumation: " << car.fuelConsumation << "\n";
    cout << "-Number of doors: " << car.numberOfDoors << "\n";
    cout << "-Max speed: " << car.maxSpeed << "\n";
}

void PrintBucket(const Bucket& bucket)
{
    cout << "\nBucket:\n";
    cout << "-Material: " << bucket.material << "\n";
    cout << "-Color: " << bucket.color << "\n";
    cout << "-Purpose: " << bucket.purpose << "\n";
    cout << "-Volume: " << bucket.volume << "\n";
    cout << "-Has handle: " << boolalpha << bucket.hasHandle << "\n";
}