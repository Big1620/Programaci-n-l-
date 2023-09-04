#include<iostream>
#include<cmath> 

int main(){
        double caja1 = 15, caja2 = 10, f=55;
        double aceleracion, fuerza1,fuerza2;
        //Definiremos las variables con los datos proporcionados 
        aceleracion= f/(caja1+caja2);
        fuerza1= -caja1 * aceleracion;
        fuerza2= -caja2 * aceleracion; 
        // crearemos las variables con las formulas de aceleración y fuerzas para cada caja 
        std::cout << "Aceleración del sistema: " << aceleracion << " m/s^2" << std::endl;
    std::cout << "Fuerza de la caja 1 sobre la caja 2: " << fuerza1 << " N" << std::endl;
    std::cout << "Fuerza de la caja 2 sobre la caja 1: " << fuerza2 << " N" << std::endl;
    std::cout<< "La caja más liviana (caja 1) ejercerá una fuerza hacia la derecha sobre la caja más pesada (caja 2)." << std::endl; 
    std::cout<< "La caja más pesada (caja 2) ejercerá una fuerza hacia la izquierda sobre la caja más liviana (caja 1)." << std::endl;       
        
        
     //Se imprimen las variables



        return 0;
}