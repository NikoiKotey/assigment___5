#include <iostream>
#include <fstream>

using namespace std;

struct studentdetails{
int Id;
string name;
string gender;
int score;
char grade;

};

char getGrade(int score){
    char grade;
    if (score >=80 && score <=100){
        grade = 'A';
        }else if(score >=70 && score<=79){
            grade ='B';
        }else if(score >=60 && score<=69){
            grade = 'C';
        }else if(score >=50 && score<=59){
            grade = 'D';
        }else if(score >=40 && score<=49){
            grade = 'E';
        }else if(score >=0 && score <=39){
            grade = 'F';
        }

        return grade;
}

int main()
{
    studentdetails details[5];

    for (int i=0;i<5;i++)
    {
        cout <<"Enter Student " << i+1 << "'s Name: ";
        cin >> details [i] .name;
        cout <<"Enter Student " << i+1 << " 's Id: ";
        cin >> details [i] .Id;
        cout << "Enter Student " << i+1 << " 's Gender:";
        cin >> details [i] .gender;
        cout << "Enter Student" << i+1 << " 's Score:";
        cin >> details [i] .score;
        details[i].grade = getGrade(details[i].score);

    }

    fstream file;
    file.open ("Finale.txt");
    file << "Id\t\tname\tgender\tage\tscore\tgrade"<<endl;
    for(int i=0;i<5; i++){

        file << details[i]. Id << "\t"<<details[i].name <<"\t"<<details[i].gender <<"\t" <<"\t" <<details[i].score << "\t"<<details[i].grade;
         return 0;
    }


}



