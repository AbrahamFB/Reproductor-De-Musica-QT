#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"
#include <QList>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_add_clicked();

    void on_fin_clicked();

    void on_save_clicked();

    void on_play_clicked();

    void on_barra_Vol_valueChanged(int value);

    void on_barra_progreso_sliderMoved(int position);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_siguiente_clicked();

    void on_anterior_clicked();

    void on_mute_clicked();

    void on_shuffle_clicked();

    void update();

    void on_barra_busqueda_textChanged(const QString &arg1);

    void on_inicio_clicked();

private:
    void updateList();

    void cargarCancion();

    void sig();

    void anterior();

    void shufflePlaylist();

    int getIndex();

    bool repeat = false;

    bool muted = false;

    bool shuffle = false;

    int lContador = 0;

    Playlist playlist;

    Ui::MainWindow *ui;

    QTimer *updater = new QTimer(this);

    QMediaPlayer *player = new QMediaPlayer();

    vector<unsigned short int> shuffledPlaylist;

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // MAINWINDOW_H
