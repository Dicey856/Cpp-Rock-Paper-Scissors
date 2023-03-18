#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main()
{
     
    int choice;
    
    srand(time(nullptr));

    
    int enemy = rand() % 3 + 1;
    
    cout << "Please select your weapon of choice: \n" << "1-Rock \n" << "2-Paper \n" << "3-Scissors \n";
    cin >> choice;

    switch (enemy)
    {
        //rock
        case 1:
           if (choice == 1)
           {
               cout << "You picked Rock! \n" <<"Enemy picked Rock! \n" << "It's a draw!";
           }
           else if (choice == 2)
           {
              cout << "You picked Paper! \n" <<"Enemy picked Rock! \n" << "You win!";
           }
           else if (choice == 3)
           {
              cout << "You picked Scissors \n" <<"Enemy picked Rock! \n" << "You lose!";
           }
        break;
        //paper
        case 2:
           if (choice == 1)
           {
               cout << "You picked Rock! \n" <<"Enemy picked Paper! \n" << "You lose!";
           }
           else if (choice == 2)
           {
              cout << "You picked Paper! \n" <<"Enemy picked Paper! \n" << "It's a draw!";
           }
           else if (choice == 3)
           {
              cout << "You picked Scissors! \n" <<"Enemy picked Paper! \n" << "You win!";
           }
        break;

        //scissors
        case 3:
           if (choice == 1)
           {
               cout << "You picked Rock! \n" <<"Enemy picked Scissors! \n" << "You win!";
           }
           else if (choice == 2)
           {
              cout << "You picked Paper! \n" <<"Enemy picked Scissors! \n" << "You lose!";
           }
           else if (choice == 3)
           {
              cout << "You picked Scissors! \n" <<"Enemy picked Scissors! \n" << "It's a draw!";
           }
        break;
    }



    return 0;
}