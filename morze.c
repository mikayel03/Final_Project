#include <stdio.h>
#include<string.h>

const char characters[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', };



const char *morse[] = {"/", ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---", "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-", "...-",".--","-..-","-.--","--..", ".----","..---","...--","....-", ".....", "-....","--...","---..","----.","-----"};


void encodeMorze(unsigned char *letters) {    // it is a fuction for encoding the text, which is written in English, into Morse code

	for (int i =0; letters[i]!=0; i++) {  // this loop will run of the characters of variable iniput_1. In our case over the word "strange"
	
		for (int j =0; characters[j]!=0; j++){   // this nested looop will run over all of the characters defined in the array called characters
		
			if (letters[i] == characters[j] ) {   // this if statement will figure out whether the written characters corresdpond with the elemennts from the array called characters
				printf("%s ", morse[j]);     // then the corresponding element from the array called mosrse will be printed
			}		
		}
	}
}



void decodeMorze(char *dot_string) {    // It is a fuction for decoding the text, which is written with morse code, into English letters
	char d[] = " ";                 // Here is defined an array which has only one element (space).  
	char *token = strtok( dot_string, d);  // In this part our system takes the variable input_2 and separates it into different parts, called tokens, when sees a space
	while (token != NULL){                // this part shows that this function will run untill there is no token to take
		for (int i = 0; i < 37; i++) {  // this loop wil run over the element defined in the array called morse
			if ((strcmp(token, morse[i])) == 0) {  // this if statement will figure out whether the written Morse letters correspond with the separated token 
				printf("%c", characters[i]); // Then, the correspondig character from the array called characters will be printed
			}
		}
		token = strtok(NULL, d);
		
	}	
}



	
            
int main () {
     	unsigned char input_1[]= "strange" ;
	encodeMorze(input_1);

	 char input_2[]= ".- -- -.-" ;
	decodeMorze(input_2);
	
return 0;

}
