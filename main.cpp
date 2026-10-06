#include <iostream>

using namespace std;

int menu_principal(){
    int seleccion = 0;
    
    do {
        cout << "----------------------------------------------------------------------" << endl;
        cout << "          Bienvenido a nuestro sistema de control estudiantil          " << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << " " << endl;
        cout << "Ingrese el numero correspondiente a la opcion con la que desea proceder" << endl;
        cout << " " << endl;
        cout << "1. Registrar" << endl;
        cout << "2. Modificar(editar)" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Guardar informacion" << endl;
        cout << "5. Consultar (busqueda)" << endl;
        cout << "6. Listar (mostrar todos los alumnos)" << endl;
        cout << "7. Estadisticas" << endl;
        cout << "8. Salir" << endl;
        cout << "\n\n\n";
        
        cin >> seleccion;
        
        // Si la opción no es válida, muestra el mensaje y el bucle vuelve a empezar
        if (seleccion < 1 or seleccion > 8) {
            cout << "\n==================================================" << endl;
            cout << " Opcion invalida. Por favor, elige un numero del 1 al 8." << endl;
            cout << "==================================================\n" << endl;
        }
        
    } while (seleccion < 1 or seleccion > 8); 
        
    return seleccion;
}

int registrar(){}
int modificar(){}
int eliminar(){}
int guardar_informacion(){}
int consultar(){}
int listar(){}
int estadisticas(){}
int salir(){}



int main (){
    int opcion = menu_principal();
    cout << "\nHas seleccionado la opcion exitosamente: " << opcion << endl;

    switch (opcion)
    {

    case 1:
    registrar();
    break;

    case 2:
    modificar();
    break;

    case 3:
    eliminar();
    break;

    case 4:
    guardar_informacion();
    break;

    case 5:
    << consultar();
    break;

    case 6:
    listar();
    break;

    case 7:
    estadisticas();
    break;

    
    
    default:
        break;
    }


    return 0;
}
