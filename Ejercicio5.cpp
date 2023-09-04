#include <iostream>
#include <string>
using namespace std;

int main() {
    double peso, altura, edad, mb;
    //Ingresamos las variables que vamos a utilizar en el programa 
    string genero, ans;
    //La variable ans será la encargada de controlar el ciclo do-while

    do {
        cout << "Bienvenido! Vamos a calcular las calorías que deberías consumir diariamente." << endl;
        cout << "Ingresa tu peso en kg: ";
        cin >> peso;
        cout << "Ingresa tu altura en cm: ";
        cin >> altura;
        cout << "Ingresa tu edad: ";
        cin >> edad;
        cout << "Ingresa tu género biológico (M/F): ";
        cin >> genero;
        //Se piden los valores necesarios para desarrollar las formulas de las tablas 
        if ((genero == "F" || genero == "f")) {
            if (edad <= 3) {
                mb = 61 * peso - 51;
            } else if (edad <= 10) {
                mb = 22.5 * peso + 499;
            } else if (edad <= 18) {
                mb = 12.2 * peso + 746;
            } else if (edad <= 30) {
                mb = 447.593 + (9.247 * peso) + (3.098 * altura) - (4.330 * edad);
            } else if (edad <= 60) {
                mb = 447.593 + (9.247 * peso) + (3.098 * altura) - (4.330 * edad);
            } else {
                mb = 447.593 + (9.247 * peso) + (3.098 * altura) - (4.330 * edad);
            }
        // Los if se usan para separar los diferentes generos y edades en este caso tenemos genero = "F"
        } else {
            if (edad <= 3) {
                mb = 61 * peso - 51;
            } else if (edad <= 10) {
                mb = 22.7 * peso + 495;
            } else if (edad <= 18) {
                mb = 17.5 * peso + 651;
            } else if (edad <= 30) {
                mb = 88.362 + (13.397 * peso) + (4.799 * altura) - (5.677 * edad);
            } else if (edad <= 60) {
                mb = 88.362 + (13.397 * peso) + (4.799 * altura) - (5.677 * edad);
            } else {
                mb = 88.362 + (13.397 * peso) + (4.799 * altura) - (5.677 * edad);
            }
        }
        //Controlamos el genero = "M"
        if (edad < 0 || altura < 0 || peso < 0) {
            std::cout<< "Los datos ingresados no son validos por favor ingresalos otra vez. "<< std::endl;
            continue;
        }
        //Este if valida los datos para que no se puedan ingresar datos negativos.

        cout << "Basado en tus datos deberías comer " << mb << " (Kcal/día)" << endl; 
        //Mostramos en salida el valor de mb calculado con la formula

        cout << "Deseas ingresar otros datos? (Si/No)" << endl;
        cin >> ans;
        //Preguntamos al usuario si desea seguir usando el programa 

    } while (ans != "No" && ans != "no" && ans != "nO");

    return 0;
}
