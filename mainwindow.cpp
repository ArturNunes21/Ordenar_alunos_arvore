#include "mainwindow.h"
#include "ui_mainwindow.h"

#include

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_selecionar_arquivo_clicked()
{

    Artur::Arvore obj;

    QString enderecoArquivo = QFileDialog::getOpenFileName(
            this,"Selecione o arquivo", QDir::homePath(), "Todos os arquivos(*.*)");
    std::fstream arquivoRead;
    std::string linha;
    arquivoRead.open(enderecoArquivo.toStdString().c_str());
    if(arquivoRead.is_open())
    {
        while(std::getline(arquivoRead,linha))
        {
            QString linhaQt=QString::fromStdString(linha);
            obj.inserir(linhaQt);
            qDebug() << linhaQt;
        }
    }
    else
    {
        QMessageBox::critical(this,"ERRO", "Não foi possível abrir o arquivo.");
    }
    arquivoRead.close();
}

void imprimirEmOrdem(
        No* raiz, bool (*comparacao)(No*, No*)) {
    if (raiz != nullptr) {
        imprimirEmOrdem(raiz->esquerda, comparacao);

        qDebug() << "Nome: " << raiz->nome;
        qDebug() << "Disciplina: " << raiz->disciplina;
        qDebug() << "Turma: " << raiz->turma;
        qDebug() << "Turno: " << raiz->turno;

        imprimirEmOrdem(raiz->direita, comparacao);
    }
}




















