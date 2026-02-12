/**
 * @exercise Lista Básico C++ - Exercício 3
 * @title Array Dinâmico
 * @description Aloque dinamicamente um array de inteiros com capacidade para 100 elementos. Crie uma função que receba o array (ponteiro) e uma variável de tamanho (por referência), peça ao usuário para digitar o tamanho desejado e preencha o array com valores (ex: múltiplos de 10). No main, exiba o array preenchido.
 * @input stdin
 * @output stdout
 * @timeout 1000
 * @test name="Tamanho 5" input="5" expected="0 10 20 30 40"
 * @test name="Tamanho 3" input="3" expected="0 10 20"
 * @test name="Tamanho 1" input="1" expected="0"
 */

#include <iostream>

using namespace std;

bool fillArray(int* array, int& tamanho) {
    cin >> tamanho;

    if (tamanho < 1 || tamanho > 100) {
        cout << "Tamanho inválido. Deve ser entre 1 e 100." << endl;
        return false;
    }

    for (int i = 0; i < tamanho; i++) {
        array[i] = i * 10;
    }

    return true;
}


int main() {
    const int CAPACIDADE = 100;
    int* array = new int[CAPACIDADE];
    int tamanho = 0;

    bool success = fillArray(array, tamanho);

    if (!success) {
        delete[] array;
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
    return 0;
}
