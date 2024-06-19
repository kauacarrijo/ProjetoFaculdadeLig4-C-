# Lig4 - Jogo Clássico em C

Este é um projeto de implementação do clássico jogo Lig4 em C, desenvolvido como parte de um projeto acadêmico.

## Descrição

O Lig4 é um jogo de estratégia para dois jogadores, onde o objetivo é alinhar quatro peças consecutivas na horizontal, vertical ou diagonal em um tabuleiro de 6 linhas por 7 colunas. Este projeto implementa uma versão jogável em console desse jogo.

## Como Jogar

1. **Início**: O jogo começa com um tabuleiro vazio.
2. **Jogadores**: Dois jogadores se alternam para inserir suas peças ('X' e 'O') em uma das colunas.
3. **Objetivo**: O primeiro jogador a conseguir alinhar quatro peças consecutivas vence o jogo.
4. **Termo do Jogo**: O jogo termina quando um jogador vence ou o tabuleiro está cheio sem um vencedor.

## Instalação

Para compilar e executar o jogo, siga as instruções abaixo:

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/seu-usuario/lig4.git

2. **Compile o código**:
   ```bash
   gcc lig4.c -o lig4

3. **Execute o jogo**:
   ```bash
   ./lig4

## Uso
- Ao iniciar o jogo, você verá um tabuleiro vazio com as colunas numeradas de 1 a 7.
- Cada jogador insere sua jogada escolhendo o número da coluna onde deseja colocar sua peça.
- O jogo continua até que um jogador vença ou o tabuleiro fique cheio.
