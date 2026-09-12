#include "notas.h"

std::map<std::string, std::vector<double>> alunos;

void cadastrarNota(const std::string& aluno, double nota) {
    alunos[aluno].push_back(nota);
}