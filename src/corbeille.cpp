#include "../include/corbeille.hpp"

Corbeille::Corbeille(sf::Vector2f position,
    sf::Vector2f scale,
    uint couche,
    bool visible)
    : Fixe(position, scale, couche, visible)
    , etat(0)
{
	_affichable.definirTexture(*textureMap["ressources/corbeille.png"]);
	_materiaux.push_back(papier);
}

Corbeille::~Corbeille() { }
void Corbeille::miseAJour()
{
	if (etat == 0)
		_affichable.definirTexture(*textureMap["ressources/corbeille.png"]);
	else if (etat == 1)
		_affichable.definirTexture(*textureMap["ressources/corbeille_brule.png"]);
	else if (etat == 2)
		_affichable.definirTexture(*textureMap["ressources/corbeille_brule_beaucoup.png"]);
}
bool Corbeille::estIphone()
{

	auto result1 = std::find(_materiaux.begin(), _materiaux.end(), feu);
	auto result2 = std::find(_materiaux.begin(), _materiaux.end(), inflammable);

	if (result1 != _materiaux.end()) {
		if (result2 != _materiaux.end() && result1 != _materiaux.end()) {
			etat = 2;
		}
		etat = 1;
	}
	miseAJour();
	return true;
}
void Corbeille::clic() { }
