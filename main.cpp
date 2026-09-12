#include <iostream>
#include "notas.h"

int main() {
    cadastrarNota("Aecio", 6.0);
    cadastrarNota("Aecio", 8.0);

    for (double nota : alunos["Aecio"]) {
        std::cout << "Nota: " << nota << std::endl;
    }
    
    exibirMedia("Aecio", alunos["Aeico"]);

    return 0;
}