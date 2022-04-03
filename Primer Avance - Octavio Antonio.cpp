#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    int opcion, precio, cita, cantidad, decision, preuni, precio1, total, opcion2;
    char nombre[150], hora[50], tratamiento[150], descripcion[500], hombre = 'El', mujer = 'La', decision1[2];

    setlocale(LC_ALL, "");
    do {
        cout << "Bienvenido al Dentista una Sonrisa, ¿qué desea hacer?" << endl;
        cout << "1.-Agendar cita" << endl;
        cout << "2.-Modificar cita" << endl;
        cout << "3.-Eliminar cita" << endl;
        cout << "4.-Lista de citas vigentes" << endl;
        cout << "5.-Limpiar pantalla" << endl;
        cout << "6.-Salir" << endl;
        cin >> opcion;
        switch (opcion) {

        case 1:

            cout << "Ingresar el nombre del paciente" << endl;
            cin >> nombre;
            cout << "Ingresar la hora del tratamiento (hora de 24 horas)" << endl;
            cin >> hora;
            cout << "Ingresar el nombre del tratamiento" << endl;
            cin >> tratamiento;
            cout << "Ingresar la descripcion del tratamiento" << endl;
            cin >> descripcion;
            cout << "Ingresa el precio unitario del tratamiento" << endl;
            cin >> precio;
            cout << "Ingresa la cantidad del tratamiento" << endl;
            cin >> cantidad;
            cout << "Ingresa el precio unitario" << endl;
            cin >> preuni;
            precio1 = precio * cantidad;
            total = precio1 + preuni;

            cout << "Ingrese un número mayor 1 si el paciente es hombre y si es mujer un número menor" << endl;
            cin >> opcion2;
            if (opcion2 > 1) {

                cout << hombre << " paciente " << nombre << " tiene a las " << hora << ":" << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "La cantidad del tratamiento es " << cantidad << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            else {
                cout << mujer << " paciente " << nombre << " tiene a las " << hora << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "La cantidad del tratamiento es " << cantidad << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            break;

        case 2:
            cout << "Ingresar el nombre del paciente" << endl;
            cin >> nombre;
            cout << "Ingresar la hora del tratamiento" << endl;
            cin >> hora;
            cout << "Ingresar el nombre del tratamiento" << endl;
            cin >> tratamiento;
            cout << "Ingresar la descripcion del tratamiento" << endl;
            cin >> descripcion;
            cout << "Ingresar el precio unitario del tratamiento" << endl;
            cin >> precio;
            cout << "Ingresar la cantidad del tratamiento" << endl;
            cin >> cantidad;
            cout << "Ingresar el precio unitario" << endl;
            cin >> preuni;
            precio1 = precio * cantidad;
            total = precio1 + preuni;

            cout << "Ingresar un número mayor 1 si el paciente es hombre y si es mujer un número menor" << endl;
            cin >> opcion2;
            if (opcion2 > 1) {

                cout << hombre << " paciente " << nombre << " tiene a las " << hora << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "El costo del tratamiento es " << cantidad << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            else {
                cout << mujer << " paciente " << nombre << " tiene a las " << hora << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "El costo del tratamiento es " << cantidad << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            break;

        case 3:
            do {
                cout << "Ingresar el numero de su cita" << endl;
                cin >> cita;
                cout << "Estas seguro de que quiere eliminar su cita 1. Si, 2. No" << endl;
                cin >> opcion;
                if (opcion == 1)
                    cout << "Su cita se ha eliminado" << endl;
                else
                    cout << "Gracias" << endl;
            } while (opcion == 0);
            break;

        case 4:
            do {
                cout << "Esta es la lista de citas vigentes:" << endl;
                cout << "Lunes: 8:00 a.m." << endl;
                cout << "Miercoles: 12:00 p.m." << endl;
                cout << "Viernes: 14:00 p.m., 15:00 p.m." << endl;
                cout << "Sabado: 12:00p.m." << endl;
                cout << "Domingo <cerrado>" << endl;
            } while (opcion == 0);
            break;

        case 5:
            do {
                cout << "Usted esta seguro que quiere limpiar su pantalla 1. Si, 2. No" << endl;
                cin >> opcion;
                if (opcion == 1)
                    cout << "Su pantalla ha sido limpiada correctamente, Gracias" << endl;
                else
                    cout << "Gracias" << endl;
            } while (opcion == 0);
            break;

        case 6:
            cout << "¿Esta seguro que desea salir?" << endl;
            cin >> decision1;
            break;


        }
        cout << "Si Usted quiere volver a nuestro menú presione 1 y si usted quiere salir/Eliminar presionar cualquier otro numero" << endl;
        cin >> decision;
    } while (decision == 1);
}
