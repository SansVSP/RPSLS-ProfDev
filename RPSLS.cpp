/*
Extended version of a program written for the 'Rock, Paper, Scissors, Lizard, Spock' project as part of Codecademy's C++ for Programmers course.
The original project only asked for input once, after which the game is ended.
In this modified version the game runs 5 times, keeping score for both the user and computer.
Written by Sancha van Spil
*/





#include <iostream>
#include <stdlib.h>

int main(){
  srand (time(NULL));
  

  int user = 0; //Set to 0, will be changed by user input
  int userScore = 0; //Score of the user, will change in the for-loop based on outcome of round
  int computerScore = 0; //Score of the computer, will change in the for-loop based on outcome of round

  std::cout << "===================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "Best of 5!\n";
  std::cout << "===================\n";

for(int i = 0; i <= 4; i++){		//For-loop to ensure the game runs 5 times

	int computer = rand() % 5 + 1; //Generates random number between 1 and 5, inside for-loop so new number is generated each turn

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";

  std::cout << "Shoot! ";
  std::cin >> user; //Takes user input 

//User is rock (has chosen 1).
 if(user == 1){ 
  switch (computer){
    case 1: //Rock
      std::cout << "Tie!\n";
      break;
    case 2: //Paper
      std::cout << "You were defeated by Paper! :(\n";
			computerScore++;
      break;
    case 3: //Scissors
      std::cout << "You crushed the Scissors! :)\n";
			userScore++;
      break;
    case 4: //Lizard
      std::cout << "You crushed the Lizard! :)\n";
			userScore++;
      break;
    case 5: //Spock
      std::cout << "You were vaporised by Spock! :(\n";
			computerScore++;
      break;
    }
 }

 //User is paper (user input is 2).
 if(user == 2){
  switch (computer){
    case 1: //Rock
      std::cout << "You trapped the Rock! :)\n";
			userScore++;
      break;
    case 2: //Paper
      std::cout << "Tie!\n";
      break;
    case 3: //Scissors
      std::cout << "You were cut by Scissors! :(\n";
			computerScore++;
      break;
    case 4: //Lizard
      std::cout << "You were eaten by Lizard! :(\n";
			computerScore++;
      break;
    case 5: //Spock
      std::cout << "You disproved Spock! :)\n";
			userScore++;
      break;
    }
 }

 //User is scissors (user input is 3).
 if(user == 3){
  switch (computer){
    case 1: //Rock
      std::cout << "You were crushed by the Rock! :(\n";
			computerScore++; //Computer wins, 1 point added to computerScore
      break;
    case 2: //Paper
      std::cout << "You cut the Paper! :)\n";
			userScore++; //User wins, 1 point added to userScore
      break;
    case 3: //Scissors
      std::cout << "Tie!\n";
			// No points awarded for a tie
      break;
    case 4: //Lizard
      std::cout << "You decapitated the Lizard! :)\n";
			userScore++;
      break;
    case 5: //Spock
      std::cout << "You were smashed by Spock! :(\n";
			computerScore++;
      break;
    }
 }

 //User is lizard (user input is 4).
 if(user == 4){
  switch (computer){
    case 1: //Rock
      std::cout << "You were crushed by the Rock! :(\n";
			computerScore++;
      break;
    case 2: //Paper
      std::cout << "You ate the Paper! :)\n";
			userScore++;
      break;
    case 3: //Scissors
      std::cout << "You were decapitated by Scissors! :(\n";
			computerScore++;
      break;
    case 4: //Lizard
      std::cout << "Tie!\n";
      break;
    case 5: //Spock
      std::cout << "You poisoned Spock! :)\n";
			userScore++;
      break;
    }
 }

 //User is Spock (user input is 5).
 if(user == 5){
  switch (computer){
    case 1: //Rock
      std::cout << "You vaporised the Rock! :)\n";
			userScore++;
      break;
    case 2: //Paper
      std::cout << "You were disproved by Paper! :(\n";
			computerScore++;
      break;
    case 3: //Scissors
      std::cout << "You smashed the Scissors! :)\n";
			userScore++;
      break;
    case 4: //Lizard
      std::cout << "You were poisoned by the Lizard! :(\n";
			computerScore++;
      break;
    case 5: //Spock
      std::cout << "Tie!\n";
      break;
    }
 }
 if(user >= 6 || user <= 0) { //User input is not between 1 and 5
	std::cout << "===================\n";
  std::cout << "Invalid input\n";
	std::cout << "You lose points for stupidity!\n";
	std::cout << "===================\n";
	userScore--; //User will lose point for providing wrongn input
 }
}

if(userScore == computerScore){ //Will run in case of a tie
	std::cout << "===================\n";
	std::cout << "It's a tie!\n";
	std::cout << "Better luck next time!\n";
	std::cout << "===================\n";
}

if(userScore > computerScore){ //Will run if user has more points than computer
	std::cout << "===================\n";
	std::cout << "You won!\n";
	std::cout << "Congrutalions to the Rock Paper Scissors Lizard Spock Champion!\n";
	std::cout << "===================\n";
}

if(userScore < computerScore){ //Will run if computer has more points than user
	std::cout << "===================\n";
	std::cout << "You were defeated by a computer (and luck)!\n";
	std::cout << "Better luck next time!\n";
	std::cout << "===================\n";
}

return 0;

}