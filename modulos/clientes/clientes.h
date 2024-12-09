#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct cliente Cliente;

struct cliente {
    char nome[55];
    char cpf[12];
    char email[55];
    char celular[11];
    char status;
};

int modulo_clientes(void);
Cliente* cadastrar_cliente(void);
void grava_cliente(Cliente*);
void exibe_cliente(Cliente*);
Cliente* busca_cliente(void);
void alterar_cliente(void);
void lista_cliente(void);
void excluir_cliente(Cliente*);

#endif