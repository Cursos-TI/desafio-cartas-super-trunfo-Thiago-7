#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta) {
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o código da carta (por exemplo, A01): ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", carta->nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    printf("\nCarta cadastrada com sucesso!\n\n");
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta) {
    printf("Informações da Carta:\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    struct Carta cartas[32];
    int i, num_cartas = 0;

    printf("Cadastro de cartas para o jogo Super Trunfo - Países\n");

    // Cadastro das cartas
    for(i = 0; i < 32; i++) {
        printf("Cadastro da carta %d de 32\n", i + 1);
        cadastrarCarta(&cartas[i]);
        num_cartas++;

        char opcao;
        printf("Deseja cadastrar outra carta? (s/n): ");
        scanf(" %c", &opcao);

        if(opcao == 'n' || opcao == 'N') {
            break;
        }
    }

    // Exibição das cartas cadastradas
    printf("\nExibindo todas as cartas cadastradas:\n");
    for(i = 0; i < num_cartas; i++) {
        exibirCarta(cartas[i]);
        printf("\n");
    }

    return 0;
}
