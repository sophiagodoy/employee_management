# GESTÃO DE FUNCIONÁRIOS 

Este projeto é um sistema simples de gestão de funcionários em C++, onde é possível cadastrar, exibir, aumentar o salário, calcular a média salarial e listar funcionários com salário acima de um valor especificado.

## Funcionalidades

1. **Cadastrar Funcionário**: Adiciona um novo funcionário ao sistema, solicitando informações como ID, nome, salário e idade.
2. **Exibir Funcionários**: Lista todos os funcionários cadastrados com suas respectivas informações.
3. **Aumentar Salário**: Permite aumentar o salário de um funcionário ao fornecer seu ID e o valor do aumento.
4. **Exibir Funcionários com Salário Acima de um Valor**: Mostra funcionários que possuem um salário superior ao valor especificado pelo usuário.
5. **Calcular Média Salarial**: Calcula e exibe a média salarial de todos os funcionários cadastrados.

## Estrutura de Dados

O sistema usa uma `struct` chamada `Funcionario` para armazenar as seguintes informações:
- **id**: Identificador único do funcionário (inteiro).
- **nome**: Nome do funcionário (string de até 50 caracteres).
- **salario**: Salário do funcionário (float).
- **idade**: Idade do funcionário (inteiro).

## Limitações

- O sistema suporta até **100 funcionários**.
- O nome do funcionário é limitado a **50 caracteres**.
