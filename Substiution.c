#include<stdio.h>
void EncS(char message[], char key[]); //function prototype, EncS (Encrypt Substitution)
int main()
{
    char key[] = "ZXCVBNMASDFGHJKLQWERTYUIOP"; //inputted new 'Alphabet' to be used
    char message[] = "hey dumbo"; //inputted message to be converted using new 'Alphabet'
    EncS(message, key); 
} 
/*The function EncS encrypts a message using a substitution cipher
The char input message is the inputted message for encryption
The char input key is the new 'alphabet' that the encryption uses such that each letter of alphabet is changed to the corresponding letter in the key
This means that if the first letter of the key is Z, every A will be encrypted into a Z
This function has a return value of void as it prints the encrypted message instead of returning it
This function will not encrypt symbols or numbers and only encrypts lower and upper case letters, and will also only produce upper case letter outputs
 */
void EncS(char message[], char key[])
{  
    printf("message was: %s\n", message); //prints original message for review
    int index; //intialised interger to be used as pointer through message array
    for(index = 0; message[index] != 0; index++) //for loop that cycles through each character until message[index] == 0 then stops
    {
        if(message[index] >= 97 && message[index] <= 122) //if loop that only works on lower case letter, which are within these two inequalities
        {
            message[index] = message[index] - 32; // -32 sets lower case letters into upper case letters
        }
    }
    for(index = 0; message[index] != 0; index++) //for loop to cycle through message again now that it is all upper case letters
    {   
        switch (message[index]) //switch case to change the letters to the alphabet of the key, 
        {   
            case 65: //A=65, this case occurs if the message[index] is A and turns this A into the first letter in the new key alphabet
            message[index] = key[0]; //assigns the letter A to the first character in the key
            break; //breaks out of the switch and loops back through the for loop to the next character
            case 66: //B=66, this case occurs if message[index] is B and turns the B into the second character in the new key
            message[index] = key[1];
            break;
            case 67: 
            message[index] = key[2];
            break;
            case 68:
            message[index] = key[3];
            break;
            case 69: 
            message[index] = key[4];
            break;
            case 70:
            message[index] = key[5];
            break;
            case 71: 
            message[index] = key[6];
            break;
            case 72:
            message[index] = key[7];
            break;
            case 73: 
            message[index] = key[8];
            break;
            case 74:
            message[index] = key[9];
            break;
            case 75:
            message[index] = key[10];
            break;
            case 76:
            message[index] = key[11];
            break;
            case 77: 
            message[index] = key[12];
            break;
            case 78:
            message[index] = key[13];
            break;
            case 79: 
            message[index] = key[14];
            break;
            case 80:
            message[index] = key[15];
            break;
            case 81: 
            message[index] = key[16];
            break;
            case 82:
            message[index] = key[17];
            break;
            case 83: 
            message[index] = key[18];
            break;
            case 84:
            message[index] = key[19];
            break;
            case 85:
            message[index] = key[20];
            break;
            case 86: 
            message[index] = key[21];
            break;
            case 87:
            message[index] = key[22];
            break;
            case 88: 
            message[index] = key[23];
            break;
            case 89:
            message[index] = key[24];
            break;
            case 90:
            message[index] = key[25];
            break;    
        }
   
    }         
    printf("Your Encrypted message is: %s\n", message); //prints the new encrypted message
}
