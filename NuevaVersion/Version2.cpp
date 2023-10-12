#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    char respuesta;
    do {
    cout << "Ingrese una opción del menú:" << endl;
    cout << "1. Suma de vectores" << endl;
    cout << "2. Resta de vectores" << endl;
    cout << "3. Producto escalar de vectores" << endl;
    cout << "4. Producto cruz de vectores" << endl;
    cout << "5. Producto punto de vectores" << endl;
    cin >> opcion;
    

    if (opcion == 1) {
    int dim;
    cout << "¿En qué dimensión quieres sumar los vectores? (2 o 3)" << endl;
    cin >> dim;
    float u[dim], v[dim], suma[dim];
    cout << "Ingresa los componentes del primer vector:" << endl;
    for (int i = 0; i < dim; i++) {
        cin >> u[i];
    }
    cout << "Ingresa los componentes del segundo vector:" << endl;
    for (int j = 0; j < dim; j++) {
        cin >> v[j];
    }
    for (int k = 0; k < dim; k++) {
        suma[k] = u[k] + v[k];
    }
    cout << "La suma de los vectores es: (" << suma[0];
    for (int l = 1; l < dim; l++) {
        cout << ", " << suma[l];
    }
    cout << ")" << endl;
} else if (opcion == 2) {
    int dim;
    cout << "¿En qué dimensión quieres restar los vectores? (2 o 3)" << endl;
    cin >> dim;
    float u[dim], v[dim], resta[dim];
    cout << "Ingresa los componentes del primer vector:" << endl;
    for (int i = 0; i < dim; i++) {
        cin >> u[i];
    }
    cout << "Ingresa los componentes del segundo vector:" << endl;
    for (int j = 0; j < dim; j++) {
        cin >> v[j];
    }
    for (int k = 0; k < dim; k++) {
        resta[k] = u[k] - v[k];
    }
    cout << "La resta de los vectores es: (" << resta[0];
    for (int l = 1; l < dim; l++) {
        cout << ", " << resta[l];
    }
    cout << ")" << endl;
} else if (opcion == 3) {
    int dim;
    cout << "¿En qué dimensión quieres calcular el producto escalar? (2 o 3)" << endl;
    cin >> dim;
    float u[dim], v[dim], escalar = 0;
    cout << "Ingresa los componentes del primer vector:" << endl;
    for (int i = 0; i < dim; i++) {
        cin >> u[i];
    }
    cout << "Ingresa los componentes del segundo vector:" << endl;
    for (int j = 0; j < dim; j++) {
        cin >> v[j];
        escalar += u[j] * v[j];
    }
    cout << "El producto escalar de los vectores es: " << escalar << endl;
} else if (opcion == 4) {
   int dim = 3;
   float u[dim], v[dim], cruz[dim];
   cout<<"Ingrese las componentes del primer vector:"<<endl;
   for(int i=0;i<dim;i++){
       cin>>u[i];
   }
   cout<<"Ingrese las componentes del segundo vector:"<<endl;
   for(int i=0;i<dim;i++){
       cin>>v[i];
   }
   cruz[0]=u[1]*v[2]-u[2]*v[1];
   cruz[1]=u[2]*v[0]-u[0]*v[2];
   cruz[2]=u[0]*v[1]-u[1]*v[0];

   cout<<"El producto en cruz de los vectores es: ("<<cruz[0]<<", "<<cruz[1]<<", "<<cruz[2]<<")"<<endl;

} else if (opcion == 5) {
        int dim;
        cout << "¿En qué dimensión quieres calcular el producto punto? (2 o 3)" << endl;
        cin >> dim;
        float u[dim], v[dim];
        cout << "Ingresa los componentes del primer vector:" << endl;
        for (int i = 0; i < dim; i++) {
            cin >> u[i];
        }
        cout << "Ingresa los componentes del segundo vector:" << endl;
        for (int j = 0; j < dim; j++) {
            cin >> v[j];
        }
        float punto = 0;
        for (int k = 0; k < dim; k++) {
            punto += u[k] * v[k];
        }
        cout << "El producto punto es: " << punto << endl;
    }else {
            cout << "Opción inválida. Intente nuevamente." << endl;
            continue;
        }

        cout << "¿Desea realizar otra operación? (s/n)" << endl;
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
