#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int randomNUM=0;
    int gues=0;
    int attempts=0;
    //Genertare number blw 1to 100...
    srand(time(0));
    randomNUM=rand() % 100+1;
    cout<<"NUMBER GUESSING GAME" <<endl;
    cout<<"I have selected a number blw 1 and 100" << endl;
    cout<<"try to guess it"<<endl;
    do{
        cout<<"\nEnter your guess: ";
        cin>>gues;
        attempts++;
        if(gues>randomNUM){
            cout<<"TOO HIGH"<<endl;
        }
        else if(gues < randomNUM){
            cout<<" TOO  LOW"<<endl;
        }
        else{
            cout<<"CONGRATULATIONS "<<endl;
        }
        cout<<"attempts: "<<attempts <<endl;
    } while(gues !=randomNUM);
    cout<<"thakyou"<<endl;
}


