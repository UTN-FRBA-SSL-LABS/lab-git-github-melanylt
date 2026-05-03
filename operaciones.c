#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

<<<<<<< HEAD
int sumar(const int a, const int b) {
=======
int sumar(int a, int b) {
>>>>>>> origin/feature/conflicto-demo
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

<<<<<<< HEAD
int restar(const int a, const int b) {
=======
int restar(int a, int b) {
>>>>>>> origin/feature/conflicto-demo
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
<<<<<<< HEAD
/* Se utiliza una linea de forma de trabajar con ramas paralelas cuando se realiza un cambio y una vez asegurado usar la rama principal donde solo esta lo que funciona  */
int multiplicar(const int a, const int b) {
    return a * b;/* TODO: implementar */
=======

int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
>>>>>>> origin/feature/conflicto-demo
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

<<<<<<< HEAD
int esPar(const int n) {
    return (n % 2) == 0; /* version main */
=======
int esPar(int n) {
    return (n & 1) == 0;
>>>>>>> origin/feature/conflicto-demo
}
