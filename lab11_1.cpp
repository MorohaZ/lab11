#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std ;

bool charkEnter(int& counter){
    if(cin.get()=='\n'){
        counter++;
        if(counter==3){
            return true;
        }
    }
    return false;
}

char randomGrad(){
    const char grades[]={'A', 'B', 'C', 'D', 'F','W'};
    return grades[rand()%sizeof(grades)]; 
}

char randpl(){
    const char pl[] = {'+',' '};
    return pl[rand()%sizeof(pl)];
}

int main(){
    cout<<"Press Enter 3 times to reveal your future.\n";
     int entercount = 0;
     char grade;

     srand(time(0));

     while (!charkEnter(entercount))
     {
        
     }
     char graderand = randomGrad();
     string pls ; 
     if (graderand=='B'||graderand=='C'||graderand=='D'){
        pls = randpl();
        if(pls == "+"){
            pls =pls+" ";
        }
     }
     else{
        pls = " ";
     }
    
     cout << "You will get " << graderand << pls << "in this 261102.";
}