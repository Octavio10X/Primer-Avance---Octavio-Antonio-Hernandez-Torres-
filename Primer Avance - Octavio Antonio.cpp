#include <iostream> 
#include <stdlib.h>
using namespace std;
int main()
{
	int opcion, edad[3], numero[10];
	int salir = 1;
	char nombre[30][3], nomtrat[100], desc[100], datotra[100];
	do
	{
		cout << "Bienbenidos a Sonrisa de dientes" << endl;
		cout << "Eliga la acción que usted quiera realizar" << endl;
		cout << "1.Agendar cita" << endl;
		cout << "2.Modificar cita" << endl;
		cout << "3.Eliminar cita" << endl;
		cout << "4.Lista de citas vigentes" << endl;
		cout << "5.Limpiar pantalla" << endl;
		cout << "6.Salir" << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			for (int i = 1; i < 4; i++) {
				cout << "Paciente" << i << endl;
				cout << "Nombre del paciente: " << endl;
				cin >> nombre[1];
				cout << "edad: ";
				cin >> edad[1];
				cout << "numero de telefono: " << endl;
				cin >> numero[10];
				cout << "Alguna discapacidad, encaso de que no solo poner NO: " << endl;
				cin >> datotra[20];
				cout << "Tratamientos" << endl;
				cout << "1. limpiesa dental" << endl;
				cout << "2. extracción";
				cout << "3. Restauraciones";
				cout << "4. Otro";
				cin >> opcion;
				cout << "cita generada de manera exitosa" << endl;
			}


		case 2:


		case 3:


		case 4:


		case 5:
			system("cls");
			opcion = 0;
			break;

		case 6:
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << "Esta opción no es valida, intentar de nuevo" << endl;
			if (opcion != 0) 
				cout << "¿quiere volver al menu? (SI=1 NO=2): " << endl;
				cin >> salir;
				while (salir == 1);
				break;
			
		}
	}
}