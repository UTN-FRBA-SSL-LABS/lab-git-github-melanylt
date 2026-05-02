#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*Una linea funciona de modo que tengamos una linea principal que tenga el codigo que funciona y que al agregar cambios utilicemos ramas paralelas que una vez que tengan un funcionamiento correcto sean integradas a la linea principal */
int multiplicar(const int a, const int b) {
    return a * b;/* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0;
}
