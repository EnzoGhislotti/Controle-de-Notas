#ifndef NOTAS_H
#define NOTAS_H

#include <map>
#include <string>
#include <vector>

extern std::map<std::string, std::vector<double>> alunos;

void cadastrarNota(const std::string& aluno, double nota);

#endif