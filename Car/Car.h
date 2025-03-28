#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Auto {

    private:
  
      string brand;
      string model;
      int year;
      int speed;
  
    public:
  
    Auto(string brand, string model, int year, int speed) 
    : brand(move(brand)), model(move(model)), year(move(year)), speed(speed) {}
  
      void TurnOn();
      void TurnOff();
  
      void SetSpeed(int speed);
      void SetYear(int year);
      void SetModel(string model);
      void SetBrand(string brand);
  
      int GetSpeed(void) const;
      int GetYear(void) const;
      string GetModel(void) const;
      string GetBrand(void) const;
      void mostrarInformacion() const;
  
  };

#endif // CAR_H
