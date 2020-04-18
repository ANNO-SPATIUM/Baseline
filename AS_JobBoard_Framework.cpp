#include <iostream>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

using namespace std;
int main() {

int choice(0);
int jobpick(0);
int jobtypeint1(0);
int jobtypeint2(0);
int jobtypeint3(0);
int jobnameint1(0);
int jobnameint2(0);
int jobnameint3(0);
int jobpayoutint1 (0);
int jobpayoutint2 (0);
int jobpayoutint3 (0);

JOBBOARD :

  srand((unsigned) time(0));
    cout << '\n' ;
    cout << "-------------------------"<< '\n' ;
    printf("CONZUMEL HUB :: JOB BOARD \n");
    cout << "-------------------------"<< '\n'<< '\n' ;
    jobtypeint1 = 1 + (rand() % 5);
    jobnameint1 = 1 + (rand() % 5);

    jobtypeint2 = 1 + (rand() % 5);
    jobnameint2 = 1 + (rand() % 5);

    jobtypeint3 = 1 + (rand() % 5);
    jobnameint3 = 1 + (rand() % 5);


    cout << "[1] " << jobtypeint1 << jobnameint1 <<'\n' ;

    switch (jobtypeint1) {
     case 1:
         printf("ASSASSINATION :: ");
         break;
     case 2:
         printf("SMUGGLING :: ");
         break;
     case 3:
         printf("DELIVERY :: ");
         break;
     case 4:
         printf("PROTECTION :: ");
         break;
     case 5:
         printf("DATA RETRIEVAL :: ");
         break;
     default:
         printf("Error");
         break;
     }
     switch (jobnameint1) {
      case 1:
          printf("SAGON KRUGER");
          jobpayoutint1 = 1000 + (rand() % 1000);
          cout << " :: " << jobpayoutint1 ;
          cout << " Credits" <<'\n' ;
          break;
      case 2:
          printf("STREET");
          jobpayoutint1 = 100 + (rand() % 500);
          cout << " :: " << jobpayoutint1 ;
          cout << " Credits" <<'\n' ;
          break;
      case 3:
          printf("JEDDHA MANUFACTORUM");
          jobpayoutint1 = 1500 + (rand() % 1000);
          cout << " :: " << jobpayoutint1 ;
          cout << " Credits" <<'\n' ;
          break;
      case 4:
          printf("TAHIR INCORPORATED");
          jobpayoutint1 = 800 + (rand() % 1000);
          cout << " :: " << jobpayoutint1 ;
          cout << " Credits" <<'\n' ;
          break;
      case 5:
          printf("LOCAL AUTHORITY");
          jobpayoutint1 = 500 + (rand() % 1000);
          cout << " :: " << jobpayoutint1 ;
          cout << " Credits" <<'\n' ;
          break;
      default:
          printf("Error");
          break;
      }


    std::this_thread::sleep_for (std::chrono::milliseconds(500));

    cout << "[2] " << jobtypeint2 << jobnameint2 <<'\n' ;

    switch (jobtypeint2) {
     case 1:
         printf("ASSASSINATION :: ");
         break;
     case 2:
         printf("SMUGGLING :: ");
         break;
     case 3:
         printf("DELIVERY :: ");
         break;
     case 4:
         printf("PROTECTION :: ");
         break;
     case 5:
         printf("DATA RETRIEVAL :: ");
         break;
     default:
         printf("Error");
         break;
     }
    switch (jobnameint2) {
     case 1:
         printf("SAGON KRUGER");
         jobpayoutint2 = 1000 + (rand() % 1000);
         cout << " :: " << jobpayoutint2 ;
         cout << " Credits" <<'\n' ;
         break;
     case 2:
         printf("STREET");
         jobpayoutint2 = 100 + (rand() % 500);
         cout << " :: " << jobpayoutint2 ;
         cout << " Credits" <<'\n' ;
         break;
     case 3:
         printf("JEDDHA MANUFACTORUM");
         jobpayoutint2 = 1500 + (rand() % 1000);
         cout << " :: " << jobpayoutint2 ;
         cout << " Credits" <<'\n' ;
         break;
     case 4:
         printf("TAHIR INCORPORATED");
         jobpayoutint2 = 800 + (rand() % 1000);
         cout << " :: " << jobpayoutint2 ;
         cout << " Credits" <<'\n' ;
         break;
     case 5:
         printf("LOCAL AUTHORITY");
         jobpayoutint2 = 500 + (rand() % 1000);
         cout << " :: " << jobpayoutint2 ;
         cout << " Credits" <<'\n' ;
         break;
     default:
         printf("Error");
         break;
     }

    std::this_thread::sleep_for (std::chrono::milliseconds(500));

    cout << "[3] " << jobtypeint3 << jobnameint3 <<'\n' ;

       switch (jobtypeint3) {
        case 1:
            printf("ASSASSINATION :: ");
            break;
        case 2:
            printf("SMUGGLING :: ");
            break;
        case 3:
            printf("DELIVERY :: ");
            break;
        case 4:
            printf("PROTECTION :: ");
            break;
        case 5:
            printf("DATA RETRIEVAL :: ");
            break;
        default:
            printf("Error");
            break;
        }
        switch (jobnameint3) {
         case 1:
             printf("SAGON KRUGER");
             jobpayoutint3 = 1000 + (rand() % 1000);
             cout << " :: " << jobpayoutint3 ;
             cout << " Credits" <<'\n' ;
             break;
         case 2:
             printf("STREET");
             jobpayoutint3 = 100 + (rand() % 500);
             cout << " :: " << jobpayoutint3 ;
             cout << " Credits" <<'\n' ;
             break;
         case 3:
             printf("JEDDHA MANUFACTORUM");
             jobpayoutint3 = 1500 + (rand() % 1000);
             cout << " :: " << jobpayoutint3 ;
             cout << " Credits" <<'\n' ;
             break;
         case 4:
             printf("TAHIR INCORPORATED");
             jobpayoutint3 = 800 + (rand() % 1000);
             cout << " :: " << jobpayoutint3 ;
             cout << " Credits" <<'\n' ;
             break;
         case 5:
             printf("LOCAL AUTHORITY");
             jobpayoutint3 = 500 + (rand() % 1000);
             cout << " :: " << jobpayoutint3 ;
             cout << " Credits" <<'\n' ;
             break;
         default:
             printf("Error");
             break;
         }

    std::this_thread::sleep_for (std::chrono::milliseconds(500));

cout << '\n' ;
cout << "Type 0 to return to the Hub"<< '\n' ;
//cout << "devcheck [1,2,3] type=" << jobtypeint1 << jobtypeint2 < jobtypeint3 << " name=" << jobnameint1 << jobnameint2 << jobnameint3 << '\n' ;
cin >> choice;

if (choice == 1) {
  jobpick = 1;
  goto JOBCHOICE1;
      cout << '\n' ;
  }

  if (choice == 2) {
    jobpick = 2;
    goto JOBCHOICE2;
        cout << '\n' ;
    }

    if (choice == 3) {
      jobpick = 3;
      goto JOBCHOICE3;
          cout << '\n' ;
      }

      if (choice == 0) {
        goto JOBBOARD;
            cout << '\n' ;
        }

JOBCHOICE1 :

  if (jobtypeint1 == 1) {
    cout << "[ASSASSINATION JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "[NAME] has been a thorn in our side for quite sometime, and the situation dictates that we need to remove him from the board. You will find him at [Location]. Good hunting."<< '\n';
        cout << jobpayoutint1 << " credits will be rewarded to you upon completion.''";
    cout << "                            -Faction representative."<< '\n';     switch (jobnameint1) {
  }
  if (jobtypeint1 == 2) {
    cout << "[SMUGGLING JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "We need [AMOUNT] of [OBJECT] delievered to [LOCATION] as soon as possible. We expect you to handle this with extreme discretion."<< '\n';
        cout << jobpayoutint1 << " credits will be rewarded to you upon completion.''";
    cout << "                            -Faction representative."<< '\n';
  }
  if (jobtypeint1 == 3) {
    cout << "[DELIVERY JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "We need [AMOUNT] of [OBJECT] delievered to a man name [NAME] at [LOCATION]. Please be mindful with the package."<< '\n';
        cout << jobpayoutint1 << " credits will be rewarded to you upon completion.''";
    cout << "                            -Faction representative."<< '\n';
  }
  if (jobtypeint1 == 4) {
    cout << "[PROTECTION JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "[NAME] life is in danger. Go to [LOCATION] and protect him at all cost. Your payment depends on his wellbeing."<< '\n';
        cout << jobpayoutint1 << " credits will be rewarded to you upon completion.''";
    cout << "                            -Faction representative."<< '\n';
  }
  if (jobtypeint1 == 5) {
    cout << "[DATA RETRIEVAL JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "We believe that the data which belongs to [NAME] will advance our agenda in this system. We need you to extract and deliver this sensitive information to us at [LOCATION]."<< '\n';
        cout << jobpayoutint1 << " credits will be rewarded to you upon completion.''";
    cout << "                            -Faction representative."<< '\n';
  }

return 0;


JOBCHOICE2 :
if (jobtypeint2 == 1) {
  cout << "[ASSASSINATION JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "[NAME] has been a thorn in our side for quite sometime, and the situation dictates that we need to remove him from the board. You will find him at [Location]. Good hunting."<< '\n';
      cout << jobpayoutint2 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint2 == 2) {
  cout << "[SMUGGLING JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "We need [AMOUNT] of [OBJECT] delievered to [LOCATION] as soon as possible. We expect you to handle this with extreme discretion."<< '\n';
      cout << jobpayoutint2 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint2 == 3) {
  cout << "[DELIVERY JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "We need [AMOUNT] of [OBJECT] delievered to a man name [NAME] at [LOCATION]. Please be mindful with the package."<< '\n';
      cout << jobpayoutint2 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint2 == 4) {
  cout << "[PROTECTION JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "[NAME] life is in danger. Go to [LOCATION] and protect him at all cost. Your payment depends on his wellbeing."<< '\n';
      cout << jobpayoutint2 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint2 == 5) {
  cout << "[DATA RETRIEVAL JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "We believe that the data which belongs to [NAME] will advance our agenda in this system. We need you to extract and deliver this sensitive information to us at [LOCATION]."<< '\n';
      cout << jobpayoutint2 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}

return 0;


JOBCHOICE3 :
if (jobtypeint3 == 1) {
  cout << "[ASSASSINATION JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "[NAME] has been a thorn in our side for quite sometime, and the situation dictates that we need to remove him from the board. You will find him at [Location]. Good hunting."<< '\n';
    cout << jobpayoutint3 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint3 == 2) {
  cout << "[SMUGGLING JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "We need [AMOUNT] of [OBJECT] delievered to [LOCATION] as soon as possible. We expect you to handle this with extreme discretion."<< '\n';
    cout << jobpayoutint3 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint3 == 3) {
  cout << "[DELIVERY JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "We need [AMOUNT] of [OBJECT] delievered to a man name [NAME] at [LOCATION]. Please be mindful with the package."<< '\n';
    cout << jobpayoutint3 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint3 == 4) {
  cout << "[PROTECTION JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "[NAME] life is in danger. Go to [LOCATION] and protect him at all cost. Your payment depends on his wellbeing."<< '\n';
    cout << jobpayoutint3 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';
}
if (jobtypeint3 == 5) {
  cout << "[DATA RETRIEVAL JOB ACCEPTED]" << '\n' << '\n';    std::this_thread::sleep_for (std::chrono::milliseconds(500));
  cout << "'We believe that the data which belongs to [NAME] will advance our agenda in this system. We need you to extract and deliver this sensitive information to us at [LOCATION]."<< '\n';
  cout << jobpayoutint3 << " credits will be rewarded to you upon completion.''";
  cout << "                            -Faction representative."<< '\n';

}


return 0;







}}
