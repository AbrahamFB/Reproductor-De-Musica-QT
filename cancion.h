#ifndef TRACK_H
#define TRACK_H

#include <string>

using namespace std;

class Track
{
public:
    Track();

    string obtenerNombre();

    string obtenerUbicacion();

     string obtenerRuta();

    void asignarNombre(string name);

    void asignarUbicacion(string location);

    void asignarRuta(string ruta);

private:
    string nombre = "";

    string ubicacion = "";

    string ruta;
};

#endif // TRACK_H
