#include <iostream>
#include <ctime>

char getPlayerChoice();
char getCompChoice();
void show_choice(char choice);
void winner(char player, char computer);

int main(){
    std::cout << "Hello and welcome to game rock-paper-scissors!\nPlease, choose one of the following options: \n";
    std::cout << "'r' is rock\n'p' is paper\n's' are scissors\n";
    char choice = getPlayerChoice();
    show_choice(choice);
    char cchoice = getCompChoice();
    std::cout << "The choice of computer is " << cchoice << '\n';
    winner(choice, cchoice);
    return 0;
}
char getPlayerChoice(){
    char choice;
    do{
        std::cout << "Choose: ";
        std::cin >> choice;
    }while(choice != 'r' && choice != 's' && choice != 'p');
    return choice; 
}
char getCompChoice(){
    srand(time(0));
    int cchoice = rand() % 3 + 1;
    switch(cchoice){
        case 1: return 'r';
        break;
        case 2: return 'p';
        break;
        case 3: return 's';
        break;
    }
    return 0;
}
void show_choice(char choice){
    std::cout << "Your choice is " << choice << '\n';
}
void winner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
            std::cout << "This is a tie!\n";
            break;
        }
        else if(computer == 'p'){
            std::cout << "You lose :(\n";
            break;
        }
        else{
            std::cout << "You are winner!\n";
            break;
        }
        case 'p': if(computer == 'r'){
            std::cout << "You are winner!\n";
            break;
        }
        else if(computer == 'p'){
            std::cout << "This is a tie!\n";
            break;
        }
        else{
            std::cout << "You lose :(\n";
            break;
        }
        case 's': if(computer == 'r'){
            std::cout << "You lose :(\n";
            break;
        }
        else if(computer == 'p'){
            std::cout << "You are winner!\n";
            break;
        }
        else{
            std::cout << "You are winner!\n";
            break;
        }
    }
}    