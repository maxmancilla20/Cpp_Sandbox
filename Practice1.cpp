#include <iostream>
#include "Car/Car.h"

using namespace std;


int main() {

  Auto miAuto("Toyota", "Corolla", 2022, 0);

  // Mostrar información inicial
  miAuto.mostrarInformacion();

  cout << "\n";

  cout << miAuto.GetBrand() << endl;
  
  cout << "\n";

  miAuto.SetBrand("Ford");
  miAuto.SetModel("Mustang");
  miAuto.SetYear(2023);
  miAuto.SetSpeed(100);

  // Mostrar información después de cambios
  miAuto.mostrarInformacion();

  cout << "\n";

  miAuto.TurnOn();
  miAuto.TurnOff();

  cout << "\n";

  return 0;
}
