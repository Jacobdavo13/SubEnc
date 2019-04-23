#include<stdio.h>
char EncS(char message[], char key[]);
int main()
{
    //
    //char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM"; 
    char message[] = "hey dumbo";
    EncS(message, key);
} 
 
char EncS(char message[], char key[])
{
    
    printf("message was: %s\n", message);
    int index;
    for(index = 0; message[index] != 0; index++)
    {
        //
        if(message[index] >= 97 && message[index] <= 122)
        {
            //
            message[index] = message[index] - 32;
        }
    }
    for(index = 0; message[index] != 0; index++)
    {   
        switch (message[index])
        {   
            case 65: 
            message[index] = key[0];
            break;
            case 66:
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
    printf("Your Encrypted message is: %s\n", message);
    return 0;
}
