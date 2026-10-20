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

U can download the marlin software from either its original repository or can get the **Fixed** edition from this repository along with config, board and pins files.

But then U would have to download VS Code, install Platformio and then build the package.. 

***OR*** 

You can get the final build .uf2 file from this repo and just flash it on your raspberry pi pico. 

If u are doing the second way, rememeber, to keep the wiring exactly as have kept it. 



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
