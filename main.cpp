#include <iostream>
#include <vector>

#include "./include/Balde.hpp"
#include "./include/Diretorio.hpp"

using namespace std;

int main(){
    size_t tamMMain;
    size_t nBitsMain = 4;

    cout << "Insira o tamanho M:" << endl;
    cin >> tamMMain;
    //cout << "Insira o numero de bits B" << endl;
    //cin >> nBitsMain;
    
    Diretorio* dir = new Diretorio(nBitsMain, tamMMain);
    cout << "Diretório criado" << endl;

    dir->insere("0000");
    dir->insere("0100");
    dir->insere("1010");
    dir->insere("1111");

    dir->imprimeDiretorio();
}