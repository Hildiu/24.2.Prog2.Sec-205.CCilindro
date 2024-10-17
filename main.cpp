/*---------------------------------------------------------
 * Dato de Entrada: r, h (double)
 * Dato de salida:  areaDeLaBase, areaLateral, areaTotal,
 *                  Volumen (double)
 *--------------------------------------------------------*/

#include "CCilindro.h"

int main()
{ double r,  h;
    cout << "Radio : "; cin >> r;
    cout << "Altura : "; cin >> h;
    CCilindro     C1(r,h);
    cout << "El area de la base es: " << C1.areaDeLaBase() << "\n";
    cout << "El area lateral    es: " << C1.areaLateral() << "\n";
    cout << "El area total      es: " << C1.areaTotal() << "\n";
    cout << "El volumen         es: " << C1.volumen() << "\n";

    cout << "\n";
    cout << "Creamos el 2do objeto utilizando el constructor por defecto\n";
    CCilindro    C2;
    cout << "Radio : "; cin >> r;
    cout << "Altura : "; cin >> h;
    C2.setRadio(r);
    C2.setAltura(h);
    cout << "El area de la base es: " << C2.areaDeLaBase() << "\n";
    cout << "El area lateral    es: " << C2.areaLateral() << "\n";
    cout << "El area total      es: " << C2.areaTotal() << "\n";
    cout << "El volumen         es: " << C2.volumen() << "\n";
    cout << "\n";
    cout << "Se va a repetir el calculo usando el objeto C2 pero cambiando\n";
    cout << "El estado del objeto, de tal manera que el radio aumente en 15 unidades\n";
    cout << "y el valor de la altura aumente en 8 unidades\n";
    C2.setRadio(C2.getRadio() + 15);
    C2.setAltura(C2.getAltura() + 8);
    cout << "El area de la base es: " << C2.areaDeLaBase() << "\n";
    cout << "El area lateral    es: " << C2.areaLateral() << "\n";
    cout << "El area total      es: " << C2.areaTotal() << "\n";
    cout << "El volumen         es: " << C2.volumen() << "\n";

    //-----ahora vamos a crear un objeto dinamico
    cout << "\nAhora creamos un objeto dinamico C3 \n";
    CCilindro     *pC3=nullptr;
    cout << "Radio : "; cin >> r;
    cout << "Altura : "; cin >> h;
    pC3 = new CCilindro(r,h);
    cout << "El area de la base : " << (*pC3).areaDeLaBase() << "\n";
    cout << "El area de la base : " << pC3->areaDeLaBase() << "\n";
    cout << "El area lateral    : " << pC3->areaLateral() << "\n";
    cout << "El area total      : " << pC3->areaTotal() << "\n";
    cout << "El volumen         : " << pC3->volumen() << "\n";
    delete pC3;
    pC3 = nullptr;


    return 0;
}
