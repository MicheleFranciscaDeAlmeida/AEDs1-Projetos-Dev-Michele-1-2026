AEDs1 - Projetos de Desenvolvimento em C

Repositório contendo exercícios e projetos práticos da disciplina **Algoritmos e Estruturas de Dados I (AEDS1)**, realizados por **Michele Almeida** durante o ano de 2026.  

Estrutura do Repositório

- `Exercícios prática/` – Códigos-fonte em C de todos os exercícios.
- `output/` – Arquivos compilados (.exe). **Recomendado não versionar** (adicione ao `.gitignore`).
- `README.md` – Documentação do repositório.

---

Descrição dos Exercícios

Cada arquivo `.c` contém um exercício específico, cobrindo conceitos como:

- Estruturas de controle (`if`, `switch`, `for`, `while`)
- Entrada e saída de dados
- Operações matemáticas e funções
- Manipulação de arrays e strings
- Modularização de código
- Exercícios de lógica e resolução de problemas

Índice de Exercícios

| Exercício | Descrição | Conceitos | Link |
|-----------|-----------|-----------|------|
| 1  | Área e perímetro do retângulo | Entrada/saída, operações matemáticas | [Exercício1.c](prática/Exercício1.c) |
| 2  | Área do trapézio | Entrada/saída, cálculos matemáticos | [Exercício2.c](prática/Exercício2.c) |
| 3  | Áreas | Operações matemáticas, múltiplos cálculos | [Exercício3.c](prática/Exercício3.c) |
| 4  | Retângulo: área, perímetro e diagonal | Matemática, uso de fórmula | [Exercício4.c](prática/Exercício4.c) |
| 5  | Salário e horas trabalhadas | Entrada/saída, cálculos | [Exercício5.c](prática/Exercício5.c) |
| 6  | Consumo de combustível | Operações matemáticas | [Exercício6.c](prática/Exercício6.c) |
| 7  | Positivo, negativo ou zero | `if`, `else` | [Exercício7.c](prática/Exercício7.c) |
| 8  | Maior de dois números | `if`, `else` | [Exercício8.c](prática/Exercício8.c) |
| 9  | Par ou ímpar | `if`, operador `%` | [Exercício9.c](prática/Exercício9.c) |
| 10 | Média com situação | `if`, `else if`, `else` | [Exercício10.c](prática/Exercício10.c) |
| 11 | Maior de três números | `if`, lógica condicional | [Exercício11.c](prática/Exercício11.c) |
| 12 | Múltiplos | `if`, operador `%` | [Exercício12.c](prática/Exercício12.c) |
| 13 | Intervalo | `if`, operadores relacionais | [Exercício13.c](prática/Exercício13.c) |
| 14 | Intervalos múltiplos | `if`, `else if` | [Exercício14.c](prática/Exercício14.c) |
| 15 | Lanche (clássico de prova) | `switch` ou `if`, lógica de seleção | [Exercício15.c](prática/Exercício15.c) |
| 16 | Aumento de salário | `if`, `else if`, porcentagem | [Exercício16.c](prática/Exercício16.c) |
| 17 | Tipo de triângulo | `if`, lógica matemática | [Exercício17.c](prática/Exercício17.c) |

Como Usar

1. Clone o repositório:

```bash
git clone https://github.com/MicheleFranciscaDeAlmeida/AEDs1-Projetos-Dev-Michele-1-2026.git

2. Acesse a pasta dos exercícios:
cd AEDs1-Projetos-Dev-Michele-1-2026/Exercícios prática/

3. Instale o compilador GCC (se ainda não tiver):
Windows: Instale o MinGW
 e adicione o caminho do gcc.exe ao PATH do sistema.
Linux (Debian/Ubuntu):
sudo apt update
sudo apt install build-essential
MacOS:
brew install gcc

4. Compile e execute o programa desejado:
gcc Exercício1.c -o Exercício1.exe
./Exercício1.exe

Obs.: Para sistemas Windows, os arquivos .exe já estão disponíveis na pasta output/.