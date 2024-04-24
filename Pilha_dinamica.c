#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int data;
    struct no* next;
} no;

no* criarno(int data) {
    no* novono = (no*)malloc(sizeof(no));
    if (novono == NULL) {
        printf("Erro: Falha ao alocar memória para o novo nó.\n");
        exit(EXIT_FAILURE);
    }
    novono->data = data;
    novono->next = NULL;
    return novono;
}

void push(no** top, int data) {
    no* novono = criarno(data);
    novono->next = *top;
    *top = novono;
    printf("%d empilhado com sucesso.\n", data);
}

int pop(no** top) {
    if (*top == NULL) {
        printf("Erro: Pilha vazia.\n");
        exit(EXIT_FAILURE);
    }
    no* temp = *top;
    int popped = temp->data;
    *top = temp->next;
    free(temp);
    return popped;
}

int isEmpty(no* top) {
    return (top == NULL);
}

void printStack(no* top) {
    if (isEmpty(top)) {
        printf("A pilha está vazia.\n");
        return;
    }
    printf("Elementos na pilha:\n");
    while (top != NULL) {
        printf("%d\n", top->data);
        top = top->next;
    }
}

int main() {
    no* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    printStack(top);
    printf("Elemento desempilhado: %d\n", pop(&top));
    printStack(top);

    return 0;
}
