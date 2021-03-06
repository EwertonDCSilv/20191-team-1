#ifndef HEROI_H
#define HEROI_H

#include <string>
#include "randomize.h"
#include "personagem.h"

/**
 * Definição do contrato da classe Heroi.h
 */

class Heroi : public Personagem {

private:
    std::string _nome;
    int _pt_vida;
    int _pt_ataque;
    int _pt_defesa;
    bool _vivo;
    double bonus_ataque;

public:
    Heroi(int pt_vida, int pt_ataque, int pt_defesa, std::string nome);
    int get_ataque_com_bonus();

    const int realiza_ataque();

};

#endif