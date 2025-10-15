# Struct
Primeira versao da struct registro de contato

📘 Cadastro Simples em C

Este projeto é um pequeno programa em linguagem C que demonstra o uso de structs (estruturas) para armazenar e exibir dados de uma pessoa, como nome, sobrenome, telefone e e-mail.

🧠 Objetivo

O objetivo deste código é mostrar, de forma prática e didática, como:

Declarar e utilizar uma struct;

Ler informações do usuário via terminal;

Exibir os dados armazenados de forma organizada.

🧩 Estrutura do Código

O programa define uma estrutura chamada registro que contém quatro campos:

struct registro {
    char nome[30];
    char sobrenome[30];
    char telefone[15];
    char email[50];
};


Essa estrutura permite criar variáveis (como pessoa1) capazes de armazenar os dados pessoais de um indivíduo.

⚙️ Funcionamento

O usuário é solicitado a digitar:

Nome

Sobrenome

Telefone

E-mail

Os dados digitados são armazenados dentro da variável pessoa1.

O programa, então, imprime todos os dados coletados no formato:

Dados da pessoa:
Nome: [nome]
Sobrenome: [sobrenome]
Telefone: [telefone]
E-mail: [email]

🖥️ Compilação e Execução
🔹 No Windows (com MinGW, por exemplo):
gcc cadastro.c -o cadastro.exe
./cadastro.exe

🔹 No Linux / macOS:
gcc cadastro.c -o cadastro
./cadastro

🧱 Estrutura Condicional #ifdef _WIN32

A linha:

#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#endif


serve para incluir a biblioteca Windows.h apenas se o código for compilado em um sistema Windows.
Em sistemas Unix (como Linux e macOS), essa parte é ignorada.

🚀 Exemplo de Execução
Digite o nome: Guilherme
Digite o sobrenome: Silva
Digite o telefone: 99999-9999
Digite o e-mail: guilherme@email.com

Dados da pessoa:
Nome: Guilherme
Sobrenome: Silva
Telefone: 99999-9999
E-mail: guilherme@email.com

🧰 Tecnologias Utilizadas

Linguagem C (padrão C99)

Compilador GCC

📚 Conceitos Envolvidos

Estruturas (struct)

Entrada e saída de dados (scanf / printf)

Tipos de dados básicos (char)

Organização de informações em registros

🧑‍💻 Autor

Guilherme (Gui)
Projeto didático desenvolvido para estudo e prática de C.
