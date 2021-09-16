/*
But: D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire. Entrez -1 � la valeur des ventes pour quitter le programme.
Nom: Karim Dion K.
Date: 2021-09-15
*/

//cette ligne me permet d'utiliser les commandes d'input et de output du CMD.
#include <iostream>
//cette ligne me permet d'utiliser les commandes d'input et d'output sans que j'ai � �crire std:: devant.
using namespace std;

//main est la fonction principale du programme, la premi�re chose qui se lance au lancement.
void main()
{
   // j'utilise une commande ici pour que je puisse utiliser des accents dans mes mots et qu'ils s'affichent normalement.
   setlocale(LC_ALL, "");

   //d�claration des constantes
   const double $semaine = 250;
   const double $vente = 0.075;
   
   //d�claration des variables par les utilisateurs
   double $brut = 0;
   double nbsemaines = 0;

   //d�claration des variables de calculs
   double moneyTotal = 0;
   double moneySemaine = 0;
   double moneyPourcentage = 0;

   //je demande � l'utilisateur de me donner le montant brut de vente qu'il a fait en combien de semaine.
   cout << "\n veuillez entrer combien vous avez vendu brut ?";
   cin >> $brut;

   cout << "veuillez entrer combien de semaines vous avez travaillez: ";
   cin >> nbsemaines;
   
   // tant que $brut n'est pas �gal � -1 fait ce qui est � l'int�rieur
   while ($brut != -1)
   {  
      //ici je v�rifie que les nombres soit r�alistiques (au dessus de zero)
      if ($brut > 0 && nbsemaines >= 0 )
      {
         //calcul du montant brut multiplier par 7.5 %
         moneyPourcentage = $brut * $vente;
         // calcul du montant de 250 $ par semaines
         moneySemaine = $semaine * nbsemaines;
         //montant du pourcentage + le 250$/semaines
         moneyTotal = moneyPourcentage + moneySemaine;

         //je dis � l'utilisateur combien d'argent il a gagner
         cout << "vous recevrez dans votre prochain cheque " << moneyPourcentage << "$ gr�ve � votre pourcentage de vente et " << moneySemaine << " $ puisque vous avez travaillez " << nbsemaines << "semaines. Pour un total de " << moneyTotal << "$ \n \n \n \n \n";
      }
      else
      {
         cout << "veuillez entrer des chiffres au dessus de zero. \n";
      }
      
      //je reccomence le programme en demandant des variables � l'utiliateurs
      
      
      cout << "\n veuillez entrer combien vous avez vendu brut ?";
      cin >> $brut;

      cout << "veuillez entrer combien de semaines vous avez travaillez: ";
      cin >> nbsemaines;

   }
   //cette ligne me permets de mettre le CMD en pause avant qu'il ne s'arr�te pour que je puisse lire les derni�res lignes envoy�es par le programme
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