#include <iostream>
#include <string>
// library for the function .size()
using namespace std;
void StringEval(int& tabs, int& spaces, int& lines, string sent);               
// function declaration and passing varaibles by refrence (&)
int main() {
    string sent;
    int tabs = 0, spaces = 0, lines = 1;                                        
    // initializing the required variables
    cout << "Enter a string: (Add '*' at the end of input and Press Enter) \n";
    getline(cin, sent, '*');                                                    
    // getting input with a speacial marker '*' to indicate the end of input
    StringEval(tabs, spaces, lines, sent);                                      
    // calling the function to get the required metrics about the string
    cout << "\nCharacters : " << sent.size()
         // total characters can be found by the lenght of string
         << "\nSpaces     : " << spaces
         << "\nTabs       : " << tabs
         << "\nLines      : " << lines;
         // outputs the 4 metrics
    return 0;
}
void StringEval(int& tabs, int& spaces, int& lines, string sent) {              
    // function to calculate the tabs, space, lines.
    for (int i = 0; i < sent.size(); i++) {                                     
        /*  loop to check the string character by character and 
            increasing the respective counter if a match is found   */
        if (sent[i] ==' ') {
            spaces++;
        } else if (sent[i] == '\t') {
            tabs++;
        } else if (sent[i] == '\n') {
            lines++;
        }
    }
}