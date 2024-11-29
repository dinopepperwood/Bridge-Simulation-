#include <iostream>
#include <string>
using namespace std;
int main() {
  string bridge;
  string bridge2 = "##  ##";
  string fbridge;
  string leave;
 cout << "A car is trying to go to the other side of the bridge. It is a 10 block bridge can you build a bridge with this #\n";
cin >> bridge;
  if(bridge.length() == 10){
    cout << "Good Job\n";
  }else{
    cout << "Not safe try again\n";
}
  while(bridge.length() != 10){
    cout << "A car is trying to go to the other side of the bridge. It is a 10 block bridge can you build a bridge\n";
    cin >> bridge;
    if(bridge.length() == 10){
      cout << "Good Job\n";
    }
  }
  cout << "Final problem a bridge is broken please copy the bridge to make it so its equal to 5 blocks  with this #\n";
  cout << bridge2 << endl;
  cin >> bridge2;
  if(bridge2.length() == 5){
    cout << "Great Job\n";
  }else{
    cout << "Not safe go again\n";
  }
  while(bridge2.length() != 5){
    cout << "A bridge is broken please copy the bridge to make it so its equal to 5 blocks with this #\n";
    if(bridge2.length() ==  5){
      cout << "Great Job\n";
    }
  }
cout << "You now have freeplay now type a bridge type leave to stop code\n";
    cin.ignore(); // Clear the buffer
    getline(cin, fbridge);

    if (fbridge.find(' ') != std::string::npos) {
        std::cout << "Bridge is not safe" << std::endl;
         cout << "Would you like to leave type leave to leave and something else for no\n";
    } else {
        std::cout << "Brige is safe" << std::endl;
         cout << "Would you like to leave type leave to leave and something else for no\n";
    }
    cin >> leave;
    if(leave == "leave" || leave == "Leave"){
        cout << "GoodBye\n";
    }else{
        cout << "Ok\n";
    }
     cout << "Would you like to leave type leave to leave and something else for no\n";
    while(leave != "leave"){
        cout << "You now have freeplay now type a bridge type leave to stop code\n";
         cin.ignore(); // Clear the buffer
    getline(cin, fbridge);

    if (fbridge.find(' ') != std::string::npos) {
        std::cout << "Bridge is not safe" << std::endl;
         cout << "Would you like to leave type leave to leave and something else for no\n";
    } else {
        std::cout << "Bridge is safe" << std::endl;
         cout << "Would you like to leave type leave to leave and something else for no\n";
    }
    cin >> leave;
  
    if(leave == "leave" || leave == "Leave"){
        cout << "Ok\n";
    }
    }

    return 0;
}
