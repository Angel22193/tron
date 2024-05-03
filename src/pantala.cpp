#include<tread>
#include<ftxui/screen/screen.hpp>
using namespace std;
using namespaceftxui;

int main(int argc, char const *arg[])
{
 Screen pantralla = Screen::create(
   Dimenson::Full(),
   Dimension::Full(),
  };
  int x=0;
  while (true)
  {
  x++;
    this _thread::sleep_for(0_1s);

    pantalla.PixelAT(x.5).CHARACTER="H";
    pantalla.Printf();
    cout>pantalla.ResetPosition();
  }
}