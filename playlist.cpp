#include "playlist.h"
#include <fstream>
#include "utils.h"


Playlist::Playlist()
{
    std::ifstream read("playlist");
    string loc;
    while(getline(read, loc)){
        Track track;
        track.asignarUbicacion(loc);
        track.asignarNombre(obtenerNombreUbicacion(loc));
        tracks.push_back(track);
    }
}

void Playlist::add(QStringList files)
{
    for(int i = 0; i < files.size(); i++)
    {
        Track track;
        track.asignarUbicacion(files[i].toStdString());
        track.asignarNombre(obtenerNombreUbicacion(files[i].toStdString()));
        track.asignarRuta(rutas[i]);
        tracks.push_back(track);
    }
}

void Playlist::eliminar(int index)
{
    tracks.erase(tracks.begin() + index);
}

void Playlist::save()
{
    std::ofstream write("playlist");
    for(int i = 0; i < tracks.size(); i++){
        write << tracks[i].obtenerUbicacion() << std::endl;
    }
}

QStringList Playlist::ObtenerNombreCancionEnLista()
{
    QStringList list;
    for(int i = 0; i < tracks.size(); i++)
    {
        QString qstr = QString::fromStdString(tracks[i].obtenerNombre());
        list.push_back(qstr);
    }
    return list;
}
QStringList Playlist::getRutas()
{
    QStringList list;
    for(int i = 0; i < tracks.size(); i++)
    {
        QString qstr = QString::fromStdString(tracks[i].obtenerRuta());

        list.push_back(qstr);
    }
    return list;
}
