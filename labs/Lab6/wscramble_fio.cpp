// wscramble.cpp
// Word Scramble guessing game
// Illustrates string library functions, character arrays,
//  arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>
#include <stdlib.h>

using namespace std;

// Prototype
void permute(char items[], int len);

// Define an array of strings (since a string is just a char array)
//  and since string are just char *'s, we really want an array of char *'s

int main(int argc, char *argv[])
{
  srand(time(0));
  char guess[80];
	
	//check enough command line arguments were passed
	if (argc < 2)	
	{
		cout << "Not enough command line arguments were passed" << endl;
	}

	//open file given from command line argument
	ifstream file(argv[1]);

	if (!file)
	{
		cout << "There was a problem reading the file." << endl;
		return 0;
	}
	
	int Num;
	
	file >> Num;

	if (!Num)
	{
		cout << "There was a problem reading the integer in the file." << endl;
		return 0;
	}
	
	//create dynamic array for wordBank
	char *wordBank[Num];

	//array maxed at 40 character for input
	char NewWord[41];

	//move words from file into wordbank
	for (int i = 0; i < Num; i++)
	{ 
		file >> NewWord;
		int len = strlen (NewWord);
		wordBank[i] = new char[len+1];
		strcpy (wordBank[i], NewWord);
	}
	


  bool wordGuessed = false;
  int numTurns = 10;

  // Pick a random word from the wordBank
  int target = rand() % Num;
  int targetLen = strlen(wordBank[target]);

  // More initialization code
  char* word = new char[targetLen+1];
  strcpy(word, wordBank[target]);
  permute(word, targetLen);
  
  // An individual game continues until a word
  //  is guessed correctly or 10 turns have elapsed
  while ( !wordGuessed && numTurns > 0 ){
    cout << "\nCurrent word:  " << word << endl;
    cin >> guess;
    wordGuessed = (strncmp(guess, wordBank[target], targetLen+1) == 0);
    numTurns--;
  }
  if(wordGuessed){
    cout << "You win!" << endl;
  }
  else {
    cout << "Too many turns...You lose!" << endl;
  }
	for(int i=0; i < Num; i++)
	{
		delete [] wordBank[i];
	}

	//close file
	file.close();

	delete [] word;
  return 0;
}

// Scramble the letters
void permute(char items[], int len)
{
  for(int i=len-1; i > 0; --i){
    int r =  rand() % i;
    int temp = items[i];
    items[i] = items[r];
    items[r] = temp;
	}

return;
}

