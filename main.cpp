#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> arreglos;
    string opc;

    while(true)
    {
        cout << endl << "1) Agregar al Final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar Ultimo" << endl;
        cout << "0) Salir" << endl << endl;
        getline(cin, opc);

        if(opc == "1")
        {
            string arreglo;

            cout << "Arreglo: ";
            fflush;
            getline(cin, arreglo);

            arreglos.push_back(arreglo);
        }

        else if(opc == "2")
        {
            for(size_t i = 0; i < arreglos.size(); i++)
            {
                cout << arreglos[i] << ", ";
            }

            cout << endl;
        }

        else if(opc == "3")
        {
            size_t n;
            string arreglo;

            cout <<"Tam: ";
            cin >> n; cin.ignore();
            cout << "Arreglo: ";
            fflush;
            getline(cin, arreglo);

            arreglos = vector<string>(n, arreglo);
        }

        else if(opc == "4")
        {
            if(arreglos.empty())
            {
                cout << "Vector esta Vacío." << endl;
            }
            else
            {
                cout << arreglos.front() << endl;
            }
        }

        else if(opc == "5")
        {
            if(arreglos.empty())
            {
                cout << "Vector esta Vacio." << endl;
            }
            else
            {
                cout << arreglos.back() << endl;
            }
        }

        else if(opc == "6")
        {
            //sort(enteros.begin(), enteros.end());
            sort(arreglos.begin(), arreglos.end(), greater<string>());
        }

        else if(opc == "7")
        {
            size_t p;
            string arreglo;

            cout << "Posicion: ";
            cin >> p; cin.ignore();
            cout << "Arreglo: ";
            fflush;
            getline(cin, arreglo);

            if(p >= arreglos.size())
            {
                cout << "Posicion NO Valida." << endl;
            }
            else
            {
                arreglos.insert(arreglos.begin()+p, arreglo);
            }
        }

        else if(opc == "8")
        {
            size_t p;

            cout << "Posicion: ";
            cin >> p; cin.ignore();

            if(p >= arreglos.size())
            {
                cout << "Posicion NO Valida." << endl;
            }
            else
            {
                arreglos.erase(arreglos.begin()+p);
            }   
        }

        else if(opc == "9")
        {
            if(arreglos.empty())
            {
                cout << "Vector esta Vacio." << endl;
            }
            else
            {
                arreglos.pop_back();
            }
        }

        else if(opc == "0")
        {
            break;
        }
    }

    return 0;
}