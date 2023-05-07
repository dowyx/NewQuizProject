#include <iostream>
#include <iomanip>
using namespace std;
int main (){

system("cls");
// used either int or char it dipends what is prefrence for so i used char to stored and aslo to use a letter choices
char ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;
int score = 0;
float total;



    cout<<endl
        <<endl
        <<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<"\t\t\t\t\t\t\t|------------ Computer Programming -----------|" <<endl;   
    cout<<"\t\t\t\t\t\t\t|=============================================|" <<endl;
    cout<<endl
        <<endl
        <<endl;

cout<<"Q1: What is language use for the database? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans1;

// i used if else statement for the adding points. because it is to make it and less hassle for me.

if(ans1 == 'A' || ans1 == 'a'){
    cout<<"\t\t\tCorrect answer" <<endl;
    cout<<endl;
    score++;
}
else if(ans1 == '0'){
    cout<<"\t\t\tMySQL" <<endl;
    cout<<endl;
    
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}






cout<<"Q2: What is language use for the GameDev? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans2;

if (ans2 == 'D' || ans2 == 'd')
{
  cout<<"\t\t\tCorrect Answer";
  cout<<endl;
  score++;
}
else if (ans2 == '0')
{
  cout<<"\t\t\tC++" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<endl;
cout<<"Q3: What is the structure of the Website? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer"<< endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans3;

if (ans3 == 'B' || ans3 == 'b')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans3 == '0')
{
  cout<<"\t\t\tHTML"<<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q4: What is use for styling the Website? "<<endl;
cout<<endl;
cout<<"a- MySQL" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl ;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans4;

if (ans4 == 'C' || ans4 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans4 == '0')
{
  cout<<"\t\t\tCSS" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q5: What is use for Machine and Computer Vision? "<<endl;
cout<<endl;
cout<<"a- Python" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans5;

if (ans5 == 'A' || ans5 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans5 == '0')
{
  cout<<"\t\t\tPython" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<"Q6: What is the opposite language of C++? "<<endl;
cout<<endl;
cout<<"a- Java" <<endl;
cout<<"b- HTML" <<endl;
cout<<"c- C Language" <<endl;
cout<<"d- C++" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans6;

if (ans6 == 'C' || ans6 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans6 == '0')
{
  cout<<"\t\t\tC Language" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q7: What is the use of CSS? "<<endl;
cout<<endl;
cout<<"a- For database " <<endl;
cout<<"b- For Styling" <<endl;
cout<<"c- For Function" <<endl;
cout<<"d- For Object Oriented" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer"<< endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans7;

if (ans7 == 'B' || ans7 == 'b')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans7 == '0')
{
  cout<<"\t\t\tFor Styling" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<"Q8: HTML stands for? "<<endl;
cout<<endl;
cout<<"a- Hyper Text Market Language " <<endl;
cout<<"b- Hyper Text Markup Language" <<endl;
cout<<"c- Hyper Text Marketing Language" <<endl;
cout<<"d- Hyper Text Mark Language" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans8;

if (ans8 == 'A' || ans8 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans8 == '0')
{
  cout<<"\t\t\tHyper Text Markup Language" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q9: What is CSS stands for? "<<endl;
cout<<endl;
cout<<"a- Cascading Style Sheets " <<endl;
cout<<"b- Cascading Styling Sheets" <<endl;
cout<<"c- Cascading Styler Sheets" <<endl;
cout<<"d- Cascading Styling Sheet" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans9;

if (ans9 == 'A' || ans9 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans9 == '0')
{
  cout<<"\t\t\tCascading Style Sheets" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q10: What is the programming language among them? "<<endl;
cout<<endl;
cout<<"a- HTML " <<endl;
cout<<"b- Javascript" <<endl;
cout<<"c- CSS" <<endl;
cout<<"d- HTTP" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans10;

if (ans10 == 'B' || ans10 == 'b')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans10 == '0')
{
  cout<<"\t\t\tJavascript" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q11: Who develop C++ language? "<<endl;
cout<<endl;
cout<<"a- Dennis Ritchie " <<endl;
cout<<"b- Sun Microsystemst" <<endl;
cout<<"c- Bjarne Stroustrup" <<endl;
cout<<"d- Brendan Eich" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans11;

if (ans11 == 'C' || ans11 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans11 == '0')
{
  cout<<"\t\t\tBjarne Stroustrup" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}




cout<<"Q12: What is the based language of Java? "<<endl;
cout<<endl;
cout<<"a- Python/Ruby " <<endl;
cout<<"b- Javascript/React" <<endl;
cout<<"c- C/C++" <<endl;
cout<<"d- HTML/CSS" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans12;

if (ans12 == 'C' || ans12 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans12 == '0')
{
  cout<<"\t\t\tC/C++" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q13: What is OOP stands for? "<<endl;
cout<<endl;
cout<<"a- Object Oriented Programming " <<endl;
cout<<"b- Obeject Oppo Program" <<endl;
cout<<"c- Object Orient Programming" <<endl;
cout<<"d- Objective Oriented Programming" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans13;

if (ans13 == 'A' || ans13 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans13 == '0')
{
  cout<<"\t\t\tObject Oriented Programming" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}



cout<<"Q14: Who develop C language? "<<endl;
cout<<endl;
cout<<"a- Dennis Ritchie " <<endl;
cout<<"b- Bjarne Stroustrup" <<endl;
cout<<"c- Brendan Eich" <<endl;
cout<<"d- Sun Microsystems" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans14;

if (ans14 == 'A' || ans14 == 'a')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans14 == '0')
{
  cout<<"\t\t\tDennis Ritchie" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


cout<<"Q15: What is endl or //n stands for in C++? "<<endl;
cout<<endl;
cout<<"a- New length " <<endl;
cout<<"b- New lengths" <<endl;
cout<<"c- New Line" <<endl;
cout<<"d- New League" <<endl;
cout<<endl;
cout<<"\t\t\tEnter 0 to view the answer" <<endl;
cout<<endl;
cout<<" Enter your Answer: ";
cin>>ans15;

if (ans15 == 'C' || ans15 == 'c')
{
  cout<<"\t\t\tCorrect Answer"<<endl;
  cout<<endl;
  score++;
}
else if (ans15 == '0')
{
  cout<<"\t\t\tNew Line" <<endl;
  cout<<endl;
}
else
{
  cout<<"\t\t\tWrong answer"<<endl;
  cout<<endl;
}


  cout<<"=================================================================================================================================="<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t\t\t\t\t Total score: " <<score;
	cout<<endl;
	
  total = (static_cast<float>(score) / 15 ) * 100;
	
	cout<<endl;
  cout<<"\t\t\t\t\t Total average is: "<< fixed << setprecision(2) << total << "%" << endl;
  cout<<endl;

// condition are need to be met..

if(score <= 4 && score == 6)
  cout<<"\t\t\t\t\t\tFailed!"<<endl;

if(score >= 7 && score == 9)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(score >= 10 && score == 12)
  cout<<"\t\t\t\t\t\tPass! "<<endl;
  cout<<endl;

if(score >= 15)
  cout<<"\t\t\t\t\t\tPass!"<<endl;

cout<<"=================================================================================================================================="<<endl;
}
	
	return 0;
}

