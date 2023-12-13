#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

#include <ctime>
using namespace std;

void print_array(int array[], int count){

    for(int i = 0; i < count; i++){
        cout << array[i]<< "\t";
    } cout <<endl;
    cout <<"It took you " << count << " times to guess correctly."<<endl;
}
void play_game(){
    int guesses[251];
    int guess_count =0;

    int random = rand() % 251;
    cout << random <<endl; //DELETE THIS LINE IF NOT TESTING.
    cout <<"Guess the number:" <<endl;
    while(true){
        int guess;
        cin >> guess;
        guesses[guess_count++]= guess;

        if(guess == random){
            cout << "Your guess is correct. You won."<< endl;
            break;


        }else if(guess < random){
            cout<< "Your guess is lower than the number. Try again:"<<endl;


        }else{
            cout << "Your guess is higher than the number. Try again:"<<endl;
        }




    }print_array(guesses, guess_count);




}
int main() {
    srand(time(0));
    int choice;


    do{
        cout <<"----MENU-----"<<endl;
        cout <<"0. Quit" <<endl <<"1. Play Game"<<endl;
        cin >> choice;

        switch(choice) {

            case 0:
                cout << "You chose: " << choice << ".Quit" << endl;
                return 0;
            case 1:
                cout << "You chose: " << choice << ".Play Game" << endl;
                cout << "Let's begin." << endl;
                play_game();
                break;
        }

    }
    while(choice != 0);


    }






