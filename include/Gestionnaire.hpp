#ifndef __MANAGER_HPP__
#define __MANAGER_HPP__

#include <iostream>

#include <SFML/Graphics/Texture.hpp>

#include "../include/Contexte.hpp"
#include "../include/armoire.hpp"
#include "../include/ciseaux.hpp"
#include "../include/prise.hpp"
#include "../include/bougeable.hpp"
#include "../include/fixe.hpp"
#include "../include/objet.hpp"
#include "../include/prise.hpp"
#include "ciseaux.hpp"

class Gestionnaire {
		private:
				/* data */
				Contexte* contexte;

		private: // Static
				static Gestionnaire* _instance;

		public: // Static
				static Gestionnaire* obtenirInstance();

		public:
				Gestionnaire();
				~Gestionnaire();

    void run();
    void initScene();

    bool objetSelectionneSuivreSouris();
    void checkEvenment(const sf::Event &evenement);
    bool checkSourisSurObjet();
	bool trouveObjetEnInteractionAvecObjetSelectionne();

};

/***************************************************/
/*                 Méthodes inline                 */
/***************************************************/

#endif
