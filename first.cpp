#include <iostream>
#include <windows.h>

using namespace std;

char point = static_cast<char>(249);
char BOARD[9];
string action;
bool turn;
string name_first, name_second;
int score_first, score_second, score_draw;
string num_board;

void draw_board2(){
	cout << static_cast<char>(201) << static_cast<char>(205) << static_cast<char>(203) << static_cast<char>(205) << static_cast<char>(203) << static_cast<char>(205) << static_cast<char>(187) << endl;
	cout << static_cast<char>(186) << BOARD[0] << static_cast<char>(186) << BOARD[1] << static_cast<char>(186) << BOARD[2] << static_cast<char>(186) << endl;
	cout << static_cast<char>(204) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(185) << endl;
	cout << static_cast<char>(186) << BOARD[3] << static_cast<char>(186) << BOARD[4] << static_cast<char>(186) << BOARD[5] << static_cast<char>(186) << endl;
	cout << static_cast<char>(204) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(185) << endl;
	cout << static_cast<char>(186) << BOARD[6] << static_cast<char>(186) << BOARD[7] << static_cast<char>(186) << BOARD[8] << static_cast<char>(186) << endl;
	cout << static_cast<char>(200) << static_cast<char>(205) << static_cast<char>(202) << static_cast<char>(205) << static_cast<char>(202) << static_cast<char>(205) << static_cast<char>(188) << endl;
}

void draw_board(){
	cout << static_cast<char>(218) << static_cast<char>(196) << static_cast<char>(194) << static_cast<char>(196) << static_cast<char>(194) << static_cast<char>(196) << static_cast<char>(191) << endl;
	cout << static_cast<char>(179) << BOARD[0] << static_cast<char>(179) << BOARD[1] << static_cast<char>(179) << BOARD[2] << static_cast<char>(179) << endl;
	cout << static_cast<char>(195) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(180) << endl;
	cout << static_cast<char>(179) << BOARD[3] << static_cast<char>(179) << BOARD[4] << static_cast<char>(179) << BOARD[5] << static_cast<char>(179) << endl;
	cout << static_cast<char>(195) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(180) << endl;
	cout << static_cast<char>(179) << BOARD[6] << static_cast<char>(179) << BOARD[7] << static_cast<char>(179) << BOARD[8] << static_cast<char>(179) << endl;
	cout << static_cast<char>(192) << static_cast<char>(196) << static_cast<char>(193) << static_cast<char>(196) << static_cast<char>(193) << static_cast<char>(196) << static_cast<char>(217) << endl;
}

void start(){
	system("cls");
	turn = false;
	for(int i = 0; i < 9; i++){
		BOARD[i] = point;
	}
	cout << "What board do you want?" << endl;
	cout << "Enter 1 if this: " << endl;
	draw_board();
	cout << "Enter 2 if this: " << endl;
	draw_board2();
	cin >> num_board;
	while(num_board.size() > 1 || (num_board[0] != '1' && num_board[0] != '2')){
		cout << "Not correct, enter 1 or 2." << endl;
		cin >> num_board;
	}
	score_first = 0;
	score_second = 0;
	score_draw = 0;
	cout << "First player name: ";
	cin >> name_first;
	cout << "You draw X.\nSecond player name: ";
	cin >> name_second;
	cout << "You draw O." << endl;
	Sleep(2000);
}

void restart(){
	system("cls");
	turn = false;
	for(int i = 0; i < 9; i++){
		BOARD[i] = point;
	}
}

bool check_position(){
	if(BOARD[atoi(action.c_str()) - 1] == point){
		return false;
	}else{
		return true;
	}
}

void draw_example(){
	cout << static_cast<char>(218) << static_cast<char>(196) << static_cast<char>(194) << static_cast<char>(196) << static_cast<char>(194) << static_cast<char>(196) << static_cast<char>(191) << endl;
	cout << static_cast<char>(179) << 1 << static_cast<char>(179) << 2 << static_cast<char>(179) << 3 << static_cast<char>(179) << endl;
	cout << static_cast<char>(195) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(180) << endl;
	cout << static_cast<char>(179) << 4 << static_cast<char>(179) << 5 << static_cast<char>(179) << 6 << static_cast<char>(179) << endl;
	cout << static_cast<char>(195) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(197) << static_cast<char>(196) << static_cast<char>(180) << endl;
	cout << static_cast<char>(179) << 7 << static_cast<char>(179) << 8 << static_cast<char>(179) << 9 << static_cast<char>(179) << endl;
	cout << static_cast<char>(192) << static_cast<char>(196) << static_cast<char>(193) << static_cast<char>(196) << static_cast<char>(193) << static_cast<char>(196) << static_cast<char>(217) << endl;
}

void draw_example2(){
	cout << static_cast<char>(201) << static_cast<char>(205) << static_cast<char>(203) << static_cast<char>(205) << static_cast<char>(203) << static_cast<char>(205) << static_cast<char>(187) << endl;
	cout << static_cast<char>(186) << 1 << static_cast<char>(186) << 2 << static_cast<char>(186) << 3 << static_cast<char>(186) << endl;
	cout << static_cast<char>(204) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(185) << endl;
	cout << static_cast<char>(186) << 4 << static_cast<char>(186) << 5 << static_cast<char>(186) << 6 << static_cast<char>(186) << endl;
	cout << static_cast<char>(204) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(206) << static_cast<char>(205) << static_cast<char>(185) << endl;
	cout << static_cast<char>(186) << 7 << static_cast<char>(186) << 8 << static_cast<char>(186) << 9 << static_cast<char>(186) << endl;
	cout << static_cast<char>(200) << static_cast<char>(205) << static_cast<char>(202) << static_cast<char>(205) << static_cast<char>(202) << static_cast<char>(205) << static_cast<char>(188) << endl;
}

void draw(){
	system("cls");
	cout << "Cell numbers:" << endl;
	if(atoi(num_board.c_str()) == 1){
		draw_example();
	}else{
		draw_example2();
	}
	cout << "Your board:" << endl;
	if(atoi(num_board.c_str()) == 1){
		draw_board();
	}else{
		draw_board2();
	}
	
	if(turn == false){
		cout << "Turn " << name_first << "." << endl;
	}else{
		cout << "Turn " << name_second << "." << endl;
	}
	cin >> action;
	while(action.size() > 1 || action[0] < 49 || action[0] > 57 || check_position() == true){
		cout << "False number. Try again." << endl;
		cin >> action;
	}
}

bool check_board(){
	for(int i = 0; i < 9; i++){
		if(BOARD[i] == point){
			return false;
		}
	}
	return true;
}

short findWiner(){
	if(
	(BOARD[0] != point && BOARD[0] == BOARD[1] && BOARD[1] == BOARD[2]) ||
	(BOARD[3] != point && BOARD[3] == BOARD[4] && BOARD[4] == BOARD[5]) ||
	(BOARD[6] != point && BOARD[6] == BOARD[7] && BOARD[7] == BOARD[8]) ||
	(BOARD[0] != point && BOARD[0] == BOARD[3] && BOARD[3] == BOARD[6]) ||
	(BOARD[1] != point && BOARD[1] == BOARD[4] && BOARD[4] == BOARD[7]) ||
	(BOARD[2] != point && BOARD[2] == BOARD[5] && BOARD[5] == BOARD[8]) ||
	(BOARD[0] != point && BOARD[0] == BOARD[4] && BOARD[4] == BOARD[8]) ||
	(BOARD[2] != point && BOARD[2] == BOARD[4] && BOARD[4] == BOARD[6])
	){
		return 1;
	}else if(check_board() == true){
		return 2;
	}
	return 0;
}

void ask();

void result(){
	if(findWiner() == 1){
		if(turn == false){
			cout << "Our winner is " << name_second << "." << endl;
			score_second++;
		}else{
			cout << "Our winner is " << name_first << "." << endl;
			score_first++;
		}
	}else{
		cout << "We have draw." << endl;
		score_draw++;
	}
	cout << "Your board:" << endl;
	if(atoi(num_board.c_str()) == 1){
		draw_board();
	}else{
		draw_board2();
	}
	cout << name_first << " won " << score_first << " times, " << name_second << " won " << score_second << " times, the draw was " << score_draw << " times." << endl;
	ask();
}

void main_func(){
	while(findWiner() == 0){
		draw();
		if(turn == false){
			BOARD[atoi(action.c_str()) - 1] = 'X';
			turn = true;
		}else{
			BOARD[atoi(action.c_str()) - 1] = 'O';
			turn = false;
		}
	}
}

string str;

void ask(){
	cout << "Would you like to restart with this score? (y/n)" << endl;
	cin >> str;
	if(str != "y" && str != "n"){
		cout << "I can't understand." << endl;
		ask();
	}
	if(str == "y"){
		restart();
		main_func();
		system("cls");
		result();
	}else{
		system("cls");
		for(int i = 0; i < 42; i++){
			cout << "See you later.\n";
		}
	}
}

int main(){
	start();
	main_func();
	system("cls");
	result();
	return 0;
}