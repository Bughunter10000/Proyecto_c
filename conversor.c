#include <conversor.c>

void convertirMoneda(float cantidad, int opcion) {
    float resultado;
    switch(opcion) {
        case 1: // Quetzales a Dólares
            resultado = cantidad / 7.8; // Tipo de cambio aproximado
            printf("%.2f Quetzales son %.2f Dólares\n", cantidad, resultado);
            break;
        case 2: // Quetzales a Euros
            resultado = cantidad / 8.5;
            printf("%.2f Quetzales son %.2f Euros\n", cantidad, resultado);
            break;
        case 3: // Dólares a Quetzales
            resultado = cantidad * 7.8;
            printf("%.2f Dólares son %.2f Quetzales\n", cantidad, resultado);
            break;
        case 4: // Euros a Quetzales
            resultado = cantidad * 8.5;
            printf("%.2f Euros son %.2f Quetzales\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;
    float cantidad;
    
    printf("Conversor de monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    convertirMoneda(cantidad, opcion);

    return 0;
}
