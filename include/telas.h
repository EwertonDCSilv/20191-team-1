#ifndef INC_20191_TEAM_1_TELAS_H
#define INC_20191_TEAM_1_TELAS_H

#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include "heroi.h"

/**
 * Definição do contrato da classe Telas.h
 */

void tela_inicial();
void tela_como_jogar();
void tela_dificuldade();
void tela_monta_equipe();
void mostra_equipe(std::set<Heroi> equipe);
void tela_vitoria_jogador();
void tela_vitoria_thanos();
void tela_resultado_ataque_thanos(std::string heroi, int dano_causado, std::string nome_ataque);
void tela_morte_heroi_sem_pedra(std::string nome_heroi);
void tela_resultado_ataque_jogador(int dano_causado, int hp_thanos);

#endif //INC_20191_TEAM_1_TELAS_H