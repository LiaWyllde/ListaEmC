
struct Node {
    int data;
    struct Node* next;
};

//Adicionar um nó no início da lista
void addNode(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    addNode(&head, 3);
    addNode(&head, 2);
    addNode(&head, 1);

    // Imprimindo a lista
    printList(head);
    return 0;
}