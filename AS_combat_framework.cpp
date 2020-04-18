#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

using namespace std;



int main()
{
      srand((unsigned) time(NULL));




    cout << "Enter combat skill level" << '\n';
    int skill(0);
    int enemyskill(3);
    int enemyhealth(20);
    int playerhealth(20);
    int combatchoice(0);
    cin >> skill;

cout << "You encounter an [enemy] blocking your path." <<'\n';

COMBATLOOPA :

    cout << "[1] Attack"<< '\n';
    cin >> combatchoice;

 cout << '\n';


      printf("Calculating combat outcome \n ");
      int result = 1 + (rand() % 20);
 cout << '\n';

    if ((result + skill)>=10) {
      cout << "Hit suceess [ ( roll result : " << result << " + Skill : " << skill << " ) > Threshold : 10 ]"<< '\n';
      enemyhealth = enemyhealth - 5;
      cout << "5 Damage dealt   Enemy health remaining ("<<enemyhealth<<")"<< '\n'<< '\n';
    }
    if ((result + skill)<10) {
      cout << "Hit Failed [ ( roll result : " << result << " + Skill :" << skill << " ) < Threshold : 10 ]"<< '\n'<< '\n';
    }

    if (enemyhealth < 1) {
      cout << "The [enemy] is dead"<< '\n'<< '\n';
          cout << "----------------------------------------------------------------"<< '\n';
      return 0;
    }

 std::this_thread::sleep_for (std::chrono::milliseconds(500));

cout << "[enemy] swing his weapon at you"<< '\n'<< '\n';
      int result2 = (rand() % 20)+1;

      if ((result2 + enemyskill)>=10) {
        cout << "Hit suceess [ ( roll result : " << result2 << " + Skill : " << enemyskill << " ) > Threshold : 10 ]"<< '\n';
        playerhealth = playerhealth - 5;
        cout << "5 Damage taken   Your health remaining ("<<playerhealth<<")"<< '\n'<< '\n';
      }
      if ((result2 + enemyskill)<10) {
        cout << "Hit Failed [ ( roll result : " << result2 << " + Skill :" << enemyskill << " ) < Threshold : 10 ]"<< '\n'<< '\n';
      }

      if (playerhealth < 1) {
        cout << "YOU DIED!"<< '\n'<< '\n';
            cout << "----------------------------------------------------------------"<< '\n';
        return 0;
      }

    cout << "----------------------------------------------------------------"<< '\n';

goto COMBATLOOPA;

    return 0;

    }


//may change IO stream later
