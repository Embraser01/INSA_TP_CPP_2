//
// Created by gmarcelin on 14/11/16.
//


#include "ListRoute.h"


bool ListRoute::addRoute(const Route *route)
{
    if (this->cardMax > this->currentCard)
    {
        // Ici on cast pour pouvoir copier la valeur du pointeur dans le tableau
        // Ceci n'est pas autorisé sans cast avec l'option -fpermissive

        routes[currentCard++] = (Route *) route;
    }
    // TODO Faire en cas de tableau plein
    return false;

}

ListRoute *ListRoute::getDepartureFrom(const char *city)
{
    for (int i = 0; i++;);

    return NULL;
}

ListRoute *ListRoute::getArrivalTo(const char *city)
{
    return NULL;
}

size_t ListRoute::getSize() const
{
    return 0;
}

Route *ListRoute::getElement(size_t i)
{
    return NULL;

}

ListRoute::ListRoute(size_t sizeInit)
{
    this->cardMax = sizeInit;
    this->currentCard = 0;
    this->routes = new Route *[cardMax];

#ifdef MAP
    cout << "Appel au constructeur de <ListRoute>" << endl;
#endif
}


ListRoute::~ListRoute()
{
#ifdef MAP
    cout << "Appel au destructeur de <ListRoute>" << endl;
#endif
}
