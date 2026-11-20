#ifndef CARTE_H
#define CARTE_H

#include <vector>

class Carte {
public:
    Carte();
    void afficher();
private:
    int nb_cases_;
    std::vector<int>grille;
};


#endif // CARTE_H