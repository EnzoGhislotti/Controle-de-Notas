#ifndef NOTAS_H
#define NOTAS_H

#include <map>
#include <string>
#include <vector>

extern std::map<std::string, std::vector<double>> alunos;

void cadastrarNota(const std::string& aluno, double nota);

double calcularMedia(const std::vector<double>& notas);
void exibirMedia(const std::string& aluno, const std::vector<double>& notas);

#endif