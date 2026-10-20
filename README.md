# FABR
FABR: Filament Added Builder &amp; Replicator

**NOTE: IF U don't know a thing about 3D printing or are very new to 3D printer [including wanting to DIY a 3d printer] and want a detailed guide, I would suggest to go though my guide 3D PRINTERS & PRINTING by clicking the section below.**

<details>
<summary>
  
<h1>
  
  ***3D printers & Printing***

  </h1>
  

</summary>

  This is a beginners guide on 3d printing.
</details>

<h1>Firmware</h1> 
<h3> Marlin </h3>
For the firmware, i m using Marlin to move stepper motors using raspberry pi pico..
Well, it wasn't as plug n play as the arduino mega builds we all have seen with marlin. 

I had to go through multiple files and configuration before, the setup became errorless. 

U can get the software from the original MARLIN website. 

** OR **

U can download the already configured version in this repo

<h3> Pronterface</h3> 

Marlin just moves the stepper motors. To generate appropriate commands for 3d printing, u will need Pronterface. 

Its makes the needed G-Code. 

First u will need to install python. 
Next go to the pronterface download site and click download.. 

Then github page will be opened, from there click download .ZIP file. 

Extract the file and open the folder, where u find pronterface.py- 

right click inside that folder and click OPEN IN TERMINAL. 
Then run this code- 

```
python -m pip install -r requirements.txt
```
*** And U are all set with the firmware ***
