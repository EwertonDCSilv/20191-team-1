#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem {

protected:
    string nome;
    int pt_vida;
    int pt_ataque;
    int pt_defesa;
    bool vivo;

public:
    int get_pt_vida();
    int get_pt_ataque();
    int get_pt_defesa();
    string get_name();
    virtual void diminui_vida(const int dano_recebido) = 0;
    virtual const int realiza_ataque() = 0;
};

#endif