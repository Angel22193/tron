#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <thread>//hilos procesos
#include <fstream>//flujos de archivos
#include <string>//flujos entrada salida

using namespace std;
using namespace ftxui;

int main(int argc,char const *argv[])
{
     ifstream archivo;
        archivo.open("./assets/images/moto.txt");
        ostringstream moto;
        while (archivo.good())
        {
            archivo >> moto ;
        }
        archivo.close();

    int fotograma = 0;
    while (true)
    {
        this_thread::sleep_for(0.1s);
        fotograma++;
        Element personaje=spinner(21,fotograma) | bold | color(Color::Red)| bgcolor(Color::White);
        Element eMoto = text(moto);
        Element dibujo=hbox({personaje,eMoto});
        Screen pantalla=Screen::Create(Dimension::Full());
        Render(pantalla,dibujo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }

    return EXIT_SUCCESS;
}