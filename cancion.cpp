    #include "cancion.h"
    #include <iostream>

    Track::Track()
    {

    }

    string Track::obtenerNombre()
    {
        return nombre;
    }
    string Track::obtenerUbicacion()
    {
        return ubicacion;
    }
    string Track::obtenerRuta(){
        return ruta;
    }

    void Track::asignarNombre(string nombre)
    {
        this->nombre = nombre;
    }

    void Track::asignarUbicacion(string ubicacion)
    {
        this->ubicacion = ubicacion;
    }

    void Track::asignarRuta(string ruta)
    {
        this->ruta=ruta;
    }
