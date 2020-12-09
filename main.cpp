#include <stdlib.h>
#include <iostream>

using namespace std;

void role_dice(int limitLoop);
int randomNumbers[] = {};

int main(){
    string dice;
    cout << "Which one will be your dice?: ";
    cin >> dice;
    if(dice == "d20"){
        role_dice(20);
    }
    
}   


void role_dice(int limitLoop){
    for(int count = 0; count <= limitLoop; count++){
        int random = (rand() % 20) + 1;
        cout << random << "\n";
        randomNumbers[limitLoop] = random;
    }

    cout << randomNumbers[0];
}