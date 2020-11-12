#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio v;
    string opc;

    while(true)
    {
        cout << endl << "1) Agregar Personaje" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) Inicializar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Ordenar" << endl;
        cout << "9) Buscar" << endl;
        cout << "10) Borrar Ultimo" << endl;
        cout << "0) Salir" << endl << endl;
        getline(cin, opc);

        if(opc == "1")
        {
            Computadora c;
            cin >> c;

            v.agregarComputadora(c);
        }

        else if(opc == "2")
        {
            v.mostrar();
        }

        else if(opc == "3")
        {
            v.respaldar();
        }

        else if(opc == "4")
        {
            v.recuperar();
        }

        else if(opc == "5")
        {
            Computadora c;
            cin >> c;

            size_t pos;
            cout << "Posicion: ";
            cin >> pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posicion NO Valida." << endl;
            }
            else
            {
                v.insertar(c, pos);
            }
        }

        else if(opc == "6")
        {
            Computadora c;
            cin >> c;

            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            v.inicializar(c, n);
        }

        else if(opc == "7")
        {
            size_t pos;
            cout << "Posicion: ";
            cin >> pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posicion NO Valida." << endl;
            }
            else
            {
                v.eliminar(pos);
            }
        }

        else if(opc == "8")
        {
            v.ordenar();
        }

        else if(opc == "9")
        {
            Computadora c;
            cin >> c; cin.ignore();

            Computadora *ptr = v.buscar(c);

            if(ptr == nullptr)
            {
                cout << "No Encontrado." << endl;
            }
            else
            {
                cout << *ptr << endl;
            }   
        }

        else if(opc == "10")
        {
            v.borrar_ultimo();
        }

        else if(opc == "0")
        {
            break;
        }
    }

    return 0;
}