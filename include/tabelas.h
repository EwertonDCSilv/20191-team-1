#ifndef TABELAS_H
#define TABELAS_H

#include <string>
#include <map>

using namespace std;

class Tabelas {

private:
	map<int, struct_heroi> set_herois_disponiveis;
	map<int, struct_cenarios> set_cenarios_disponiveis;
	map<int, struct_ataque_thanos> set_ataques_thanos_disponiveis;
	//TODO: mapear ascii art

public:
	void popular_set_herois_disponiveis();
	void popular_set_cenarios_disponiveis();
	void popular_set_ataques_thanos_disponiveis();

};

#endif