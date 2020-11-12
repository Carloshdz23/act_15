#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &nombredelequipo, const string &sistemaoperativo, const string &memoriaram, const string &discoduro)
{
    this->nombredelequipo = nombredelequipo;
    this->sistemaoperativo = sistemaoperativo;
    this->memoriaram = memoriaram;
    this->discoduro = discoduro;
}

void Computadora::setNomEqu(const string &v)
{
    nombredelequipo = v;
}

string Computadora::getNomEqu()
{
    return nombredelequipo;
}

void Computadora::setSistemaO(const string &v)
{
    sistemaoperativo = v;
}

string Computadora::getSistemaO()
{
    return sistemaoperativo;
}

void Computadora::setMemoria(const string &v)
{
    memoriaram = v;
}

string Computadora::getMemoria()
{
    return memoriaram;
}

void Computadora::setDD(const string &v)
{
    discoduro = v;
}

string Computadora::getDD()
{
    return discoduro;
}