#include <iostream>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds



using namespace std;


int main()
{
    cout << "-----------------------------" << '\n';
    cout << "ANNO SPATIUM CREATION TESTBED." << '\n';
    cout << "-----------------------------" << '\n';

    srand((unsigned) time(NULL)); //Set the combat roll seed to none.

CHARCREA :

    int playerhealth(20);  //Health reset
    int choice( 0 );
    int insanity( 0 );     //Insanity reset
    string firstname;
    string lastname;

    cout << "Please enter your firstname." << '\n';
    cout << "" << '\n';

          cin >> firstname;

    cout << "" << '\n';
    cout << "Please enter your lastname." << '\n';
    cout << "" << '\n';

          cin >> lastname;

    cout << "" << '\n';
    cout << "Hello " << firstname << " " << lastname << ". How old are you?";
    cout << "" << '\n' << '\n';



ASKAGE : {
        int age(0);
        cin >> age;

        cout << "" << '\n';


        if (age >= 99) {
            cout << "Invalid age entered. Please don't fuck with the program, you faggot.";
            cout << "" << '\n' << '\n';
            goto ASKAGE;
        }

        if (age < 99) {
            cout << "You were born in " << 4406 - age << " A.S." ;
            if (age < 15) {
                cout << "During the time that we calls : Rhiberia Ascendancy. An elusive empire resided in the great nothing of the rim, and the great sacking of Tampa Citadel, causing the death of Terran Apexes ";
            }
            if (age > 15 && age < 40) {
                cout << "During the creation of Avalon Directorate, after the ambush of Roxbury. The outer rim was locked in a stalemate after the pendulum outbreak, and the Xabran expansion to New Gettysburg - now known as Argus Prime";
            }
            if (age > 40) {
                cout << "During the golden age of mankind. When the Terran was a federation and not a sovereign. When the silkroad stretched across the outer rim, bringing in endless prosperity.";
            }
        }
}//======================================================ASKAGE END BRACKETT===============================================================

CHARYN : {
    cout << "" << '\n' << '\n';
    cout << "Is everything in order? (Y/N)"<< '\n';
    string yn;
    cin >> yn;

            if (yn == "n" || yn == "N") {
                goto CHARCREA;
                }

            if (yn != "n" && yn != "N" && yn != "y" && yn != "Y") {
                cout << "" << '\n';
                cout << "You Always This Stupid Or Is Today A Special Occasion?";
                goto CHARYN;
                }

            if (yn == "y" || yn == "Y") {
                cout << string(50, '\n');
                }

}//======================================================CHARYN END BRACKETT===============================================================

CH_WAKEUP : {

        cout << firstname << " wakes up in a cold, dark, malfunction vertical cryopod. At first you feel numbed, then, shiver sets in. What do you do?" << '\n'<< '\n';
        cout << "[1] Look around"<< '\n';
        cout << "[2] Try to pry your way out"<< '\n';
        cout << "[3] Go back to sleep"<< '\n';
        cin >> choice;

              if (choice == 1) {
                    cout << "You see a loose beneath your feat that look old and decayed enough to push through" << '\n';
                    goto CH_PUSHFLR;
                    }

              if (choice == 2) {
                    cout << "Outside of cryopod is full of water" << '\n';
                    goto CH_OCEAN;
                    }

              if (choice == 3) {
                    goto CH_SCREAM;
                    }

              if (choice != 1 && choice != 2 && choice != 3) {
                    cout << "Wrong answer, Try again"  << '\n';
                    goto CH_WAKEUP;
                    }



        CH_SCREAM :
                insanity = insanity + 1;//horrorlevel + 1
                cout << "You hear a woman screaming outside your pod, which wakes you up" << '\n'<< '\n';
                cout << "[1] Look around"<< '\n';
                cout << "[2] Try to pry your way out"<< '\n';
                cin >> choice;

                    if (choice == 1) {
                        cout << "You see a loose beneath your feat that look old and decayed enough to push through, although it feels a bit sticky with unknown substance." << '\n';
                        goto CH_PUSHFLR;
                        }

                    if (choice == 2) {
                        cout << "You try with all your might to yank open the pod lid, it budged a little. You see dimly lit corridor outside the pod, and there is faint rotten smell." << '\n';
                        insanity = insanity + 1;
                        goto CH_ROTTEN;
                        }

                    if (choice != 1 && choice != 2) {
                        cout << "Wrong answer, Try again"  << '\n';
                        goto CH_WAKEUP;
                        }
        CH_ROTTEN :
                cout << "You broke out of the pod, you realizes that the smell came from the numerous pods around the room. It seem that your is the last to fail."<< '\n'<< '\n';
                goto CHAR_SPECIALISATION1;

        CH_PUSHFLR :
                cout << "So you gather your strength and kick straight through the metal panel underneath you, the panel is filmsy, you fell through it easily into the empty room on the lower floor."<< '\n';
                //cout << "[DEVCHECK] Insanity = " << insanity << '\n';

}//======================================================SLEEP SEQUENCES END BRACKETT======================================================

CH_OCEAN : {
    cout << "The cryopod is leaking. The pod starts to fill up with bone-chilling cold liquid." << '\n'<< '\n';
    cout << "[1] Scream for help" << '\n';
    cout << "[2] Try to break the glass" << '\n';
    cout << "[3] Try to open cryopod door" << '\n';
    cout << "[4] You try to tell yourself is just a dream and try to wake up" << '\n';
    cin >> choice;

            if (choice == 1) {
                    cout << "No one answer your call" << '\n';
                    goto CH_OCEANOUTBREAK1;
                    }

            if (choice == 2) {
                    cout << "Liquid flow in while you stagger out from a pod" << '\n';
                    goto CH_OCEANOUTBREAK2;
                    }

            if (choice == 3) {
                    cout << "You try to open it but the door get stuck" << '\n';
                    }

            if (choice == 4) {
                    cout << "No, it is not." << '\n';
                    goto CH_SCREAM;
                    }

                  if (choice != 1 && choice != 2) {
                    cout << string(50, '\n');
                    cout << "You try your best but liquid leaking fast till it fully cover your head, You drown, as the water fill your lung and your consciousness drifts away...." << '\n'<< '\n';
                    insanity = insanity + 5;
                    std::this_thread::sleep_for (std::chrono::milliseconds(1000));
                    cout << "and then you died..." << '\n';
                    goto CH_SCREAM;
                    }

  CH_OCEANOUTBREAK1 :
    cout << "Cold liquid still leaking, You lose your hope waiting for someone to help" << '\n'<< '\n';
    cout << "[1] Pray" << '\n';
    cout << "[2] Try to break the glass" << '\n';
    cin >> choice;

          if (choice == 1) {
                    cout << "You hear a robonic sound from your bracelet" << '\n';
                    goto CH_AI;
                    }

          if (choice == 2) {
                    cout << "Liquid flow in while you stagger out from a pod" << '\n';
                    goto CH_OCEANOUTBREAK2;
                    }

          if (choice != 1 && choice != 2) {
                    cout << string(50, '\n');
                    cout << "You try your best but liquid leaking fast till it fully cover your head, You drown, as the water fill your lung and your consciousness drifts away...." << '\n'<< '\n';
                    insanity = insanity + 5;
                    std::this_thread::sleep_for (std::chrono::milliseconds(1000));
                    cout << "and then you died..." << '\n';
                    goto CH_SCREAM;
                    }

  CH_OCEANOUTBREAK2 :
    cout << "You try swiming up to the surface but your head hit the roof of metal plate" << '\n';
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "Liquid get in your mouth through your tongue, it salty and dry" << '\n';
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "You can rest your breathe here but you realize that your ship was sink under ocean" << '\n'<< '\n';
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "On the right side you see a sign 'Bridge' rise" << '\n';
    std::this_thread::sleep_for (std::chrono::milliseconds(500));
    cout << "But on the left side, corridor " << '\n'<< '\n';
    cout << "[1] Go right" << '\n';
    cin >> choice;

          if (choice == 1) {
                    cout << "Go right" << '\n';
                    goto CHAR_SPECIALISATION2;
                    }

          if (choice != 1) {
                    cout << "Wrong answer, Try again"  << '\n';
                    goto CH_OCEANOUTBREAK2;
                    }

  CH_AI :
  std::this_thread::sleep_for (std::chrono::seconds(1));
    cout << "Hello" << firstname << ". My name is Zahra, I will guide you on your journey" << '\n';
    cout << "[1] I need help" << '\n';
    cout << "[2] I have emergency situation" << '\n';
    cout << "[3] Try to break the glass" << '\n';
    cout << "[4] Call someone that can help me" << '\n';
    cin >> choice;

            if (choice == 1) {
              cout << "What kind of help do you need? I will assist you." << '\n';
              goto CH_ZAHRA;
              }

            if (choice == 2) {
              cout << "What kind of situation do you have?, I will assist you." << '\n';
              goto CH_ZAHRA;
              }

            if (choice == 3) {
              cout << "Liquid flow in while you stagger out from a pod" << '\n';
              goto CH_OCEANOUTBREAK2;
              }

            if (choice == 4) {
              cout << "There is no signal from other crew member, I will assist you." << '\n';
              goto CH_ZAHRA;
              }

            if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
              cout << "Wrong answer, Try again"  << '\n';
              goto CH_AI;
              }

  CH_ZAHRA :
    cout << "From my evaluate system you are now sink under ocean 50 meters" << '\n';
    std::this_thread::sleep_for (std::chrono::seconds(1));
    insanity = insanity + 2;
    cout << "I recommend you to break the cryopod glass and go to the surface" << '\n'<< '\n';
    goto CH_OCEANOUTBREAK2;

}//======================================================OCEAN SEQUENCE END BRACKETT=======================================================

CHAR_SPECIALISATION1 : {
    int hacking ( 1 );
    int marksmanship ( 1 );
    int melee ( 1 );
    int computer ( 1 );
    int engineering ( 1 );
    int piloting ( 1 );
    cout << "Your head hurts a little as the effect of cryopod wears off, you start to remember about your past"<< '\n'<< '\n';
    cout << "[1] I am a Bounty Hunter. I hunts down fugitive with my mind and high power firearms."<< '\n';
    cout << "[2] I am a Computer Engineering working for Marcon Electronic Systems computer and software is my thing."<< '\n';
    cout << "[3] I am a Security Guard at GastroBiz in london."<< '\n'<< '\n';
    cout << "[4] I am a Freelancer who wandered around Terran space. I know how to handle myself with a gun."<< '\n';
    cout << "[5] I am a Labourer. My job mostly involves using my muscle and repairing skill."<< '\n';
    cout << "[6] I am a Nomad who can manipulate matters with my mind, if I focus hard enough."<< '\n'<< '\n';
    cin >> choice;

        if (choice == 1) {
              cout << "PSIONIC : HYPER SENSITIVITY - PSIONIC DETECTION ADDED" << '\n';
              std::this_thread::sleep_for (std::chrono::milliseconds(500));
              cout << "MARKSMANSHIP SKILL ADDED" << '\n';
              int marksmanship ( 5 );
              int psionic ( 1 );
              insanity = insanity + 5;
              goto CH_CORRIDOR1;
              }

        if (choice == 2) {
              cout << "COMPUTER SKILL ADDED" << '\n';
              int computer ( 5 );
              std::this_thread::sleep_for (std::chrono::milliseconds(500));
              cout << "HACKING SKILL ADDED" << '\n';
              int hacking ( 5 );
              int psionic ( 0 );
              goto CH_CORRIDOR1;
              }

        if (choice == 3) {
              cout << "MELEE SKILL ADDED" << '\n';
              int melee ( 2 );
              std::this_thread::sleep_for (std::chrono::milliseconds(500));
              cout << "MARKSMANSHIP SKILL ADDED" << '\n';
              int marksmanship ( 2 );
              int psionic ( 0 );
              goto CH_CORRIDOR1;
              }

        if (choice == 4) {
              cout << "PILOTING SKILL ADDED" << '\n';
              int piloting ( 5 );
              std::this_thread::sleep_for (std::chrono::milliseconds(500));
              cout << "MARKSMANSHIP SKILL ADDED" << '\n';
              int marksmanship ( 5 );
              int psionic ( 0 );
              goto CH_CORRIDOR1;
              }

        if (choice == 5) {
              cout << "ENGINEERING SKILL ADDED" << '\n';
              int engineering ( 5 );
              std::this_thread::sleep_for (std::chrono::milliseconds(500));
              cout << "MELEE SKILL ADDED" << '\n';
              int melee ( 5 );
              int psionic ( 0 );
              goto CH_CORRIDOR1;
              }

        if (choice == 6) {
              cout << "PSIONIC : MATTER MANIPULATION ADDED" << '\n';
              int psionic ( 1 );
              insanity = insanity + 10;
              goto CH_CORRIDOR1;
              }

        if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6) {
              cout << "Wrong answer, Try again"  << '\n';
              goto CHAR_SPECIALISATION1;
              }

}//======================================================SPEC 1 END BRACKETT===============================================================

CHAR_SPECIALISATION2 : {
   int hacking ( 1 );
   int marksmanship ( 1 );
   int melee ( 1 );
   int computer ( 1 );
   int engineering ( 1 );
   int piloting ( 1 );
   cout << "Your head hurts a little as the effect of cryopod wears off, you start to remember about your past"<< '\n'<< '\n';
   cout << "[1] I am a Bounty Hunter. I hunts down fugitive with my mind and high power firearms."<< '\n';
   cout << "[2] I am a Computer Engineering working for Marcon Electronic Systems computer and software is my thing."<< '\n';
   cout << "[3] I am a Security Guard at GastroBiz in london."<< '\n'<< '\n';
   cout << "[4] I am a Freelancer who wandered around Terran space. I know how to handle myself with a gun."<< '\n';
   cout << "[5] I am a Labourer. My job mostly involves using my muscle and repairing skill."<< '\n';
   cout << "[6] I am a Nomad who can manipulate matters with my mind, if I focus hard enough."<< '\n'<< '\n';
   cin >> choice;

       if (choice == 1) {
             cout << "PSIONIC : HYPER SENSITIVITY - PSIONIC DETECTION ADDED" << '\n';
             std::this_thread::sleep_for (std::chrono::milliseconds(500));
             cout << "MARKSMANSHIP SKILL ADDED" << '\n';
             int marksmanship ( 5 );
             int psionic ( 1 );
             insanity = insanity + 5;
             goto CH_CORRIDOR2;
             }

       if (choice == 2) {
             cout << "COMPUTER SKILL ADDED" << '\n';
             int computer ( 5 );
             std::this_thread::sleep_for (std::chrono::milliseconds(500));
             cout << "HACKING SKILL ADDED" << '\n';
             int hacking ( 5 );
             int psionic ( 0 );
             goto CH_CORRIDOR2;
             }

       if (choice == 3) {
             cout << "MELEE SKILL ADDED" << '\n';
             int melee ( 2 );
             std::this_thread::sleep_for (std::chrono::milliseconds(500));
             cout << "MARKSMANSHIP SKILL ADDED" << '\n';
             int marksmanship ( 2 );
             int psionic ( 0 );
             goto CH_CORRIDOR2;
             }

       if (choice == 4) {
             cout << "PILOTING SKILL ADDED" << '\n';
             int piloting ( 5 );
             std::this_thread::sleep_for (std::chrono::milliseconds(500));
             cout << "MARKSMANSHIP SKILL ADDED" << '\n';
             int marksmanship ( 5 );
             int psionic ( 0 );
             goto CH_CORRIDOR2;
             }

       if (choice == 5) {
             cout << "ENGINEERING SKILL ADDED" << '\n';
             int engineering ( 5 );
             std::this_thread::sleep_for (std::chrono::milliseconds(500));
             cout << "MELEE SKILL ADDED" << '\n';
             int melee ( 5 );
             int psionic ( 0 );
             goto CH_CORRIDOR2;
             }

       if (choice == 6) {
             cout << "PSIONIC : MATTER MANIPULATION ADDED" << '\n';
             int psionic ( 1 );
             insanity = insanity + 10;
             goto CH_CORRIDOR2;
             }

       if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6) {
             cout << "Wrong answer, Try again"  << '\n';
             goto CHAR_SPECIALISATION2;
             }

}//======================================================SPEC 2 END BRACKETT===============================================================

CH_CORRIDOR1 :

CH_CORRIDOR2 :

    return 0;
}

//Function Checklist:
//Audio and sound
//Health & Combat damage generation
//Random Text Generation
//lol Jumpscare
//Image insertion
//UI UX

//may change IO stream later


//cout << "[1] I am " << firstname;
//cout << ". a Freelancer who wandered around Terran space. I know how to handle myself with a gun."<< '\n';
//cout << "[2] I am " << firstname;
//cout << ". a Labourer. My job mostly involves using my muscle and repairing skill."<< '\n';
//cout << "[2] I am " << firstname;
//cout << ". a Nomad who can manipulate matters with my mind, if I focus hard enough."<< '\n'<< '\n';
