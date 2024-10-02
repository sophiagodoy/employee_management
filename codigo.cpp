// GESTÃO DE FUNCIONÁRIO 
// DEFININDO BIBLIOTECA
#include <iostream>

// DEFININDO STRUCT
struct Funcionario {
    int id;
    char nome[50]; // char porque estou definindo o tamanho
    float salario;
    int idade;
}; 

// FUNÇÃO PARA CADASTRAR FUNCIONÁRIO
void cadastrar_funcionario(Funcionario vetor[], int &num_funcionarios) {
    // & - pq precisamos atualizar num_funcionario cada vez que um funcionário novo é passado, nas outras funções não precisa porque ela apenas lê o valor de num_funcionario
    char resposta; 

    // DEFININDO CONDIÇÕES 
    while (num_funcionarios < 100) {
        // PEDINDO INFORMAÇÕES
        std::cout << "Digite o ID do funcionario: "; 
        std::cin >> vetor[num_funcionarios].id; // devo usar num_funcionario e nao i para garantir que cada novo funcionario seja armazenado na próxima posição dispinivel do vetor

        std::cout << "Digite o nome do funcionario: ";
        std::cin >> vetor[num_funcionarios].nome; 

        std::cout << "Digite o salario do funcionario: "; 
        std::cin >> vetor[num_funcionarios].salario; 

        std::cout << "Digite a idade do funcionario: ";
        std::cin >> vetor[num_funcionarios].idade; 

        num_funcionarios++;

        std::cout << "Funcionario cadastrado com sucesso" << std::endl; 

        std::cout << "Deseja cadastrar mais um funcionario? (S/N): ";
        std::cin >> resposta;

        if (resposta == 'N' || resposta == 'n') {
            break;
        }
    }

    if (num_funcionarios == 100) {
        std::cout << "O limite de funcionarios para cadastrar foi atingido" << std::endl;
    }
}

// FUNÇÃO PARA EXIBIR TODOS OS FUNCIONÁRIOS CADASTRADOS 
void exibir_funcionarios(Funcionario vetor[], int num_funcionarios) {
    // DEFININDO VARIÁVEIS 
    for (int i = 0; i < num_funcionarios; i++) { 
        std::cout << "ID: " << vetor[i].id // uso i, porque estou dentro de um loop, se eu não existive usaria num_funcionario
                  << ", Nome: " << vetor[i].nome 
                  << ", Salario: " << vetor[i].salario 
                  << ", Idade: " << vetor[i].idade << std::endl; 
    }
}

// FUNÇÃO PARA AUMENTAR O SALÁRIO
void aumentar_salario(Funcionario vetor[], int num_funcionarios) {
    int id;
    float aumento;
    bool encontrado = false; // verifica se o funcionário foi encontrado

    // PEDINDO INFORMAÇÕES 
    std::cout << "Digite o ID do funcionario: "; 
    std::cin >> id; 

    std::cout << "Digite o valor do aumento do salario: ";
    std::cin >> aumento;

    // DEFININDO CONDIÇÕES 
    for (int i = 0; i < num_funcionarios; i++) {
        if (vetor[i].id == id) {
            vetor[i].salario += aumento; 
            std::cout << "Salario aumentado com sucesso" << std::endl;
            encontrado = true;
            break;
        }
    }

    if (encontrado == false) {
        std::cout << "Funcionario não encontrado" << std::endl;
    }
}

// FUNÇÃO PARA EXIBIR O SALÁRIO ACIMA DE UM VALOR
void exibir_salario_acima(Funcionario vetor[], int num_funcionarios) {
    float valor_salario;

    // PEDINDO INFORMAÇÕES 
    std::cout << "Digite o valor do salario: ";
    std::cin >> valor_salario;

    // DEFININDO CONDIÇÕES 
    for (int i = 0; i < num_funcionarios; i++) {
        if (vetor[i].salario > valor_salario) {
            std::cout << "ID: " << vetor[i].id 
                      << ", Nome: " << vetor[i].nome 
                      << ", Salario: " << vetor[i].salario << std::endl;
        }
    }
}

// FUNÇÃO PARA CALCULAR A MEDIA SALARIAL 
void media_salarial(Funcionario vetor[], int num_funcionarios) {
    float soma = 0; 

    // DEFININDO CONDIÇÕES
    for (int i = 0; i < num_funcionarios; i++) {
        soma += vetor[i].salario;
    }

    if (num_funcionarios > 0) { // evita divisões por zero 
        float media = soma / num_funcionarios;
        std::cout << "O valor da media e: " << media << std::endl;
    } 
    else {
        std::cout << "Nenhum funcionario cadastrado para calcular a media." << std::endl;
    }
}

int main() {
    // DEFININDO VARIÁVEIS
    Funcionario vetor[100]; 
    int num_funcionarios = 0;
    int opcao;

    do {
        // MENU DE OPÇÕES
        std::cout << "\n1. Cadastrar Funcionario\n";
        std::cout << "2. Exibir Funcionarios\n";
        std::cout << "3. Aumentar Salario\n";
        std::cout << "4. Exibir Funcionarios com Salario Acima de um Valor\n";
        std::cout << "5. Media Salarial\n";
        std::cout << "6. Sair\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;
        
        // DEFININDO CONDIÇÕES
        switch (opcao) {
            case 1:
                cadastrar_funcionario(vetor, num_funcionarios);
                break; 
            case 2: 
                exibir_funcionarios(vetor, num_funcionarios);
                break; 
            case 3: 
                aumentar_salario(vetor, num_funcionarios); 
                break;
            case 4:
                exibir_salario_acima(vetor, num_funcionarios); 
                break; 
            case 5: 
                media_salarial(vetor, num_funcionarios); 
                break;
            case 6: 
                std::cout << "Saindo do programa" << std::endl; 
                break;
            default: 
                std::cout << "Opcao invalida" << std::endl;
        }
    } while (opcao != 6);

    return 0;
}

//  precisa definir num_funcionarios como parâmetro nas funções para que elas possam acessar e modificar o número atual de funcionários cadastrados
