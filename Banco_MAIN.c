#include <stdio.h>
#include <string.h>

int main() {
    const int codigo = 123;
    int parametro,valida = 0, senha,verdadeiro, opcao = 4,funcionalidade, usuarios;
    float alterar;
    int senhaUsu[5] = {012, 013, 014, 015, 016};
    char nome[5][50] = {"Gustavo", "Isaque", "Jose Igor", "Nauak", "Felipe"};
    float saldo[5] = {100.3, 350.5, 604.98, 106.3, 5000.3};
    int id[5] = {0, 1, 2, 3, 4};
    int cpf[5] = {256, 152, 604, 102,258};
    int NumConta[5] = {37, 38, 39, 40, 41};

    // INICIALIZAÇÃO
    printf("----------Banco Mimosa----------\n");
    printf("             /)  (\\\n");
    printf("        .-._((,~~.))_.-,\n");
    printf("         `=.   OO   ,='\n");
    printf("           / ,o~~o. \\\n");
    printf("          { { .__. } }\n");
    printf("           ) `~~~\\' (\n");
    printf("          /`-._  _\\.-\\\n");
    printf("         /         )  \\\n");
    printf("       ,-X        #   X-.\n");
    printf("      /   \\          /   \\\n");
    printf("     (     )| |  | |(     )\n");
    printf("      \\   / | |  | | \\   /\n");
    printf("       \\_(.-( )--( )-.)_/\n");
    printf("       /_,\\ ) /  \\ ( /._\\\n");
    printf("           /_,\\  /._\\\n");
    printf("Digite 1 para executar como administrador\n");
    printf("Digite 2 para executar como cliente\n");
    scanf("%i", &parametro);
    printf("****************************************\n");
    //VALIDAÇÃO DO USUARIO 1

    if(parametro == 1) {
        do {
            printf("area do administrador\n");
            printf("Digite a senha: ");
            scanf("%i", &senha);

            if(senha == codigo) {
                printf("****************************************\n");
                printf("SENHA COREETA\n");
                printf("ACESSO LIBERADO\n");
                valida = 1;
                printf("****************************************\n");
                break;
            } else {
                printf("SENHA INCORRETA\n");
                printf("ACESSO NEGADO\n");
                printf("****************************************\n");

                opcao = opcao - 1;
                if(opcao == 1) {
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("ACESSO NEGADO PERMANENTEMENTE NESSA SECAO\n");
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                }
            }
        } while(opcao > 1);
        // FUNCIONALIDADES DO ADIMINISTRADOR
        if(valida == 1) {

            printf("****************************************\n");
            printf("AREA DO ADIMINISTRADOR\n");
            printf("****************************************\n");
            printf("\n");
            printf("TABELA DE CLIENTES\n");
            printf("ID = %i, Nome = %s, SALDO = %.2f,CPF = %i NUMERO DA CONTA = %i\n", id[0], nome[0], saldo[0], cpf[0], NumConta[0]);
            printf("ID = %i, Nome = %s, SALDO = %.2f,CPF = %i NUMERO DA CONTA = %i\n", id[1], nome[1], saldo[1], cpf[1], NumConta[1]);
            printf("ID = %i, Nome = %s, SALDO = %.2f,CPF = %i NUMERO DA CONTA = %i\n", id[2], nome[2], saldo[2], cpf[2], NumConta[2]);
            printf("ID = %i, Nome = %s, SALDO = %.2f,CPF = %i NUMERO DA CONTA = %i\n", id[3], nome[3], saldo[3], cpf[3], NumConta[3]);
            printf("ID = %i, Nome = %s, SALDO = %.2f,CPF = %i NUMERO DA CONTA = %i\n", id[4], nome[4], saldo[4], cpf[4], NumConta[4]);
            printf("\n");
            printf("TABELA DE FUNCIONALIDADES\n");
            printf("1 para alterar SALDO do usuario\n");
            printf("2 para alterar ID do usuario\n");
            printf("3 para alterar CPF do usuario\n");
            printf("4 para alterar NOME do usuario\n");
            printf("5 para alterar Numero da Conta do usuario\n");
            printf(" \n");
            printf("Digite a operacao que voce deseja realizar: ");
            scanf("%i", &funcionalidade);
        }
        // ALTERAR SALDO
        if(funcionalidade == 1) {
            printf("Qual dos usuarios voce deseja alterar o valor:(Digite o ID)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o saldo: \n");
            scanf("%f", &alterar );
            // printf("%f", alterar);
            saldo[usuarios] = alterar;
            printf("o valor foi redefinido para %f\n", saldo[usuarios]);
            printf("****************************************\n");
            printf("O ususario %s ficou com: \n", nome[usuarios]);
            printf("saldo = %.2f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
            printf("Numero da Conta = %i\n", NumConta[usuarios]);
        }
        // ALTERAR ID
        if(funcionalidade == 2) {
            printf("Qual dos usuarios voce deseja alterar o valor:(Digite o ID)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o ID: \n");
            scanf("%f", &alterar );
            // printf("%f", alterar);
            id[usuarios] = alterar;
            printf("o valor foi redefinido para %i\n", id[usuarios]);
            printf("****************************************\n");
            printf("O ususario %s ficou com: \n", nome[usuarios]);
            printf("saldo = %.2f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
            printf("Numero da Conta = %i\n", NumConta[usuarios]);

        }
        // ALTERAR CPF
        if(funcionalidade == 3) {
            printf("Qual dos usuarios voce deseja alterar o valor:(Digite o ID)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o CPF: \n");
            scanf("%f", &alterar );
            cpf[usuarios] = alterar;
            printf("o valor foi redefinido para %i\n", cpf[usuarios]);
            printf("****************************************\n");
            printf("O ususario %i ficou com: \n", nome[usuarios]);
            printf("saldo = %.2f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
            printf("Numero da Conta = %i\n", NumConta[usuarios]);
        }

        // ALTERAR NOME
        if(funcionalidade == 4) {
            char alterarNome[50];

            printf("Qual dos usuarios voce deseja alterar o valor:(Digite o ID)\n");
            scanf("%i", &usuarios);

            printf("Para qual valor alterar o NOME: \n");
            scanf("%s", alterarNome );

            strcpy(nome[usuarios], alterarNome);

            printf("O valor foi redefinido para %s \n", nome[usuarios]);
            printf("****************************************\n");
            printf("O ususario %s ficou com: \n", nome[usuarios]);
            printf("saldo = %.2f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
            printf("Numero da Conta = %i\n", NumConta[usuarios]);
        }
        // ALTERAR NUM CONTA
        if(funcionalidade == 5) {
            printf("Qual dos usuarios voce deseja alterar o valor:(Digite o ID)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o Numero da Conta: \n");
            scanf("%f", &alterar );
            NumConta[usuarios] = alterar;
            printf("o valor foi redefinido para %i\n", NumConta[usuarios]);
            printf("****************************************\n");
            printf("O ususario %s ficou com: \n", nome[usuarios]);
            printf("saldo = %.2f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
            printf("Numero da Conta = %i\n", NumConta[usuarios]);
        }
    }

    // USUARIO 2


    if(parametro == 2) {
        int entrar, i;
        printf("Digite o numero da sua conta:\n");
        scanf("%i", &entrar);

        int cliente = -1;
        for(i = 0; i < 5; i++) {
            if(NumConta[i] == entrar){
                cliente = i;
                break;
            }
        }
        int tentativas = 3;
        if(cliente == -1) {
            printf("Conta nao encontrada. Encerrando sessão.\n");
        } else {
            printf("Iniciando secao do cliente %s (Conta: %i)\n", nome[cliente], NumConta[cliente]);
            do {
                printf("digite a senha:\n");
                scanf("%i", &entrar);
                int senha1 = senhaUsu[cliente];
                if(entrar == senha1) {
                    printf("Senha correta\n");
                    verdadeiro = 1;
                    break;
                } else {
                    tentativas = tentativas - 1;
                    printf("Senha incorreta\n");
                    if(tentativas == 0) {
                        break;
                    }
                }
            } while(tentativas != 0);
        }

        if(verdadeiro == 1) {
            int funcionalidade;

            printf("TABELA DE FUNCIONALIDADES\n");
            printf("1 para SACAR \n");
            printf("2 para DEPOSITAR \n");
            printf("3 para EMPRESTAR\n");
            printf(" \n");
            printf("Digite a operacao que voce deseja realizar: ");
            scanf("%i", &funcionalidade);

            if(funcionalidade == 1) {
                printf("\n");
                printf("OPERACAO DE SAQUE\n");
                do {
                    printf("Digite sua senha novamente:\n");
                    scanf("%i", &entrar);
                    if(entrar == senhaUsu[cliente]) {
                        printf("Senha Correta\n");
                        break;
                    } else {
                        printf("SENHA INCORRETA\n");
                        tentativas = tentativas - 1;
                    }
                } while(tentativas !=0);

                if(tentativas != 0) {
                    int saque;
                    printf("\n");
                    printf("SALDO ATUAL: %.2f\n", saldo[cliente]);
                    printf("Qual valor voce deseja SACAR: \n");
                    scanf("%i", &saque);
                    float saldoAntigo = saldo[cliente];
                    saldo[cliente] = saldo[cliente] - saque;
                    printf("Voce SACOU %i reais\n", saque);
                    printf("****************************************\n");
                    printf("EXTRATO\n");
                    printf("SALDO ANTIGO: %.2f\n", saldoAntigo);
                    printf("SALDO NOVO: %.2f\n", saldo[cliente]);
                    printf("ID: %i\n", id[cliente]);
                    printf("CPF: %i\n", cpf[cliente]);
                    printf("NOME: %i\n", nome[cliente]);
                }
            }

            if(funcionalidade == 2) {
                printf("\n");
                printf("OPERACAO DE DEPOSITO\n");
                do {
                    printf("Digite sua senha novamente:\n");
                    scanf("%i", &entrar);
                    if(entrar == senhaUsu[cliente]) {
                        printf("Senha Correta\n");
                        break;
                    } else {
                        printf("SENHA INCORRETA\n");
                        tentativas = tentativas - 1;
                    }
                } while(tentativas !=0);

                if(tentativas != 0) {
                    int saque;
                    printf("\n");
                    printf("SALDO ATUAL: %.2f\n", saldo[cliente]);
                    printf("Qual valor voce deseja DEPOSITAR: \n");
                    scanf("%i", &saque);
                    float saldoAntigo = saldo[cliente];
                    saldo[cliente] = saldo[cliente] + saque;
                    printf("Voce DEPOSITOU %i reais\n", saque);
                    printf("****************************************\n");
                    printf("EXTRATO\n");
                    printf("SALDO ANTIGO: %.2f\n", saldoAntigo);
                    printf("SALDO NOVO: %.2f\n", saldo[cliente]);
                    printf("ID: %i\n", id[cliente]);
                    printf("CPF: %i\n", cpf[cliente]);
                    printf("NOME: %i\n", nome[cliente]);
                }
            }

            if(funcionalidade == 3) {
                printf("\n");
                printf("OPERACAO DE EMPRESTIMO\n");
                do {
                    printf("Digite sua senha novamente:\n");
                    scanf("%i", &entrar);
                    if(entrar == senhaUsu[cliente]) {
                        printf("Senha Correta\n");
                        break;
                    } else {
                        printf("SENHA INCORRETA\n");
                        tentativas = tentativas - 1;
                    }
                } while(tentativas !=0);

                if(tentativas != 0) {
                    float emprestar; // Tava como int, mas valor de dinheiro é melhor float
                    float teto;
                    printf("\n");
                    printf("OPERACAO DE EMPRESTIMO\n");
                    printf("SALDO ATUAL: %.2f\n", saldo[cliente]);

                    printf("Qual valor voce deseja emprestar:\n");
                    scanf("%f", &emprestar);

                    float saldoAntigo = saldo[cliente];
                    teto = saldo[cliente] * 10;

                    if(emprestar > teto) {
                        printf("Valor ELEVADO DEMAIS para o emprestimo\n");
                    } else {
                        int parcela, autorizar;
                        printf("VALOR DO EMPRESTIMO APROVADO\n");
                        printf("Em quantas parcelas voce realizara o pagamento:\n");
                        scanf("%d", &parcela);

                        if(parcela <= 0) {
                            printf("Operacao CANCELADA, ESPERTINHO!\n");
                        } else {
                            float juros = (emprestar * 1.5f) / parcela;
                            printf("Serao %d parcelas de %.2f reais\n", parcela, juros);

                            printf("Posso autorizar o emprestimo?\n");
                            printf("Digite 0 para NAO\n");
                            printf("Digite 1 para SIM\n");
                            scanf("%d", &autorizar);

                            if(autorizar == 1) {
                                printf("Emprestimo APROVADO\n");
                                saldo[cliente] = saldo[cliente] + emprestar;
                                printf("****************************************\n");
                                printf("EXTRATO\n");
                                printf("SALDO ANTIGO: %.2f\n", saldoAntigo);
                                printf("SALDO NOVO: %.2f\n", saldo[cliente]);
                                printf("ID: %i\n", id[cliente]);
                                printf("CPF: %i\n", cpf[cliente]);
                                printf("NOME: %s\n", nome[cliente]); // Corrigido para string
                            } else {
                                printf("Emprestimo CANCELADO pelo cliente.\n");
                            }
                        }
                    }
                }

            }

        }
    }
}







