#ifndef BATALHA_H
#define BATALHA_H
#include <string>

class Batalha{

private:
    std::string name;
    int force;
    int agility;
    float life;

public:
    Batalha(std::string, int force, int agility, int life);

    int get_life();
    int get_agility();
    int get_force();
    std::string get_name();
};

#endif