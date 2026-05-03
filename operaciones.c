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
/* Se utiliza una linea de forma de trabajar con ramas paralelas cuando se realiza un cambio y una vez asegurado usar la rama principal donde solo esta lo que funciona  */
int multiplicar(const int a, const int b) {
    return a * b;/* TODO: implementar */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0; /* version main */
}
