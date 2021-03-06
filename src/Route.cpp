#include <iostream>

using namespace std;

#include "Route.h"

//------------------------------------------- Constantes, statiques et types privés

//#define MAP

//------------------------------------------- Méthodes protégées et privées

//------------------------------------------- METHODES PUBLIC

bool Route::PassBy(string departureCity, string arrivalCity)
{
    return !((!departureCity.empty() && departureCity != this->GetDeparture())
             || (!arrivalCity.empty() && arrivalCity != this->GetArrival()));
}

//------------------------------------------- Redefinition d'operateurs

std::ostream &operator<<(std::ostream &os, const Route &r)
{
    r.out(os);
    return os;
}

//------------------------------------------- Constructeurs - destructeur

Route::~Route()
{
#ifdef MAP
    cout << "Appel au destructeur de <Route>" << endl;
#endif
}


