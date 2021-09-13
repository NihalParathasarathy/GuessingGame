#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Nihal Parthasrathy
//9/13/2021
//This code randomly generates a number and then has you guess it saying higher or lower

using namespace std;

int main()
{
  //Intilize boolean
  bool stillPlaying = true;
  
  while (stillPlaying == true) {//If still playing is true play the game
    //Initilizes Varubles needed
    int input = 0;
    int numGuess = 0;
    char option = ' ';

    //Initilizes the random number genrater and makes a random number
    srand(time(NULL));
    int var = (rand() % 100);
    
    cout << "Enter a number between 1 and 100" << endl;
    cin >> input;
    numGuess++;

    //Looks and sees if the number is correct
    while (input != var) {
      if (input < var) {//If input is less
	cout << "Higher!" << endl;
      }
      if (input > var) {//If input is higher
	cout << "Lower!" << endl;
      }
      cin >> input;

      //Counts the guesses
      numGuess++;
    }
    if (var == input) {//If the input is the same
      cout << "That is correct the answer is " << var << endl;
      cout << "You took " << numGuess << " guesses" << endl;
      cout << "Would you like to play again say y or n" << endl;
      cin >> option;
      
      if (option == 'y') {//If the option is yes return true
	stillPlaying = true;
      }
      if (option == 'n') {//If the option is no return false
	stillPlaying = false;
      }
    }
  }
  return 0;
}
