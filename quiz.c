#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void game_main( int *score) {
    const char * qu[][100] = {
        {"\n\n\nwhats my name\n "},
        {"\n\n\nWhat's the best game in the world\n"},
        {"\n\n\nwhat's the biggest animal in the world\n"}, 
        {"\n\n\nWhat is the name of the biggest technology company in South Korea?\n"},
        {"\n\n\nWhich animal can be seen on the Porsche logo?\n"},
        {"\n\n\nWho was the first US President?\n"},
        {"\n\n\nWhich country won the Fifa World Cup 1998?\n"},
        {"\n\n\nWhat is the capital of Denmark?\n"},
        {"\n\n\nWhich country is hosting the Fifa World Cup 2010?\n"},
        {"\n\n\nWhich country is Maria Sarapova from?\n"},

    };
    const char * answers[][100] = { 
        {"1.Rayan","2.Nasser","3.Hamza","4.Mustafa", "1" } ,
        {"1.=Rdd2","2.=Overwatch","3.=Minecraft","4.=Dragon's Dogma 2", "1"},
        {"1.Saltwater crocodile","2.Green anaconda","3. Komodo dragon","4.Blue whale", "4" }, 
        {"1.Appel","2.Samsung","3.Sony","4.Xbox", "2"},
        {"1.Horse","2.frog","3.dog","4.Banda", "1"},
        {"1.Richard Nikson","2.Abraham Linkon","3.John F. Kennedy","4.George Washington", "4"},
        {"1.France","2.Brazil","3.Italy","4.England", "1"},
        {"1.Copenhagen","2.Helsinki","3.Rome","4.Madrid", "1"},
        {"1.South Africa","2.Italy","3.Argentina","4.Spain", "1"},
        {"1.Switzerland","2.Argentina","3.Russia","4.Spain", "3"},
    };


    system("color f1");

    int answer1;

    srand(time(0));
    int asked_questions[10] = {0}; 
    int rands;
    printf("%s",&score);
    do {
        rands = rand() % 10;
    } while (asked_questions[rands]); 

    asked_questions[rands] = 1; 

    printf("%s\n", qu[rands][0]);

    for (int i = 0; i < 4; i++) {

        printf("%s\n", answers[rands][i]);
    }
    
    printf("Choose a number: ");
    scanf("%d", &answer1);

    if (answer1 == atoi(answers[rands][4])){
        (*score)++;
        printf("Correct!\n\n");
    }
}

int main(){
    system("color f1");
    char answer[10];
    char q[20]="e";

    printf("Welcome to the --Ray's quiz game-- this game about quiz qustions\n");
    printf("please before playing the game read the rules\n");
    printf("- If your answer is correct it will apear correct \n");

    printf("----if you have reed the ruls pres 'e'----");

    
    scanf("%s",&answer);

    if((strcmp(answer,q) == 0)){
    int score = 0;
    for (int l = 0; l < 9; l++){
        game_main(&score);
    }
    printf("%d",score);
    return 0;
    }else{
        printf("Get out my game bitch \n");
        return 0;
    }
}
