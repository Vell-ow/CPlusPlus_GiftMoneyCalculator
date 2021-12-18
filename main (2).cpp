// ICO2_Part2: divide 100 by two doubles and produce the 
// integer amount received as well as the remainder doubles for both of them. 

// Author: Andrew Coviello

#include <iostream>
using namespace std;

int main() {
    int giftMoney = 10000;
  int toolSets = 892;
  int drawingSets = 1538;
  int amountofToolSets = giftMoney / toolSets;
  int changeofToolSets = giftMoney % toolSets;
  int changeofToolSetsFirst = changeofToolSets - 88;
  int changeofToolSetsFirstDividedByOneHundred = changeofToolSetsFirst / 100;
  int changeofToolSetsSecond = changeofToolSets - 100;
  int amountofDrawingSets = giftMoney / drawingSets;
  int changeofDrawingSets = giftMoney % drawingSets;
  int changeofDrawingSetsFirst = changeofDrawingSets - 72;
  int changeofDrawingSetsFirstDividedByOneHundred = changeofToolSetsFirst / 100;
  int changeofDrawingSetsSecond = changeofDrawingSets - 700;

  cout << "You can get " << amountofToolSets << " tool sets with your gift money." << endl;
  cout << "You will have $" << changeofToolSetsFirstDividedByOneHundred << "." << changeofToolSetsSecond << " left over if you decide to get that many tool sets." << endl;
  cout << "You can get " << amountofDrawingSets << " drawing sets with your gift money." << endl;
  cout << "You will have $" << changeofDrawingSetsFirstDividedByOneHundred << "." << changeofDrawingSetsSecond << " left over if you decide to get that many drawing sets." << endl;
}