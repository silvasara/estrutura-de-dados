#define LIMPA_TELA system("clear")

typedef struct tree{
    int value;
    struct tree *right;
    struct tree *left;
}tree;

FILE* openArchive(char *);
void readNumbers(FILE *, int *);
tree* createNewNode(int);
tree* insert(tree *, tree *);
tree* loadTreeFromFile(char *);
void showTree(tree *);
int isFull(tree *);
void searchValue(tree *, int);
int getHeight(tree *);
void removeValue(tree *, int);
void printInOrder(tree *);
void printPreOrder(tree *);
void printPostOrder(tree *);
void balanceTree(tree *);
void menu();
