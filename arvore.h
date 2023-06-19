#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

#include<QString>
#include<iostream>

#include "iarvore.h"
#include "No.h"


namespace Artur{

class Arvore : public IArvore
{

private:
    No* raiz;

private:
    void inserirRecursivo(No **raiz, QString elemento);
    void removerRecursivo(No **raiz, QString elemento);
//    void emOrdem(No* raiz)const;
    QString retornar_Maior(No **raiz);
public:
    Arvore();
    ~Arvore();
    void inserir(QString elemento){this->inserirRecursivo(&raiz,elemento);}
    void remover(QString elemento){this->removerRecursivo(&raiz, elemento);}
//    void imprimir(){emOrdem(raiz);}

};
}
#endif // ARVORE_H

