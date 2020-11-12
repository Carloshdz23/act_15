#include "laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{

}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    computadoras.push_back(c);
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(25) << "Nombre del Equipo: ";
    cout << setw(25) << "Sistema Operativo: ";
    cout << setw(20) << "Memoria RAM: ";
    cout << setw(15) << "Disco Duro: ";
    cout << endl;
    for (size_t i = 0; i < computadoras.size(); i++)
    {
        Computadora &c = computadoras[i];
        cout << c;
        // cout << "Nombre del Equipo: " << c.getNomEqu() << endl;
        // cout << "Sistema Operativo: " << c.getSistemaO() << endl;
        // cout << "Memoria RAM: " << c.getMemoria() << endl;
        // cout << "Disco Duro: " << c.getDD() << endl;
        // cout << endl;
    }
}

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open())
    {
        archivo << left;
        archivo << setw(25) << "Nombre del Equipo: ";
        archivo << setw(25) << "Sistema Operativo: ";
        archivo << setw(20) << "Memoria RAM: ";
        archivo << setw(15) << "Disco Duro: ";
        archivo << endl;
        for (size_t i = 0; i < computadoras.size(); i++)
        {
            Computadora &c = computadoras[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        for (size_t i = 0; i < computadoras.size(); i++)
        {
            Computadora &c = computadoras[i];
            archivo << c.getNomEqu() << endl;
            archivo << c.getSistemaO() << endl;
            archivo << c.getMemoria() << endl;
            archivo << c.getDD() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        string temp;
        Computadora c;

        while(true)
        {
            getline(archivo, temp); // Nombre del Equipo
            if(archivo.eof())
            {
                break;
            }
            c.setNomEqu(temp);
            getline(archivo, temp); // Sistema Operativo
            c.setSistemaO(temp);
            getline(archivo, temp); // Memoria RAM
            c.setMemoria(temp);
            getline(archivo, temp); // Disco Duro
            c.setDD(temp);

            agregarComputadora(c);
        }
    }
    archivo.close();
}

void Laboratorio::insertar(const Computadora &c, size_t pos)
{
    computadoras.insert(computadoras.begin()+pos, c);
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &c, size_t n)
{
    computadoras = vector<Computadora>(n, c);
}

void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
    sort(computadoras.begin(), computadoras.end());
}

void Laboratorio::borrar_ultimo()
{
    if(computadoras.empty())
    {
        cout << "Vector Vacio." << endl;
    }
    else
    {
        computadoras.pop_back();
    }
}

Computadora* Laboratorio::buscar(const Computadora &c)
{
    // vector<Computadora>::iterator 
    auto it = find(computadoras.begin(), computadoras.end(), c);

    if(it == computadoras.end())
    {
        return nullptr;
    }
    else
    {
        return &(*it);
    }   
}