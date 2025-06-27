
#include "Car.h"
  
  
//  Definición del método `mostrarInformacion` fuera de la clase
void Auto::mostrarInformacion() const {
cout << "Marca: " << brand << "\nModelo: " << model 
        << "\nAño: " << year << "\nVelocidad: " << speed << " km/h\n";
}

//  Definición del método `TurnOn` fuera de la clase
void Auto::TurnOn() {
cout << "El coche está encendido\n";
}

//  Definición del método `TurnOff` fuera de la clase
void Auto::TurnOff() {
cout << "El coche está apagado\n";
}

void Auto::SetSpeed(int speed) {
this->speed = speed;
}

void Auto::SetYear(int year) {
this->year = move(year);
}

void Auto::SetModel(string model) {
this->model = move(model);
}

void Auto::SetBrand(string brand) {
this->brand = move(brand);
}

int Auto::GetSpeed(void) const{
return speed;
}

int Auto::GetYear(void) const{
return year;
}

string Auto::GetModel(void) const{
return model;
}

string Auto::GetBrand(void) const{
return brand;
} 
