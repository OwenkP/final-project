
/*
Final Project
Authors: Ethan Bates, Owen Palmer, John Fitzgerald
Date: 5/1/18
*/
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	//Declare values
	int players = 0;
	string category = "";
	string playerOne = "";
	string playerTwo = "";
	string playerThree = "";
	string playerFour = "";
	string playerNum[3];
	
	//Secondary values
	int i = 0;
	int playerPoint = 0;
	int questionNum = 0;
	string answer = "";
	
	//Enter player count
 	cout << "Welcome to our trivia game!" << endl;
	cout << "Please enter a number of players (1 thorugh 4): ";
	cin >> players;
	
	//Enter player name
	if (players == 1){
	cout << "Please enter your name: ";
	cin >> playerOne; 
	cout << "Hello " << playerOne << endl; 
		}
	//Enter player name
	if (players == 2){
		cout << "Please enter Player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl; 
		}
	//Enter player name
	if (players == 3){
		cout << "Please enter Player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl;
		cout << "Please enter Player Three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << endl; 
		}
	//Enter player name
	if (players == 4){
		cout << "Please enter player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl;
		cout << "Please enter Player Three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << endl;
		cout << "Please enter Player Four's name: ";
		cin >> playerFour; 
		cout << "Hello " << playerFour << endl; 
		}	
		//Check for incorrect player number
		else if (players <= 0 || players >= 5) {
			cout << "Please enter a correct number...";
			return 0; 
		}	
		cout << "please enter a category:\nMovies\nGames\nShows: ";
		cin >> category; 
		
		//Lowercase category
		transform(category.begin(), category.end(), category.begin(), ::tolower);

		//If movies
		if (category == "movies") {
			
			//Declare questions & answers
			string movies[40][2] = {{"Movie question 1\nA)wrong\nB)wrong\nC)right\nD)wrong","c"},{"Movie stuff\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
		
		//40 questions
		while (i != 40) {

			//Ask question
			cout << movies[i][0] << "\nAnswer: ";
			cin >> answer;
			
			//Toupper
			transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			

			//Check if answer is correct
			if (answer == movies[i][1]) {
				cout << "\nCorrect!\n\n\n";
				
				//Give the player a point
				playerPoint = playerPoint + 1;
			}
			//Incorrect answer
			else {
				cout << "\nIncorrect answer, U Suk!\n\n\n";
			}
			//Next question/answer
			i = i + 1;
		}
		//Display points
		cout << "Your total points: " << playerPoint;
	}
	//If user chose games
	else if (category == "games") {
		
		//Declare questions & answers
			string vidGames[40][2] = {{"Video games 1\nA)wrong\nB)wrong\nC)wrong\nD)right","d"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
			
			//40 questions
			while (i != 40) {

				//Ask question
				cout << vidGames[i][0] << "\nAnswer: ";
				cin >> answer;
				
				//Toupper
				transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

				//Check if answer is correct
				if (answer == vidGames[i][1]) {
					cout << "\nCorrect!\n\n\n";
				}
				//Incorrect answer
				else {
					cout << "\nIncorrect answer, U Suk!\n\n\n";
				}
				//Next question/answer
				i = i + 1;
			}
			//Display points
			cout << "Your total points: " << playerPoint;
	}
	else if (category == "shows") {
		//Declare questions & answers
			string tvShows[40][2] = {{"Tv shows 1\nA)right\nB)wrong\nC)wrong\nD)wrong","a"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
			
			//40 questions
			while (i != 40) {

				//Ask question
				cout << tvShows[i][0] << "\nAnswer: ";
				cin >> answer;
				
				//Toupper
				transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
				

				//Check if answer is correct
				if (answer == tvShows[i][1]) {
					cout << "\nCorrect!\n\n\n";
					
					//Give the player a point
					playerPoint = playerPoint + 1;
				}
				//Incorrect answer
				else {
					cout << "\nIncorrect answer, U Suk!\n\n\n";
				}
				//Next question/answer
				i = i + 1;
			}
			//Display points
			cout << "Your total points: " << playerPoint;
	}
	//Thank user
	cout << "\n\nThank you for using this program! :)";
}
