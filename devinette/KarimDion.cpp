//But:ce programme donne la possibilité à l’utilisateur de deviner le nombre contenu dans random.L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande unnombre.
//Créateur: Karim Dion K.
//Date: 2021-09-15

#include <iostream>
#include <time.h>
using namespace std;

int main()
{

   // j'utilise une commande ici pour que je puisse utiliser des accents dans mes mots et qu'ils s'affichent normalement.
   setlocale(LC_ALL, "");

   //déclaration de mes variables
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   int tries = 5;

   //déclaration de mes variables entrables par l'utilisateur
   int devine = 102;

   //déclaration de mes constantes

   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random
   //Je demande à l'utilisateur de deviner un nombre 
   cout << "devine un nombre entre un et cent, tu as " << tries << " essais!";

   //Tant que tries est au dessus de 0, le code va s'éxécuter
   while (tries > 0 )
   {
      // ici l'utilisateur éssaie de deviner quel nombre est dans random..
      cin >> devine;

      //Je retire un essaie à chaque fois qu'il devine un nombre.
      tries -= 1;

      // si le chiffre deviner est au dessus de random et les essais ne sont pas à zero, ça affiche ce message
      if (devine > random && tries != 0)
      {
         //le message affiché
         cout << "faux ! Il vous reste " << tries << " essais, essayez plus bas ! ";
         
      }
      // si le chiffre deviner est en dessous de random et les essais ne sont pas à zero, ça affiche ce message
      else if (devine < random && tries != 0)
      {
         //le message affiché
         cout << "faux ! Il vous reste " << tries << " essais, essayez plus haut ! ";
         
      }
      //S'ils ont raisons je les félicite et enlève le reste de leurs essais.
      else if (devine == random)
      {
         cout << "FÉLICITATIONS, vous l'avez eu! \n";
         tries -= tries;
      }
      //sinon ils ne l'ont pas deviné et je les frustrent en ne leur disant pas quel chiffre c'était haha
      else
      {
         cout << "Vous l'aurez la prochaine fois! \n";
      }
   }
   
   
   //cette ligne me permets de mettre le CMD en pause avant qu'il ne s'arrête pour que je puisse lire les dernières lignes envoyées par le programme
   system("pause");

   //je return un chiffre seulement pour que la fonction fonctionne parce que dans
   return 0;



}


//plans de tests
/*
Je suis pas vraiment certain de comment faire ce plan de tests, je suis désoler, mais le code fonctionne ¯\_(ツ)_/¯



*/