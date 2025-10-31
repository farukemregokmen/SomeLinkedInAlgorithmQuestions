#include <iostream>
using namespace std;

string reverseString(string word){
    string reversed = word;
    int wordLetters = (word.length())-1;
    for (unsigned int i = 0; i < reversed.length(); i++,wordLetters--)
    {
        reversed[i] = word[wordLetters];
    }
    
    return reversed;
}

int main(){
    string word = "radar";
    if (reverseString(word) == word)
    {
        cout << "That word is a palindrome.";
    }
    else
    {
        cout << "That word is not a palindrome.";
    }
    
    return 0;
}
