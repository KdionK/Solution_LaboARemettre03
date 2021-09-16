/*
But: Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme.
Nom: Karim Dion K.
Date: 2021-09-15
*/

//cette ligne me permet d'utiliser les commandes d'input et de output du CMD.
#include <iostream>
//cette ligne me permet d'utiliser les commandes d'input et d'output sans que j'ai à écrire std:: devant.
using namespace std;

//main est la fonction principale du programme, la première chose qui se lance au lancement.
void main()
{
   // j'utilise une commande ici pour que je puisse utiliser des accents dans mes mots et qu'ils s'affichent normalement.
   setlocale(LC_ALL, "");

   //déclaration des constantes
   const double $semaine = 250;
   const double $vente = 0.075;
   
   //déclaration des variables par les utilisateurs
   double $brut = 0;
   double nbsemaines = 0;

   //déclaration des variables de calculs
   double moneyTotal = 0;
   double moneySemaine = 0;
   double moneyPourcentage = 0;

   //je demande à l'utilisateur de me donner le montant brut de vente qu'il a fait en combien de semaine.
   cout << "\n veuillez entrer combien vous avez vendu brut ?";
   cin >> $brut;

   cout << "veuillez entrer combien de semaines vous avez travaillez: ";
   cin >> nbsemaines;
   
   // tant que $brut n'est pas égal à -1 fait ce qui est à l'intérieur
   while ($brut != -1)
   {  
      //ici je vérifie que les nombres soit réalistiques (au dessus de zero)
      if ($brut > 0 && nbsemaines >= 0 )
      {
         //calcul du montant brut multiplier par 7.5 %
         moneyPourcentage = $brut * $vente;
         // calcul du montant de 250 $ par semaines
         moneySemaine = $semaine * nbsemaines;
         //montant du pourcentage + le 250$/semaines
         moneyTotal = moneyPourcentage + moneySemaine;

         //je dis à l'utilisateur combien d'argent il a gagner
         cout << "vous recevrez dans votre prochain cheque " << moneyPourcentage << "$ grâve à votre pourcentage de vente et " << moneySemaine << " $ puisque vous avez travaillez " << nbsemaines << "semaines. Pour un total de " << moneyTotal << "$ \n \n \n \n \n";
      }
      else
      {
         cout << "veuillez entrer des chiffres au dessus de zero. \n";
      }
      
      //je reccomence le programme en demandant des variables à l'utiliateurs
      
      
      cout << "\n veuillez entrer combien vous avez vendu brut ?";
      cin >> $brut;

      cout << "veuillez entrer combien de semaines vous avez travaillez: ";
      cin >> nbsemaines;

   }
   //cette ligne me permets de mettre le CMD en pause avant qu'il ne s'arrête pour que je puisse lire les dernières lignes envoyées par le programme
   system("pause");
}

/*plan de tests
$brut    nbsemaines  moneyTotal
5000     2           875 $
10000    8           2750 $
-12      100000      veuillez entrer des chiffres au dessus de zero.
10000    -12         veuillez entrer des chiffres au dessus de zero.
-12      -12         veuillez entrer des chiffres au dessus de zero.
10       5000        1.25e+06 $
*/