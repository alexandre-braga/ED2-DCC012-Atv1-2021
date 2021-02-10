#include "./include/Diretorio.hpp"

Diretorio::Diretorio(size_t nBits):conjuntoBaldes{2} {
    this->profundidadeGlobal = 1;
    this->bitsB = nBits;
    std::vector<Balde*> conjuntoBaldes;
}

void Diretorio::insere(std::string pseudoChave){
    size_t indiceBalde = std::stoi(pseudoChave.substr(0, this->profundidadeGlobal), nullptr, 2); //Acesso ao indice do Balde por binario
    int dLocal = conjuntoBaldes[indiceBalde]->getProfundidadeLocal();
    int dGlobal = this->profundidadeGlobal;
    if(!conjuntoBaldes[indiceBalde]->isCheio()){
        conjuntoBaldes[indiceBalde]->insere(pseudoChave); 
    }
    else{
        if(dLocal > dGlobal){
            std::cout << "implementaçao errada\n";
        }
        if(dLocal == dGlobal){
            this->duplicaDiretorio();
        }
        this->divideBaldes(indiceBalde);
        this->insere(pseudoChave);
    }
}

std::string Diretorio::busca(std::string pseudoChave){
    size_t indiceBalde = std::stoi(pseudoChave.substr(0, this->profundidadeGlobal), nullptr, 2); //Acesso ao indice do Balde por binario
    if (indiceBalde < pow(2,this->profundidadeGlobal)){
        conjuntoBaldes[indiceBalde]->busca(pseudoChave);     
    }
    else
        std::cout << "Element not found in conjuntoBaldes\n";
}

void Diretorio::divideBaldes(int indiceBalde){
    //divide os baldes em 2 novos com profundidadeLocal+1
    int profundidadeNova = conjuntoBaldes[indiceBalde]->getProfundidadeLocal() + 1;
    int novoTamanhoM = conjuntoBaldes[indiceBalde]->getTamanhoM();
    Balde* novoBalde = new Balde(novoTamanhoM);
    
    conjuntoBaldes[indiceBalde]->atualizaBalde(profundidadeNova);
    novoBalde->atualizaBalde(profundidadeNova);

    conjuntoBaldes[indiceBalde]->

    for 
        std::string novoIndice = std::stoi(pseudoChave.substr(0, this->profundidadeGlobal), nullptr, 2);
        if(novoIndice != )
            //move pro novo balde de novoIndice
    //cria um novo balde no caso, e mantem o original, 
    //ajusta ponteiros e dlocal (atualizaBalde())
    //redistribui entre os 2 novos baldes
}

void Diretorio::duplicaDiretorio(){
    this->profundidadeGlobal += 1;
    //std::vector<Balde*> duplicata {pow(2,profundidadeGlobal)};
    //rearranjar
    
    //this->conjuntoBaldes = duplicata;
}