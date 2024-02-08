#include<bits/stdc++.h>
#include "hangman_functions.h"
using namespace std;

//defining greet function
void greet(){
    cout<<"\t\t\t\t===================\n";
    cout<<"\t\t\t\tHangman : The Game\n";
    cout<<"\t\t\t\t===================\n";
    cout<<"INSTRUCTIONS: Save your friend from being hanged by guessing the correct word. You only have 7 wrong guesses.\n";
}


void display_misses(int misses, string clue,int streak){
    if(misses == 0){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t      | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
        cout<<"HINT: "<<clue<<endl;
    }
    else if(misses ==1){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t  |   | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
                cout<<"HINT: "<<clue<<endl;
    }
    else if(misses == 2){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t  |   | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t  O   | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
                cout<<"HINT: "<<clue<<endl;
    }
    else if(misses == 3){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t  |   | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t  O   | \n";
        cout<<"\t\t\t\t  |   | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
                cout<<"HINT: "<<clue<<endl;
    }
    else if(misses == 4){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t  |   | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t  O   | \n";
        cout<<"\t\t\t\t /|   | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
                cout<<"HINT: "<<clue<<endl;
    }
    else if(misses == 5){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t  |   | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t  O   | \n";
        cout<<"\t\t\t\t /|\\  | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
                cout<<"HINT: "<<clue<<endl;
    }
    else if(misses == 6){
        cout<<"\t\t\t\t  +---+ \t\t\t\t\t\t\tSTREAK : "<<streak<<"\n";
        cout<<"\t\t\t\t  |   | \t\t\t\t\t\t\tWRONG GUESSES : "<<misses<<"\n";
        cout<<"\t\t\t\t  O   | \n";
        cout<<"\t\t\t\t /|\\  | \n";
        cout<<"\t\t\t\t /    | \n";
        cout<<"\t\t\t\t      | \n";
        cout<<"\t\t\t\t ========= \n";
                cout<<"HINT: "<<clue<<endl;
    }
}

void display_status(string answer){
    cout<<"\n\t\t\t\t";
    for(long long unsigned int i=0; i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
}

bool end_game(string answer, string codeword){
    if(answer == codeword){
        display_status(answer);
        cout<<"\nYaaaaaayyyyyyyy!!!!!!! You saved your friend.\n";
        return true;
    }
    else{
        cout<<"\nSorry your friend died. :(\n";
        cout<<"The correct word was: "<<codeword;
        return false;
    }
}