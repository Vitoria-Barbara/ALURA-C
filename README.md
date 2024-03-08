# ALURA-C
## Curso de Linguagem C

Este repositório contém códigos desenvolvidos durante o curso de Linguagem C da Alura.

## Arquivos

- `programa.c`: Implementação de um jogo de adivinhação.
- `Tabuada.c`: Implementação de um programa para calcular tabuadas.
- `soma.c`: Implementação de um programa para somar números.

## Anotações

### Diretrizes para `#includes`

- `#include <stdio.h>`: Utilizado para incluir a biblioteca padrão de entrada e saída. O uso de `<>` indica a importação de uma biblioteca externa.
- `#include "teste.h"`: Utilizado para incluir um arquivo de cabeçalho local. O uso de `""` indica a busca interna do arquivo, que deve estar no mesmo diretório que o arquivo principal.

### Casting utilizado em C para conversão de tipos

Ao utilizar `printf`, é necessário especificar o tipo de parâmetro que será chamado dentro das aspas (`""`) e fora delas, dentro dos parênteses, especificar o parâmetro (variável) correspondente:
- `%d`: para inteiros
- `%c`: para caracteres
- `%s`: para cadeias de caracteres (arrays de caracteres)
- `%f`: para números de ponto flutuante (utilizado em `printf` e `scanf`)
- `%f`: para `double` em `printf` e `%lf` em `scanf`
- `%x`: para representação hexadecimal

Ao utilizar `scanf`, é necessário passar o parâmetro com `&` para indicar o endereço de memória da variável.

### Tipos de dados inteiros

- `short`: ocupando 2 bytes
- `int`: ocupando 4 bytes, equivalentes a 32 bits
- `long`: ocupando 8 bytes, equivalentes a 64 bits

### Tipos de dados de ponto flutuante

- `double`: ocupando 8 bytes
- `float`: ocupando 4 bytes

`double` é capaz de armazenar números com maior precisão do que `float`.

### Geração de números aleatórios em C

- Utiliza-se `srand()` em conjunto com `#include <time.h>` para inicializar o gerador de números aleatórios com uma semente única.
- Em seguida, pode-se utilizar `rand()` para gerar números aleatórios.

Para obter um número aleatório com dois algarismos, por exemplo, utiliza-se `%100` para obter o resto da divisão por 100.
