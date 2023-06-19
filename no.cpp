#include "No.h"

namespace Artur{
No::No(QString dado):
    dado(dado),
    esquerda(0),
    direita(0)
{
}

No::~No()
{
//    std::cout<<"Metodo Destrutor do No Elemento = "<<this->dado<<std::endl;
    if(this->esquerda != 0) delete this->esquerda;
    if(this->direita != 0)  delete this->direita;
}

}   //namespace
