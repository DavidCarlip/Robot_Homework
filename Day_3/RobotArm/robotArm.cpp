namespace robot {


#include <iostream>


int position = 0;
int armPosition = 0;
int score = 0;
bool hasPiece = false;


void Drive(int distance) {
 position += distance;
}


void MoveArmTo(int position) {
 armPosition = position;
}


void ScorePiece() {
 if (hasPiece == false) {
   std::cout << "You're not holding anything!" << '\n';
 }
 else {
   if (position != 6 || armPosition != 10) {
     std::cout << "You're not in position!" << '\n';
   }
   else {
     std::cout << "Good Job!" << '\n';
     score += 1;
	hasPiece = false;
   }
 }
}


void PickUpPiece() {
 if (hasPiece == true || armPosition != 0) {
   std::cout << "You can't do that!" << '\n';
 }
 else {
   hasPiece = true;
 }
}


bool HasPiece() const {
 return hasPiece;
}


int GetPosition() const {
 return position;
}


int GetArmPosition() const {
 return armPosition;
 }


 int GetScore() {
   return score;
 }
}
}
