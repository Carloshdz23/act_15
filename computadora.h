#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    string nombredelequipo;
    string sistemaoperativo;
    string memoriaram;
    string discoduro;
public:
    Computadora();
    Computadora(const string &nombredelequipo, const string &sistemaoperativo, const string &memoriaram, const string &discoduro);
    void setNomEqu(const string &v);
    string getNomEqu();
    void setSistemaO(const string &v);
    string getSistemaO();
    void setMemoria(const string &v);
    string getMemoria();
    void setDD(const string &v);
    string getDD();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(25) << c.nombredelequipo;
        out << setw(25) << c.sistemaoperativo;
        out << setw(20) << c.memoriaram;
        out << setw(15) << c.discoduro;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout << "Nombre del Equipo: ";
        getline(cin, c.nombredelequipo);
        cout << "Sistema Operativo: ";
        getline(cin, c.sistemaoperativo);
        cout << "Memoria RAM: ";
        getline(cin, c.memoriaram);
        cout << "Disco Duro: ";
        getline(cin, c.discoduro);

        return in;
    }

    bool operator==(const Computadora& p)
    {
        return nombredelequipo == p.nombredelequipo;
    }

    bool operator==(const Computadora& p) const
    {
        return nombredelequipo == p.nombredelequipo;
    }

    bool operator <(const Computadora& p)
    {
        return nombredelequipo < p.nombredelequipo;
    }

    bool operator <(const Computadora& p) const
    {
        return nombredelequipo < p.nombredelequipo;
    }
};

#endif