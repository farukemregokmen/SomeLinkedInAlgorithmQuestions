#include <iostream>
using namespace std;

void reverseString(string word){
    string reversed = word;
    int wordLetters = (word.length())-1;
    for (unsigned int i = 0; i < reversed.length(); i++,wordLetters--)
    {
        reversed[i] = word[wordLetters];
    }
    
    cout << reversed;
}

int main()
{
    string word = "letter";
    reverseString(word);
    return 0;
}