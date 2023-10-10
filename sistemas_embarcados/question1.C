#include <stdio.h>

void inputTemperaturas(int temps[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Qual a temperatura? %d:\n", (i + 1));
        scanf("%d", &temps[i]);
    }
}

void calcularFrequencia(int temps[], int frequencia[], int size) {
    for (int i = 0; i < size; i++) {
        int contagem = 1;
        if (temps[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (temps[j] == temps[i]) {
                    contagem++;
                    temps[j] = -1;
                }
            }
            frequencia[i] = contagem;
        }
    }
}

void ordenarTemperaturas(int temps[], int frequencia[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (frequencia[j] < frequencia[j + 1]) {
                int tempFreq = frequencia[j];
                frequencia[j] = frequencia[j + 1];
                frequencia[j + 1] = tempFreq;

                int tempTemp = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = tempTemp;
            }
        }
    }
}

void imprimirRelatorio(int temps[], int frequencia[], int size) {
    printf("RELATÓRIO DE FREQUÊNCIA\n");
    printf("============\n");
    for (int i = 0; i < size; i++) {
        if (frequencia[i] > 0) {
            printf("%d - %d VEZES\n", temps[i], frequencia[i]);
        }
    }
}

int main() {
    int temps[20];
    int frequencia[20] = {0};

    inputTemperaturas(temps, 20);
    calcularFrequencia(temps, frequencia, 20);
    ordenarTemperaturas(temps, frequencia, 20);
    imprimirRelatorio(temps, frequencia, 20);

    return 0;
}
