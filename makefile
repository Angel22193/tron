output=bin/
inc=Iinclude
dependencias = -lftxui-screen -ltfxui-dom-lftxui-component
flags= std=c++2a


 run :$(output)/tron
   ./$<

   $(output)/tron :(source)/main.cpp
     g++ -o $@ $<(flags)

     
 run :$(output)/pantalla
   ./$<


        $(output)/pantalla :(source)/pantalla.cpp
     g++ -o $@ $<(flags)
