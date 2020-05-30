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
//  Noun:       goat
//  action 1:   the goat licks, e.g. salt
goat.lick();
//  action 2:   the goat gives milk
goat.giveMilk();
//  action 3:   the goat jumps around
goat.jump();
//  2)
//  Noun:       heart
//  action 1:   the heart beats
heart.beat();
//  action 2:   the heart aches
heart.ache();
//  action 3:   the heart stops
heart.stop();
 
//  3)
//  Noun:       nose
//  action 1:   the nose smells
nose.smell();
//  action 2:   the nose runs
nose.run();
//  action 3:   the nose is blown
nose.blow(); 
//  4)
//  Noun:       engine
//  action 1:   the engine runs
engine.run();
//  action 2:   the engine stutters
engine.stutter();
//  action 3:   the engine uses some sort of turbo
engine.usesTurbo(); 
//  5)
//  Noun:       whale
//  action 1:   the whale dives
whale.dive();
//  action 2:   the whale blows
whale.blow();
//  action 3:   the whale sings
whale.sing(); 
//  6)
//  Noun:       plane
//  action 1:   the plane takes off
plane.takeOff();
//  action 2:   the plane lands
plane.land();
//  action 3:   the plane glides
plane.glide(); 
//  7)
/*
//  Noun:       barber
//  action 1:   the barber shaves
barber.shaves();
//  action 2:   the barber washes his hands
barber.washHands();
//  action 3:   the barber takes money
barber.takesMoney();
HERE ARE THE CHANGES YOU REQUESTED
*/
//  Noun:       newNounWithCamelCase
//  action 1:   the new noun is proud of itself
newNounWithCamelCase.isProudOfItself();
//  action 2:   the new noun wants to have more meaning
newNounWithCamelCase.wantsToHaveMoreMeaning();
//  action 3:   the new noun glances angrily at its colleagues that seem far more useful
newNounWithCamelCase.glancesAngrilyAtColleagues(); 
//  8)
//  Noun:       harddisk
//  action 1:   the harddisk spins
harddisk.spin();
//  action 2:   harddisk writes data
harddisk.writeData();
//  action 3:   harddisk shuts down;
harddisk.shutDown(); 
//  9)
//  Noun:       washing machine
//  action 1:   the washing machine washes
washingMachine.wash();
//  action 2:   the washing machine spins
washingMachine.spin();
//  action 3:   the washing machine pumps the water
washingMachine.pumpsWater(); 
//  10)
//  Noun:       tea kettle
//  action 1:   the tea kettle whistles
teaKettle.whistle();
//  action 2:   the tea kettle boils water
teaKettle.boilWater();
//  action 3:   the tea kettle explodes (for whatever reason)
teaKettle.explode(); 


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
