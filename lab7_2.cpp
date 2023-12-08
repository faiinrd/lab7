#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    int ID,GEAR;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> ID;
    cin.ignore();
    GEAR = ID/10000000;
    GEAR -= 12;
    cout << "Fahsai: I think you may be GEAR " << GEAR << ". I have a free movie ticket for you.\n";

    string ans1;
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,ans1);

    string ans2;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,ans2);
    cout << "Fahsai: " << ans2 << "....that is OK!!! I'm looking forward to watching " << ans1 << " with you.\n";

    string ans3;
    cout << name << ": ";
    cin >> ans3;
    cin.ignore();
    cout << "Fahsai: 555+ see you " << ans2 << ". Bye Bye \\(^ ^)/";

    return 0;
}