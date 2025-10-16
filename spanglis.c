#include <spanglish.h>

definirtipo estructura{
    flotante x;
    flotante y;
} Punto;

integer principal(integer nargumentos, constante puntero_a(caracter) argumentos[]) {
    Punto punto = {0};
    puntero_a(Punto) ppunto = direccion_de(punto);
    para(integer i = 0; i < 1; i++) {
        ppunto->x = 1.0; ppunto->y = 2.0;
        si(ppunto->x > 0) {
            continuar;
        } sino{
            detener;
        }
    }

    definirtipo enumeracion { rojo, verde, azul } Colores ;
    Colores c = rojo;
    segun(c) {
        caso rojo : retornar 1;
        caso verde : retornar 2;
    predeterminado: retornar 0;
    }

    retornar 0;
}