#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/






// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/


/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/


/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/

/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/

//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon


//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


#define RAND_MAX_TAB 9
#define MAX_SIZE_TAB 9

int rand(void);
void srand(unsigned int seed);
//creation de la variable tableauJoueur 
//creation d'une fonction qui prend la variable solution, et la variable tableauJoueur 
int grilleJouable(int solution, int tableauJoueur);
    int solution;
    int i = 0;
    int j = 0;
    for(j=0;j<9; ++j){
    {
    for(i=0; i<9; ++i){
    int grilleJouable([j][i]= RAND_MAX_TAB[i][j]);
        return(grilleJouable);
    }
    }
    }

//creation d'une fonction saisir qui demande au joueur de saisir 3 informations

int items[MAX_SIZE_TAB]; 
int a = 0;
int b = 0;
// le joueur choisi quel chiffre il veut jouer et où il veut le placer sur les coordonées (i,j)
    int i;
    int j;
    int v;
int saisir(int grilleJouable){
    printf("Veuillez saisir l'indice i qui sera placé sur la grille :");
    scanf("%d",&items[a],i);
    printf("Veuillez saisir l'indice j qui sera placé sur la grille :");
    scanf("%d", &items[a],j);
    printf("Veuillez saisir le chiffre v qui sera placé sur la grille :");
    scanf("%d", &items[a],v);
    a++;
    for (int j = 0; b < a; b++){
    {printf("| %d | %d | %d |\n", &items[a].i, &items[a].j, &items[a].v);
       return &grilleJouable;
}
}
}
int main(){
    // Ne pas toucher le code entre les commentaires
     srand( time( NULL ) );

    int i, j, k;
    int solution[9][9];
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", solution[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");  
    //toucher le code entre les commentaires 
    printf("%d",rand() % 2);


//fonction pour verifier les règles du sudoku
int tableauJoueur ();{
    //On verifie les lignes et les colonnes sur lesquelles se trouvent la nouvelle valeur)
int verifierLigneColonne(int grilleJouable[9][9], int i, int j, int v);
    for (int i = 0; i < 9; i++){
        if (&grilleJouable[i] == v || &grilleJouable[j] == v){ 
            return 0;
        }
    }
    //Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
    //et qui renvoie 1 si la région est correctement remplie, 0 sinon.
    int verifierRegion();
    //on definit nos deux indices 
    int k = (i / 3) * 3;
    int l = (j / 3) * 3;
    for (int i = k; i < k + 3; i++) {
        for (int j = l; j < l + 3; j++) {
            if (grilleJouable == v) {
//la région est correctement remplie
                return 1;
            }
        else{
//la région n'est pas correctement remplie
                return 0;
        }
        }
    }

//la fonction verifier grille permet de definir la condition de victoire
int verifierGrille();
    if (grilleJouable == &solution)
    printf("Vous avez gagné !");
    else{
        printf("Vous vous êtes trompé, veuillez réessayer !");
    }

    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}
}