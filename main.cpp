#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       phone
//  action 1:   sending call
phone.sendingCall();
//  action 2:   receving call
phone.recevingCall();
//  action 3:   taking picture
phone.takingPicture();
//  2)
//  Noun:       computer
//  action 1:   activates wifi
computer.activateWifi();
//  action 2:   laoding
computer.loading();
//  action 3:   shuts down
computer.shutdown();
//  3)
//  Noun:       washing machine
//  action 1:   washing
washer.washing();
//  action 2:   taking hot water
washer.takingHotWater();
//  action 3:   taking cold water
washer.takingColdWater();
//  4)         
//  Noun:       traffic light
//  action 1:   turns green
trafficLight.turnsGreen();
//  action 2:   turns yellow
trafficLight.turnsYellow();
//  action 3:   turns red
trafficLight.turnsRed();
//  5)         
//  Noun:       headphone Set
//  action 1:   turn up volume
headphoneSet.turnUpVolume();
//  action 2:   turn down volume
headphoneSet.turnDownVolume();
//  action 3:   enable noise cancellation  
headphoneSet.enableNoiseCancellation();
//  6)         
//  Noun:      microwave
//  action 1:  turns on fan
microwave.turnOnFan();
//  action 2:  turns off fan
microwave.turnOffFan();
//  action 3:  plays 5 beeps 
microwave.playsFiveBeeps(); 
//  7)         
//  Noun:      plane
//  action 1:  taking off
plane.takingOff();
//  action 2:  landing
plane.landing();
//  action 3:  slowing down
plane.slowingDown();
//  8)         
//  Noun:      camera
//  action 1:  zooming in
camera.zoomingIn();
//  action 2:  zooming out
camera.zoomingOut();
//  action 3:  recording
camera.recording();
//  9)        
//  Noun:      boat
//  action 1:  moving foward
boat.movingFoward();
//  action 2:  moving backward
boat.movingbackward();
//  action 3:  going fast
boat.goingFast(); 
//  10)       
//  Noun:      television
//  action 1:  showing Netflix menu
television.showingNetflixMenu();
//  action 2:  showing Prime menu
television.showingPrimeMenu();
//  action 3:  showing YouTube app
television.showingYoutubeApp();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
