#include <iostream>
#include <string>
using namespace std;

char code[26][5] = {
        ".-",
        "-...",
        "-.-.",
        "-..",
        ".",
        "..-.",
        "--.",
        "....",
        "..",
        ".---",
        "-.-",
        ".-..",
        "--",
        "-.",
        "---",
        ".--.",
        "--.-",
        ".-.",
        "...",
        "-",
        "..-",
        "...-",
        ".--",
        "-..-",
        "-.--",
        "--.."
    };

    void convert(string sentence){
            for (int i=0 ; i < sentence.length() ; i++){
                if (sentence[i] >= 'A' && sentence[i] <= 'Z'){
                    cout << code[sentence[i] - 65] << ' ';
                }
                else if(sentence[i] >= 'a' && sentence[i] <= 'z'){
                    cout << code[sentence[i] - 97] << ' ';
                }
                else if(sentence[i] == ' ' ){
                    cout << "\t";
                }
                else 
                    cout << "can not use any special characher & numbers " ;
            }
        }

int main() {
    string sentence;
    cout << "enter a sentence ";
    getline(cin , sentence);
    convert(sentence);

    return 0;
}