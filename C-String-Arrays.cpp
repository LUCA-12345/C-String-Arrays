#include <iostream>
#include <string> 
#include <stdlib.h>

char validateInput (char);
void changeVowels ( char  * , char);


using namespace std;

int main()
{
    const int SIZE = 101; 
    char userSentence[SIZE];

    string sentence; 
    char vowel;  

    cout << "Enter a sentence: ";
    cin.getline(userSentence, SIZE);   
    cout << endl;

    while ( vowel != '/')
    {
        cout << "Enter a vowel or / to quit: ";
        cin >> vowel; 
        cout << endl; 

        if (vowel == '/' )  
        {  
            cout << "Goodbye!" << endl;
            return 0;                                
        }
        else if (vowel != '/')
        {
           validateInput(vowel);
        }

        changeVowels(userSentence,vowel);

        cout << userSentence << endl;
    }

    return 0;
}

char validateInput (char input)                 
{
    if ( input == 'a' || input ==  'A' || input ==  'e' || input ==  'E' || input ==  'i' || input ==  'I' || input ==  'o' || input ==  'O' || input ==  'u' || input ==  'U')
    {
        return input;
    }
    else 
    {
        cout << "You did not enter a vowel, please enter a, e, i, o, or u: ";
        cin >> input;
    }

    return input;
}


void changeVowels ( char *strPtr, char validVowel) 
{
    while (*strPtr != '\0' )
    {
        if ( *strPtr == 'a' || *strPtr == 'A' || *strPtr ==  'e' || *strPtr ==  'E' || *strPtr ==  'i' || *strPtr ==   'I' || *strPtr ==   'o' || *strPtr ==   'O' || *strPtr ==   'u' || *strPtr ==   'U' )
        {
            *strPtr = validVowel;
        }
        strPtr++;
    }
}

