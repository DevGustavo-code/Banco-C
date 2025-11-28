#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

// DECLARAÇÕES
int iniciar();
int validarUsu1();
int funcionalidadesADM();
int alterarSaldo();
int alterarId();
int alterarCpf();
int alterarNome();
int alterarConta();
int validarUsu2();
int sacar();
int depositar();
int emprestimo();
int concluir();
int funcionalidadesUSU();

// Funções de arquivo
void salvarDados();
void carregarDados();

// VARIÁVEIS GLOBAIS
const int codigo = 123;
int parametro, valida = 0, senha, entrar, i, verdadeiro, opcao = 4, funcionalidade, tentativas, usuarios, cliente;
float alterar;
int senhaUsu[5]  = {12, 13, 14, 15, 16};
char nome[5][50] = {"Gustavo", "Isaque", "JoseIgor", "Nauak", "Felipe"};
float saldo[5]   = {100.3, 350.5, 604.98, 106.3, 5000.3};
int id[5]        = {0, 1, 2, 3, 4};
int cpf[5]       = {256, 152, 604, 102, 258};
int NumConta[5]  = {37, 38, 39, 40, 41};

int main() {
    carregarDados();
    iniciar();
}

// ----------------------------------------------------------
// SISTEMA DE ARQUIVOS
// ----------------------------------------------------------

void salvarDados() {
    FILE *f = fopen("clientes.txt", "w");
    if(!f) {
        printf("Erro ao salvar arquivo!\n");
        return;
    }

    for(int i = 0; i < 5; i++) {
        fprintf(f, "%s;%d;%.2f;%d;%d;%d\n",
            nome[i],
            cpf[i],
            saldo[i],
            id[i],
            NumConta[i],
            senhaUsu[i]
        );
    }

    fclose(f);
}

void carregarDados() {
    FILE *f = fopen("clientes.txt", "r");
    if(!f) {
        printf("Arquivo clientes.txt nao encontrado. Usando dados padrao.\n");
        return;
    }

    for(int i = 0; i < 5; i++) {
        fscanf(f, "%49[^;];%d;%f;%d;%d;%d\n",
            nome[i],
            &cpf[i],
            &saldo[i],
            &id[i],
            &NumConta[i],
            &senhaUsu[i]
        );
    }

    fclose(f);
}

// ----------------------------------------------------------
// SISTEMA PRINCIPAL
// ----------------------------------------------------------

int iniciar() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    printf("=============================\n");
    printf("=---------AGRO BANCO--------=\n");
    printf("=--O BANCO DOS BRASILEIROS--=\n");
    printf("=============================\n");

    while(1) {
        printf("Digite 1 para administrador\n");
        printf("Digite 2 para cliente\n");
        scanf("%i", &parametro);

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
        if(parametro == 1) {
            validarUsu1();
            break;
        } else if(parametro == 2) {
            validarUsu2();
            break;
        } else {
            printf("Valor invalido!\n");
        }
    }
}

// ----------------------------------------------------------
// ADMINISTRADOR
// ----------------------------------------------------------

int validarUsu1() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    do {
        printf("Area do administrador\nSenha: ");
        scanf("%i", &senha);

        if(senha == codigo) {
            printf("Acesso liberado!\n");
            funcionalidadesADM();
            break;
        } else {
            printf("Senha incorreta!\n");
            opcao--;
            if(opcao == 1) {
                printf("Acesso bloqueado!\n");
            }
        }
    } while(opcao > 1);
}

int funcionalidadesADM() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    printf("\nLISTA DE CLIENTES\n");
    for(int i=0;i<5;i++){
        printf("ID=%i Nome=%s Saldo=%.2f CPF=%i Conta=%i\n",
            id[i], nome[i], saldo[i], cpf[i], NumConta[i]
        );
    }

    printf("\n1 Alterar SALDO\n");
    printf("2 Alterar ID\n");
    printf("3 Alterar CPF\n");
    printf("4 Alterar Nome\n");
    printf("5 Alterar Numero Conta\n");

    scanf("%i", &funcionalidade);

    if(funcionalidade == 1) alterarSaldo();
    else if(funcionalidade == 2) alterarId();
    else if(funcionalidade == 3) alterarCpf();
    else if(funcionalidade == 4) alterarNome();
    else if(funcionalidade == 5) alterarConta();
}

int alterarSaldo() {
    printf("Digite o ID:\n");
    scanf("%i", &usuarios);

    printf("Novo saldo:\n");
    scanf("%f", &alterar);

    saldo[usuarios] = alterar;
    salvarDados();

    concluir();
}

int alterarId() {
    printf("Digite ID:\n");
    scanf("%i", &usuarios);

    printf("Novo ID:\n");
    scanf("%f", &alterar);

    id[usuarios] = alterar;
    salvarDados();

    concluir();
}

int alterarCpf() {
    printf("Digite ID:\n");
    scanf("%i", &usuarios);

    printf("Novo CPF:\n");
    scanf("%f", &alterar);

    cpf[usuarios] = alterar;
    salvarDados();

    concluir();
}

int alterarNome() {
    char novo[50];

    printf("Digite ID:\n");
    scanf("%i", &usuarios);

    printf("Novo nome:\n");
    scanf("%s", novo);

    strcpy(nome[usuarios], novo);

    salvarDados();
    concluir();
}

int alterarConta() {
    printf("Digite ID:\n");
    scanf("%i", &usuarios);

    printf("Novo numero de conta:\n");
    scanf("%f", &alterar);

    NumConta[usuarios] = alterar;

    salvarDados();
    concluir();
}

// ----------------------------------------------------------
// CLIENTE
// ----------------------------------------------------------

int validarUsu2() {
    printf("Numero da conta:\n");
    scanf("%i", &entrar);

    cliente = -1;
    for(i = 0; i < 5; i++){
        if(NumConta[i] == entrar) cliente = i;
    }

    if(cliente == -1){
        printf("Conta inexistente.\n");
        validarUsu2();
    }

    tentativas = 3;

    while(tentativas > 0){
        printf("Senha:\n");
        scanf("%i", &entrar);

        if(entrar == senhaUsu[cliente]){
            funcionalidadesUSU();
            break;
        } else {
            tentativas--;
        }
    }
}

int funcionalidadesUSU() {
    int op;
    printf("\n1 Sacar\n2 Depositar\n3 Emprestimo\n");
    scanf("%i", &op);

    if(op == 1) sacar();
    else if(op == 2) depositar();
    else if(op == 3) emprestimo();
}

int sacar() {
    int senha2;
    float valor;

    printf("Senha:\n");
    scanf("%i", &senha2);

    if(senha2 != senhaUsu[cliente]) return concluir();

    printf("Saldo atual: %.2f\nValor do saque:\n", saldo[cliente]);
    scanf("%f", &valor);

    saldo[cliente] -= valor;

    salvarDados();
    concluir();
}

int depositar() {
    int senha2;
    float valor;

    printf("Senha:\n");
    scanf("%i", &senha2);

    if(senha2 != senhaUsu[cliente]) return concluir();

    printf("Saldo atual: %.2f\nValor do deposito:\n", saldo[cliente]);
    scanf("%f", &valor);

    saldo[cliente] += valor;

    salvarDados();
    concluir();
}

int emprestimo() {
    int senha2;
    float valor;

    printf("Senha:\n");
    scanf("%i", &senha2);

    if(senha2 != senhaUsu[cliente]) return concluir();

    printf("Valor do emprestimo:\n");
    scanf("%f", &valor);

    saldo[cliente] += valor;

    salvarDados();
    concluir();
}

int concluir() {
    int ret;
    printf("Operacao concluida.\n1 Nova operacao\n0 Sair\n");
    scanf("%i", &ret);

    if(ret == 1) main();
    return 0;
}
