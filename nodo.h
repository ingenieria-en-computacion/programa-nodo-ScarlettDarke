#ifndef __NODO__
#define __NODO__
#include <stdbool.h>
#include <stdlib.h>
typedef int DATO;
typedef struct _Nodo Nodo;
struct _Nodo{
    DATO dato;
    Nodo* sig;
};
Nodo* crear_nodo();
bool borrar_nodo(Nodo*);
Nodo* asig_dato(Nodo*, DATO);
DATO obtenerdato(Nodo*);
Nodo* asig_referencia(Nodo*,Nodo*);
Nodo* obtreferencia(Nodo*);




#endif