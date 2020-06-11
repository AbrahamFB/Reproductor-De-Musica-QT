#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "QStringList"
#include "vector"
#include "cancion.h"


class Playlist
{
public:
    Playlist();

    void add(QStringList files);

    void eliminar(int index);

    void save();

    QStringList ObtenerNombreCancionEnLista();

    QList<Track> tracks;

    QStringList getRutas();

    string rutas[10] = {":/caratulas/1.jpg",":/caratulas/2.jpg",":/caratulas/3.jpg",":/caratulas/4.jpg", ":/caratulas/5.jpg", ":/caratulas/6.jpg", ":/caratulas/7.jpg", ":/caratulas/8.jpeg", ":/caratulas/9.jpg"};
    string artitas[10]={"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    int bandera = 0;

private:

};

#endif // PLAYLIST_H
