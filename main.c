#include <stdio.h>

int main()
{
    printf("Creation du fichier 'chat'.\n\n");
    FILE* warka;
    warka = fopen("chat.txt", "w");

    if( warka != NULL) {
        char* paragraph = "bonjour, je suis un paragraph dans un fichier nommé chat.txt";
        fprintf(warka , paragraph);

        fseek(warka,0, SEEK_END);
        int x = ftell(warka);
        printf("Number des character dans le paragraph %d \n", x);
        rename("chat.txt", "chat2delete.txt");
        remove("chat2delete.txt");

        char* recherche = "suis";
        int fois = fscanf(warka, recherche);
        printf("l'occurance de mot %s est %d fois.\n", recherche, fois);

        fclose(warka);
    }
    return 0;
}
