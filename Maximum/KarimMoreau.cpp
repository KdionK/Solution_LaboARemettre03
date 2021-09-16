//But:ce programme donne la possibilité à l’utilisateur de deviner le nombre contenu dans random.L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande unnombre.
//Créateur: Karim Dion K.
//Date: 2021-09-15

#include <iostream>
using namespace std;

int main()
{

   // j'utilise une commande ici pour que je puisse utiliser des accents dans mes mots et qu'ils s'affichent normalement.
   setlocale(LC_ALL, "");
   const int nombreDeValeurs = 10;
   //déclaration de mes variables entrables par l'utilisateur
   int nombre ;
   
   //déclaration de mes variables
   int compteur = 0;
   int max;
   
   //Je demande à l'utilisateurs  dix nombres et j'initialise celui-ci comme le maximum
   cout << "entrez dix nombres et nous allons vous dire lequel est le plus haut.\n ";
   cin >> max;
   // j'ajoute 1 au compteur 
   compteur += 1;
   //Je lui dis ensuite quel nombre est présentement le maximum et combien de nombres ils peuvent encore rentrer.
   cout << "le nombre maximum est présentement " << max << "\n" << "Il vous reste " << (compteur - nombreDeValeurs) * -1 << " nombres a rentrés \n";

   //tant que le compteur n'est pas le nombre de valeurs écrivable par l'utilisateur, éxécuter le code en boucle.
   while (compteur != nombreDeValeurs)
   {
      //j'invite l'utilisateur à entrer un nouveau nombre
      cout << "entrez un nombre: ";
      cin >> nombre;
      
      // j'ajoute 1 au compteur 
      compteur += 1;
      
      //si le nombre est plus grand que le max, le nombre devient le max
      if (nombre > max)
      {
         max = nombre;
      }
      //Je lui dis ensuite quel nombre est présentement le maximum et combien de nombres ils peuvent encore rentrer.
      cout << "le nombre maximum est présentement " << max << "\n" << "Il vous reste " << (compteur - nombreDeValeurs) * -1 << " nombres a rentrés \n";
   }

   //cette ligne me permets de mettre le CMD en pause avant qu'il ne s'arrête pour que je puisse lire les dernières lignes envoyées par le programme
   system("pause");

   //je return un chiffre seulement pour que la fonction fonctionne parce que dans
   return 0;
}

/*
xxx   essai1   essai2   essai3   
nb1   5           -1    200      
nb2   10          -2    300
nb3   5           -1    10
nb4   7           -10   100
nb5   12          10    9000
nb6   25          50    9001
nb7   500         -20   2  
nb8   600         100   2  
nb9   -25         50    4
nb10  41          150   9
max   600         150   9001
*/