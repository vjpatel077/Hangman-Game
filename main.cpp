#include <bits/stdc++.h>
#include "hangman_functions.h"
#include "hangman_functions.cpp"
using namespace std;
int main(){
    int option = 1;
    int streak = 0;
    while(option){
        bool result = false;
        greet();
        vector<string> ques={"","ELEPHANT","SOMALIA","PINEAPPLE","NEPTUNE","PACIFIC","ORCHID","PRECIOUS","RUGBY","SUPERVISOR","DONKEY","EGGPLANT","NAMIBIA","ZIMBABWE","PSYCHIATRIST","PIZZA"};
        vector<string> hint={"","Animal","Country","Fruit","Solar System","Ocean","Flowers","Adjective","Sport","Profession","Animal","Vegetable","Country","Country","Profession","Food"};
        vector<string> ans={"","________","_______","_________","_______","_______","______","________","_____","__________","______","________","_______","________","____________","_____"};
        vector<char> alph={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        srand((unsigned) time(NULL));
        int num = 0 + (rand()%16);
        string codeword = ques[num];
        string clue = hint[num]; 
        string answer = ans[num];
        int misses = 0;
        bool guess = false;
        char letter;

        while(codeword!=answer && misses <7){
            display_misses(misses,clue, streak);
            display_status(answer);
            cout<<"\n";
            for(long long unsigned int i=0;i<alph.size();i++){
                cout<<alph[i]<<"   ";
            }
            cout<<endl;
            cout<<"\nPlease enter your guess: ";
            cin>>letter;
            letter = toupper(letter);
            for(long long unsigned int i=0;i<alph.size();i++){
                if(alph[i]==letter){
                    alph[i]=' ';
                }
            }
            for(long long unsigned int i=0; i<codeword.length(); i++){
                if(letter == codeword[i]){
                    answer[i]=letter;
                    guess = true;
                }
            }
            if(guess){
            }
            else{
                cout<<"Nooooooooooo!!!!!"<<endl;
                misses++;
            }
            guess=false;
        }
        result = end_game(answer, codeword);
        if(result){
            streak++;
        }
        else{
            streak=0;
        }
        cout<<"\nWould you like to play again ??\n";
        cout<<"Press 1 : Play Again\n";
        cout<<"Press 2 : Exit";
        cout<<"\nEnter your choice : ";
        cin>>option;
    }
    return 0;
}