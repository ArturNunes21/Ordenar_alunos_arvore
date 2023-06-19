#ifndef IARVORE_H
#define IARVORE_H

#include <QString>

namespace Artur{

class IArvore{
    virtual void inserir(QString elemento) = 0;
//    virtual void imprimir() = 0;
    virtual void remover(QString elemento) = 0;
};
}
#endif // IARVORE_H
