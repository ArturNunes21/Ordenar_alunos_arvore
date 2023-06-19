#ifndef NO_H
#define NO_H

#include<iostream>
#include <QString>

namespace Artur{

class No
{
private:
    QString dado;
public:
    No *direita;
    No *esquerda;
public:
    No(QString dado);
    ~No();
    QString getDado()const{return dado;}
    void setDado(QString dado){this->dado = dado;}
    No* getDireita(){return direita;}
    void setDireita(No* direita){this->direita = direita;}
    No* getEsquerda(){return esquerda;}
    void setEsquerda(No* esquerda){this->esquerda = esquerda;}
};
}
#endif // NO_H
