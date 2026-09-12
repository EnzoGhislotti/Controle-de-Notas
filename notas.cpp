#include "notas.h"
#include <numeric>
#include <iostream>

std::map<std::string, std::vector<double>> alunos;

void cadastrarNota(const std::string& aluno, double nota) {
    alunos[aluno].push_back(nota);
}

double calcularMedia(const std::vector<double>& notas) {
    return std::accumulate(notas.begin(), notas.end(), 0.0) / notas.size();
}

void exibirMedia(const std::string& aluno, const std::vector<double>& notas) {
    std::cout << "Media de " << aluno << ": " << calcularMedia(notas) << std::endl;
}