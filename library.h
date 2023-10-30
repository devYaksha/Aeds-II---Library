#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Funcionario {
    int cod;
    char nome[50];
    char cpf[15];
    char data_nascimento[11];
    double salario;
} TFunc;

typedef struct Editora {
    char nome[50];
} TEdit;

typedef struct Livro {
    int cod;
    char nome[50];
    char data_lancamento[11];
    TEdit editora;
} TLivro;

// Retorna tamanho das estruturas
int tamanho_TFunc(); // Funcionario
int tamanho_TEdit(); //Editora
int tamaho_TLivro();  //Livro

// Cria uma estrutura do tipo especificado da funçao
TFunc *newFuncionario(int cod, char *nome, char *cpf, char *data_nascimento, double salario); //OK
void criarFuncAleatorias(int x, FILE *out);

TLivro *newLivro(int cod, char *nome, char *data_lancamento, TEdit editora); // OK
TEdit *newEditora(char *nome);

// Salva a estrutura no arquivo out, na posicao atual do cursor
void salvaFunc(TFunc *func, FILE *out); // OK
void salvaLivro(TLivro *livro, FILE *out); // OK
void salvaEdit(TEdit *editora, FILE *out); // OK


// Le um funcionario do arquivo in na posicao atual do cursor
// Retorna um ponteiro para funcionario lido do arquivo
TFunc *leFunc(FILE *in); //OK
TEdit *leEdit(FILE *in);// OK
TLivro *leLivro(FILE *in);//OK


// Imprime o tipo da funçao
void imprimeFunc(TFunc *func);//OK
void imprimeEdit(TEdit *edit);//OK
void imprimeLivro(TLivro *livro);//OK


#endif