#include <iostream>
#include <string>
#include <climits>
#include <cfloat>

using namespace std;

int main(){
    
    const float cost_per_room {32.5};
    const float taxe_rate {0.06};
    
    cout << "Welcome to the cleaning service!" << endl;
    cout << "How many numbers would you like to be cleaned? ";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    cout << "Price per room is " << cost_per_room << "$." << endl;
    cout << "Tax rate is: " << taxe_rate << "$." << endl;
    cout << "Total cost is: " << cost_per_room*number_of_rooms + cost_per_room*number_of_rooms*taxe_rate << "$." << endl;
    
}