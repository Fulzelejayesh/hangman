#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_TRIES 6


int main() {
	
    char words[5][20] = {"pikachu", "charizard", "blastoise", "balasaur", "lukariyo"};
    srand(time(NULL)); 
    int wordIndex = rand() % 5;
    char *secretWord = words[wordIndex];
    
    int wordLength = strlen(secretWord);
    char guessword[wordLength + 1];
    int tries = 0;
    int correctGuesses = 0;
    char guess;
    int alreadyGuessed;
int i,found; 

for(i=0; i< wordLength; i++ ){
	guessword[i] = '_' ; 
}
guessword[i] = '\0'; 


while(tries < MAX_TRIES && correctGuesses <wordLength){
	printf("word: %s\n",guessword); 
	printf("tries left: %d\n",MAX_TRIES-tries); 
	printf("enter a letter: ") ;
	scanf(" %c",&guess) ; 
	found = 0 ;
	alreadyGuessed = 0 ;
	for(i = 0 ; i < wordLength ; i++) {
		if(guessword[i]==guess){
			printf("you already guess that number\n") ;
			alreadyGuessed = 1 ;
			break ;  
		}
		if(secretWord[i]==guess) {
			guessword[i] = guess ; 
			 correctGuesses++;
			 found = 1 ; 
		}
}
if(!found && !alreadyGuessed){
	printf("wrong\n") ; 
	tries++ ; 

 }
}
	if(correctGuesses == wordLength) {
		printf("you guess that right in %d tries and you word is %s",tries,secretWord); 
	}else {
        printf("\nGame Over! You've been hanged. The word was: %s\n", secretWord);
    }

    return 0;
	
}
	

	

	
		
	
		

