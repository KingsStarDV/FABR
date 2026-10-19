---
title: "3D Fabricator"
github: "https://github.com/KingsStarDV/FABR"
description: "its is a 3d printer\n"
created_at: "2026-10-05"
total_time: "19h 30m"
---

# October 10, 2026: made basic idea
<!-- fabricate:entry 318 -->

so, not much.
today i open fusion after many mnay days, so took a bit of time to get refamiliar with the controlls and everything.
but apart from that i made the basic idea of what my 3d printer would look like.

i m thinking to make it a small printer.

not much.. it is a cartesian printer, utilising normal NEMA 17 motor and lead screw and pulley.

i also made a video of the joints of the printer, but the journal would not allow me to upload videos.
thats all

![](https://fabricate.hackclub-assets.com/f680a94323694bdfa925f82dfcbf465596e9649a4aa6fcc3380ea33d57e52c9c/image-png/Screenshot%202026-10-10%20094552.png)

**Total time spent: 1h**

# October 11, 2026: CAD designed the base
<!-- fabricate:entry 344 -->

started with making the base.
i was thinking of a 200x200 print area.

for that I made the base design as -
![](https://fabricate.hackclub-assets.com/0582bce7ae59a62bd8c3210a0f93f5be76b97177393fd812d56f54a3585fe631/image-png/Screenshot%202026-10-11%20193210.png)

It looked nice. Until i realised that the height of the model was very short, in order to fit a nema 17 motor in there.
also, there was no space inside, to attach the stepper motor for moving the gantry plate.
![](https://fabricate.hackclub-assets.com/bb70cfc3c08110f218fa62bd2d3c8adda0436d6056a75659df2cf9100c51a286/image-png/Screenshot%202026-10-11%20205236.png)

the holes made, are for the smooth rod to slide in.
[If u have no idea about smooth rod- they are basically just 'smooth' steel rods and their purpose is to allow a gantry plate attached to them via a linear ball bearings to move smoothly.]


this looked okay.
so i proceeded with making attaching brackets for the motor.
![](https://fabricate.hackclub-assets.com/f923e1bb3467d8c4c6f3bf1052b3fe5e60499ffa1e1806077c641a8eaf5cd3cc/image-png/Screenshot%202026-10-11%20211032.png)

I made this on one of the end, the motor will be glued to this place.
Now u may ask, why glued to it not screwed in.
the reason being that the complete base plate in to be printed in one single part. and to save on cost, it will be made in around 30-40% infill but, if the mounting bracket only has that low infill (of 30-40%) the screws might not keep in place and overtime create a larger hole.
next, i added a nema 17, to check if it fits. and guess what ? IT DOES.!
![](https://fabricate.hackclub-assets.com/f332f933c7b2c0a48635b3585dd6e21925b6e2890a7e225ae135952b78615700/image-png/Screenshot%202026-10-11%20211042.png)

my last job was to make a idler pulley bracket on the other side.

![](https://fabricate.hackclub-assets.com/57e6ac9d08b3c20c5bf7178e3ace6a4ffbb62869eb0b695fc26352c57541db01/image-png/Screenshot%202026-10-11%20211927.png)

**Total time spent: 2h 30m**

# October 13, 2026: Major Design Changes
<!-- fabricate:entry 385 -->

so, i just realised something..

The design i was going for was a completely 3D printed design.
I was hoping that to reduce effort to building.

However, I didn't accounted for 3D printing cost back then.
**## Now that i have realised it, i wan to change my design due to multiple reasons-**

> COST: The 3D printed base, Frame, and the parts that i would have designed in future, would all add to very high costs.
> Strength: 3D printed parts are really strong. But they come nowhere close the strength of material like wood. In my new design i have decided to use wood as the structural support material.\



 Now there were the most important reasons..

Then I proceeded on to create the design CAD models.
The BASIC idea of the printer would be the same. 

I then made the design for the front plate of the base frame. (front and back plate would be shown in CAD model along with the rest parts for clarity in upcoming journals.)

![](https://fabricate.hackclub-assets.com/68c6bc95402cb26d67194d382c3aab9f366fd2defccb861bc18b458a11b33c95/image-png/Screenshot%202026-10-13%20202009.png)

Now, the rectangular groove in the between is where the wood piece would fit and would be glued.

And the 2 holes are for the smooth rods.
..

The basic design of the backplate was similar to the front plate.
Now, i added a stepper motor mount into the CAD model, and took measurements for screws to be in place.
![](https://fabricate.hackclub-assets.com/3fa3a7771b47c5b9ec9f84e53fd32d3015bb1158d66e74351fb24f98af4e8e80/image-png/Screenshot%202026-10-13%20211407.png)

this is where the screws would be screws in along with the stepper motor mount. _**[more on how will these plates be held together later]**_
..
.

This is how the back plate looks like along with the motor mount.
![](https://fabricate.hackclub-assets.com/10f2da4974d53dab7dfe5a46f828e83b7a4448bc115798848c46e0586572c304/image-png/Screenshot%202026-10-13%20211548.png)

Finally i removed ome part from the back plate to make place for the timing belt to pass through.
![](https://fabricate.hackclub-assets.com/5772e96825209c9421625e85e50b8556e399077cf1fb6e2382f0d2cdb31d58d4/image-png/Screenshot%202026-10-13%20212651.png)
![](https://fabricate.hackclub-assets.com/9f98c9f6c682f83d31b408315937bd2a7482a1466ef5e53ba202b48d84f91bef/image-png/Screenshot%202026-10-13%20212703.png)

**Total time spent: 2h**

# October 14, 2026: CAD Modeling The Y axis.
<!-- fabricate:entry 403 -->

![](https://)so, I did some progress on the project.

- First: I assembled the base of the printer.
    As i have already told, that this new design would use wood. I also decided to give the right appearance to wood by using the appearance feature of FUSION.
I also made the 3d models of smooth rods [which were nothing, just long cyclinders of 8mm diameter]

These smooth rods are the linear guide system for this project.
They will allow the linear movement of parts. After modelling them, i added a aluminium shiny texture to them.

Nxt i finally assembled the printer base-
   

![](https://fabricate.hackclub-assets.com/83c87ce9685895994e191e20cd09ad59ae32f22fbb44da0fc56376ed5a42aea0/image-png/Screenshot%202026-10-14%20144602.png)

Now, this image should have cleared all doubts regarding the motor and its positioning that I reffered to in the previous journal.

Then it was the time to create the y axis movement system.
I was trying very hard to find any other way of doing this part rather than using a big wood piece in the bottom to create space for additional parts.
But i couldnt find any solution.
SO, i had to do it. I added a wood piece in the bottom of the build.
The electronics and y axis would share this part.
![](https://fabricate.hackclub-assets.com/256e6f0bc49f9b86d8d6d2fb2867b163f370a371af23f82fed60798f5f0f46bf/image-png/Screenshot%202026-10-14%20150002.png)

Next i moved to create Y axis part.
I started by making a base part for Y axis .
![](https://fabricate.hackclub-assets.com/056b6a8fcbf79571d893d66d99c6326326f8d3c6e67ddf86dcb8dd2ca4327a2d/image-png/Screenshot%202026-10-14%20150926.png)

Now, this part is supporting the complete y and z axis, so it must be strong.
This part specifically will be printed in high infill.
Also then i added holes for screws. [the holes are 3.5mm, but M4 screw will be used to screw them in.]
![](https://fabricate.hackclub-assets.com/95edec542da0a4598be2e2bfe1003a6e53f95f0b47c12bb55289240e9dc43c8a/image-png/Screenshot%202026-10-14%20151506.png)
![](https://fabricate.hackclub-assets.com/cf6187a270c476e7b01268d7c3d82b6dcfc20ff32f9f6fbd218ce250b04bd6df/image-png/Screenshot%202026-10-14%20152924.png)


Then i proceded to make the top part of the y axis.
![](https://fabricate.hackclub-assets.com/f8bcd82f19c6ea921816a55219ca9758a2a7f577c84d987fddef42e931499b9b/image-png/Screenshot%202026-10-14%20153600.png)

however, this part i designed wrong.
I realised this at the point when i went to assembled the part.

[Continue to the next journal.]-(Picture limit reached here)

**Total time spent: 3h 30m**

# October 14, 2026 (entry 2): Continuing the Design
<!-- fabricate:entry 404 -->

The problem was that i took the measurement of the holes for the smooth rods wrong.
So i corrected it.
![](https://fabricate.hackclub-assets.com/5cfab2e07eb6799d8de3328997208329b2248a7756b0e782fe5ff153163557d4/image-png/Screenshot%202026-10-14%20154157.png)

Here is how it looks like in the assembly-
![](https://fabricate.hackclub-assets.com/5a5056d8004c8619c303d9da090cd6aeffc2909453bd3d62c2f1fb5e5df5552e/image-png/Screenshot%202026-10-14%20154449.png)
...

Now was the time to add place for the stepper motor in  the y axis..
SInce there is no space left in the bottom, i decided to add the stepper motor on the top.

For that i made a hole in the top part of y axis.
now this part specifically doesnt need much strength, so this will be a low infill part. hence, instead of using screws to hold stepper motor in place, i decided to go with either super glue or hotglue.
The motor also, doesnt experience any real torque, hence even hot glue would work here.
![](https://fabricate.hackclub-assets.com/8e68f284e7c6d4e3edad393e69c83a77ab4d469cdc68d7fec090a5ad29ead7a9/image-png/Screenshot%202026-10-14%20155606.png)

the next step was simple.. i just added a threaded rod on the stepper motor on the top part along with a coupler.
and then made a hole in the bottom part for the threaded rod.
![](https://fabricate.hackclub-assets.com/29fa2aeceaa38397d54367ab8eec1d16d482d1d5b0f6a5a0783cd8d6906fe91f/image-png/Screenshot%202026-10-14%20162835.png)
![](https://fabricate.hackclub-assets.com/8f97a0af4473dcf45b4e003fe1495ff151dd37af7c6e7225a206f2257a952abc/image-png/Screenshot%202026-10-14%20162920.png)


**Thats all for Now.!!**

**Total time spent: 6m**

# October 14, 2026 (entry 3): Y Axis Design
<!-- fabricate:entry 406 -->

i worked on Y axis this time.

_**[BTW, rn my goal is only to make a fully working design and i m no focusing on optimising it in any way.
The optimisation of design is the next step in my mind.]**__


The aim of this next part will be to carry a stepper motor, hotend, extruder motor and a fan.

As per the position of the rods, i first designed a block shaped part with only linear bearings inside to slide onto the smooth rods.
![](https://fabricate.hackclub-assets.com/cedb1e27299c5ebb999b0da93f232ffece294c4329b57b52b24e4cc0205816b0/image-png/Screenshot%202026-10-14%20184825.png)
![](https://fabricate.hackclub-assets.com/771bd600965234dcf62c952b62b6e493ef9e02013a8c41551fa76ee1629cfb96/image-png/Screenshot%202026-10-14%20185018.png)

however, there also must be a place to attach a stepper motor so the the Z axis can move.
So, i removed a circular parts for the motor to fit in.
![](https://fabricate.hackclub-assets.com/338f57e4b2fb0772a7c8b23c1c8b679d3824d616e37f987a1e8048a9d2d6c29b/image-png/Screenshot%202026-10-14%20192813.png)

I also made some space in the front face of the part so that timing belt could be accessed.
![](https://fabricate.hackclub-assets.com/9aa6b49dc8aab1e0ef1b7480cb01870cdfd5eb54c7095b02b8bd4dbed25eadb1/image-png/Screenshot%202026-10-14%20192822.png)

Then I noticed that there is no place in this part to add any screws.
Due to that reason, i decided to go with glueing again.
but also made a bracket for the motor to sit into.
![](https://fabricate.hackclub-assets.com/de9c27c13bb8735fca5dde62079016c1f6645af858dd152f13bf5aebe1a4d50c/image-png/Screenshot%202026-10-14%20193157.png)



To finish off this part, i removed some extra material from it in order to save on filament and weight.
![](https://fabricate.hackclub-assets.com/5694490ddacdbfc1b6f362864b93e45715d5626bccc8c5f6f022b8b006927f19/image-png/Screenshot%202026-10-14%20193327.png)
![](https://fabricate.hackclub-assets.com/08d3213cd43acda8cba22b4a2d5ec4642c3a940c894d7d5f62dba63dcce050f5/image-png/Screenshot%202026-10-14%20193332.png)


Then i proceeded to make the part for the other end of the Z axis.

It was way simpler than the previous part.
Its just a cuboidal block with two circular parts removed for smooth rods to slide in and a rectangular block removed for the timing belt.
the inner part contains of a cylindrical shape which would act as idler pulley for the timing belt.

![](https://fabricate.hackclub-assets.com/cdd49f4f970eeb87300880c32940f374b701da8700b8df2b74efa2e2acdb8704/image-png/Screenshot%202026-10-14%20195443.png)

there are some reasons why i didnt used a real idler pulley with bearing here.
1. To save on cost
2. Make the building easier
3. This axis works on very low speeds and hence, the part would be just fine instead of a Pulley.

**Total time spent: 2h**

# October 15, 2026: Z axis Moving Part Design
<!-- fabricate:entry 489 -->

I again did a long session and finally completed the design for he Z axis.
This axis had way more tinkering than any other axis in the build.

I first started with trying to add the trapezoidal nut for the lead screw.
But then i realised something .
I HAD LEFT NO SPACE FOR THE NUT TO FITTT!!!!!




Now that was problem.
so i had to redo the design of not just the moving y axis part but also the top and bottom y axis parts>...
This was the time when i thought to myself that mybe i should have used parameters and variables to keep everything organised..
I pushed through and completed the redesign anyways.
![](https://fabricate.hackclub-assets.com/6500524b4c6371b276421501d06b479c672f0c180ff4d39c54ff089f18926130/image-png/Screenshot%202026-10-15%20123747.png)
![](https://fabricate.hackclub-assets.com/3e13fd472afd665b512de618b6bf3807ef5d946a5f58bb2456ceb8e76ad255aa/image-png/Screenshot%202026-10-15%20125211.png)

Next i proceeded to make attachments and support for the hotend.
First i downloaded the CAD file for the hotend from GRABCAD and next took its measurements and made a bracket support for it.-
![](https://fabricate.hackclub-assets.com/8b6715a44193949bf6d76d94b80587f8b352778ff249c7aeb0a9cdc867681167/image-png/Screenshot%202026-10-15%20212234.png)

However when i tried to attach it the the hotend, it was fit.

SO i had to retook measurements and designed again.
(Well, it was just changing the length and radius of the circle inside the part)

Then it fitted.
![](https://fabricate.hackclub-assets.com/33db4e4b236fb0809841be1544aef2012e0b98877b1651b64fa974e05cdd5823/image-png/Screenshot%202026-10-15%20215235.png)

I also made 2 holes for M1.4 screws.
Finally i mounted everything on the Z moving part and made some cuts in the part for timing belt to pass through.
And then it was complete.

![](https://fabricate.hackclub-assets.com/db1cebe0384743584a3694dac051e61ab4f75ff6063452bae5832368387da769/image-png/Screenshot%202026-10-15%20222934.png)

**Total time spent: 2h 54m**

# October 16, 2026: Designing Bed Gantry
<!-- fabricate:entry 508 -->

today i woke up with the idea to make the bed gantry plate in mind.
...

My initial idea was to make it out of wood, but honestly i thought it is boring.

SO i started to research for designs online..
Found some designs but at last i decided to make my own,.

I tries to use AI to make a optimised shape for the bed support.[like the wierd shaped parts with many triangular cuts that are surprisingly very strong]...
But after half n hour of adjusting all settings like- material, load distribution, solid space, contrains etc FUSION ASKED FOR CLOUD TOKKENS.
LIke, they could have informed me earlier that it would required cloud tokkens.

Finally i choose the manual method.
Started to make a x shape design, and then joined and extruded all the parts.

![](https://fabricate.hackclub-assets.com/abf66202a28170a7dba6c4c1b0eb2e03db59d0ed322e18f7cdf8d018e9aefa98/image-png/Screenshot%202026-10-16%20114144.png)

Right after this design, another idea struck into my mind. instead of making holes for the linear bearings, i can make semicircular cuts to tie them using zip ties..
SO I did that-
![](https://fabricate.hackclub-assets.com/6f99dc01a27fc909a1f24a29a4a36fd55ee7a677c06596d91d2fc9fa20009888/image-png/Screenshot%202026-10-16%20114135.png)

...
Well my idea was great but method was horrible..
I first had to take measurements from the assembly file.
then i made a very thin rectangular sketch that would revolve around a axis which lies on the center of the bearing.  Anyways i said, this method was too complicated. i did this on 1 bearing part.
Then i thought, this exact same thing could be done by a semicirclular cut made across the bearing part.
![](https://fabricate.hackclub-assets.com/6b080a976c9c7749038f6e0c92d83e74ac5693e37fa36faa0625108a9323ad32/image-png/Screenshot%202026-10-16%20114651.png)


>>>
Finally i added some holes for allowing zip ties to pass through and tie the linear bearing..
Also, i m looking for ways to be able to demonstrate the timing belts in CAD design.

**Total time spent: 1h 30m**

# October 16, 2026 (entry 2): Completed Printer Design
<!-- fabricate:entry 530 -->

finally i added then last part in the printer which is the bed gantry and attached the extruder to the build.
![](https://fabricate.hackclub-assets.com/578ba75d17c6985b09dcfad6acae6fdf10683e148263028e397142cc6781d26b/image-png/Screenshot%202026-10-16%20214227.png)
![](https://fabricate.hackclub-assets.com/792c26c6e2e351ccd74ba5aff6c7fe75cece0be8b0f47ccf9fc5b23308202092/image-png/Screenshot%202026-10-16%20214220.png)

Well i got this extruder model online and i matched the extruder i will be building very likely..
Also, i have decided to keep the printing filament spool seperate from this build as the printer itself is very small and compact.

Anyways, the main CAD is done, so now m moving on to the ELectronics part of the project.

By the way, i rendered the model on a realistic graphic:

![](https://fabricate.hackclub-assets.com/88cf36410009db34a79330397f614f87215057f6006d127eaae05e7d8b248a1f/image-png/Screenshot%202026-10-16%20211944.png)

**Total time spent: 30m**

# October 18, 2026: Electronics explained & Wiring Diagram
<!-- fabricate:entry 628 -->

not much time time...

I just made a wiring diagram, which will work as the schematic for this project.

MY plan in to not get any pcb and hand wire every component..
Thats way easier...
![](https://fabricate.hackclub-assets.com/b41cc9da4704c4dd09dcee6f39d3e20fa0fb4aa1f0e996bd17f12ec2e67629bf/image-png/WD1.png)

I have decided to use a raspberry pi pico as the microcontroller for this project. 
It is fast, cheap and supported by marlin. and ofcourse that is way more cooler than arduino mega [arduino mega is outdated board, still used today in diy builds of 3d printer]

for the stepper motor driver, i will be using tmc2225.
I had initially decided to use TMC2209. but this board wasnt shipping anywhere near me by any seller.
So i had to get a lower version tmc2225.
Now, these are WAY WAY better than the a4988 used in most builds..
the a4988 is also an outdated board.

Everything will be powered by a 24v SMPS.
The pico and the stepper motor drivers will get 3.3v, by a DC -DC buck converter.
The hotend will run on 24v.
but there will be a 5A fuse in series with the hotend to limit current if any failure happens.

for the thermistor, i will be using the ntc100k thermistor. its comes along with the hotend,

A IRLZ44N, will be used to control the power to the hotend.

WELL, THATS ALL

**Total time spent: 1h 30m**

# October 19, 2026: Marin Setup
<!-- fabricate:entry 683 -->

Today i made a lot of progress.
First I created a github repo for the project and named my project: FABR [Filament Added Builder & Replicator]
As i had already told, that i will be using Marlin along with raspberry pi pico (rp2040) board for this printer. 
So, I downloaded the MARLIN software from the github repo, then started to work on it. 
IN short, i had to make a custom configuration and files for raspberry pi pico.
_**[I USED CLAUDE AS ASSISTANCE IN CREATING THESE FILES.]**_

First step was to make a custom board file to define the raspberry pi pico to the marlin software.

Next step as to change the configuration files of the marlin to fit my build.
It had things like, no. of axis, board define, endstop switch config, temparature sensor config.
And the most important here was the stepper motor driver.
SINCE i m using TMC2225 for this build but marlin doesnt support TMC2225 natively..
SO i had to make some little twerks to make it work. I selected the TMC2208 instead of the TMC2225 and enabled its standalone mode, so the raspberry pi pico would not try to communicate with the motor driver over UART.
This will fool the pi pico, thinking its a TMC2208 there when is is actually a TMC2225 there.

Finally I create a pin_RASPBERRY_PI_PICO file to define what gpio pins do what on the raspberry pi pico..

Atlast, i clicked BUILD [BTW, i m using VSCode-Platformio to make changes] and it went success.
![](https://fabricate.hackclub-assets.com/383aaed660f1312db9f4c209119d08d005699571c54415bd3311bd48e22fab89/image-png/Screenshot%202026-10-19%20114711.png)

**Total time spent: 2h**
