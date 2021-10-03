//piggy simulator!
//a quick introduction/review of C++ classes!

#include<iostream>
using namespace std;
//standalone function declarations/prototypes would go here too!

//class definition-------------------------------------------
class piggy {
private: //private variables can only be seen/used by members of the class
	int xpos;
	int ypos;
	bool isWalking;
	bool isAsleep;
	int number;
public: //can be seen and used by everything in your program
	piggy(); //default constructor: initalizes all the variables in your pig
	piggy(int num); //parameterized constructor
	void walk();
	void sleep();
	void draw();
};//---------------------------------------------------------

int main() {
	piggy p1(1); //instantiate a pig object
	while (true) { //game loop!
		p1.walk();
		p1.draw();
	}
}

//class function definitions AND standalone function definitions go here
piggy::piggy() {
	xpos = rand() % 600 + 100;
	ypos = rand() % 600 + 100;
	isAsleep = false;
	isWalking = false;
}

piggy::piggy(int num) {
	xpos = rand() % 600 + 100;
	ypos = rand() % 600 + 100;
	isAsleep = false;
	isWalking = false;
	number = num;
}
void piggy:: walk() {
	//randomly move in one of 8 directions when isWalking is true
	if (isWalking == true) {
		xpos += rand() % 10 - 5;
		ypos += rand() % 10 - 5;
		int off = rand() % 100 + 1;

		if (off < 30) { //30% chance walking will turn off each turn
			isWalking == false;
		}
	}
	//10% chance any turn that isWalking will turn ON
	int num = rand() % 100 + 1;
	if (num <10) {
		isWalking = true;
		cout << "walking!" << endl;
		system("pause");

	}
}
void piggy::sleep() { 
	//you do this one!
}


void piggy::draw() {
	//eventually this will hold drawing functions to make it graphical
	cout << "Hello I am pig # " << number << endl;
	cout << "My position is " << xpos << " , " << ypos << endl;
	cout << "I am ";
	if (isAsleep) cout << " asleep." << endl;
	else cout << " not asleep." << endl;
}


