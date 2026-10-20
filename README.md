<img width="502" height="389" alt="Screenshot 2026-10-20 090226" src="https://github.com/user-attachments/assets/cd75c783-7c3c-49a9-a561-d16059391ab0" /> 



# FABR
FABR: Filament Added Builder &amp; Replicator. 

Well this is a cartesian 3d printer. It is designed to be simple and requires only some 3d printed parts.

<h3> Why I made it ? </h3>
 I always wanted to make a 3d printer, but all the tutorials or builds online were either very expensive or required craftsmanship. 

 i had neither of the two..

 so i designed this. 







<img width="404" height="350" alt="Screenshot 2026-10-20 082758" src="https://github.com/user-attachments/assets/092d3f86-d01f-475a-8bf0-30092fc4521f" />

<h1>Wiring </h1>

For the wiring, either u can follow this diagram, or see the txt file inside electronics. 
<img width="2254" height="663" alt="Wiring Diagram 1" src="https://github.com/user-attachments/assets/9966ac2e-406e-4f52-b8f9-3b61f0c590c2" />

<h1>Firmware</h1> 

<h3> Slicer </h3>

this is a firmware, which generates gcode for 3d printing.. 

Run the .exe file inside of firmware and install ORCASLICER. 

Open orcaslicer after installation and then for the setup, choose **GENERIC MARLIN PRINTER** and proceed. 


<h3> Marlin </h3>
For the firmware, i m using Marlin to move stepper motors using raspberry pi pico..
Well, it wasn't as plug n play as the arduino mega builds we all have seen with marlin. 

I had to go through multiple files and configuration before, the setup became errorless. 

U can get the software from the original MARLIN website. 

** OR **

U can download the already configured version in this repo. 

Then open the marlin folder and find- 

.pio folder  > build > RP2040 

Inside RP2040, look for firmware.uf2 and copy paste it inside of the raspberry pi pico when its in boot mode. [plug the pi pico while pressing bootsel button to activate boot mode- it should come up as an flash drive]
<h3> Pronterface</h3> 

Marlin just moves the stepper motors. To send commands to raspberry pi pico for 3d printing, u will need Pronterface. 


First u will need to install python. 
Next go to the pronterface download site and click download.. 

Then github page will be opened, from there click download .ZIP file. 

Extract the file and open the folder, where u find pronterface.py- 

right click inside that folder and click OPEN IN TERMINAL. 
Then run this code- 

```
python -m pip install -r requirements.txt
```
 
 ***And U are all set with the firmware***

<h1> Making It </h1>
1) Get all parts inside of cad/stl 3d printed. 

2) Fix all parts according to the FABR(Assembled) cad model in fusion. Or u can refer to all images inside Images folder.

3) Wire up all the electronics and motors according to the wiring diagram.

4) Connect raspberry pi pico to computer and flash the .uf2 file.

5) Open Orcaslicer, and click prepare tab the import a 3d model (stp). Click Export G-code, which saves a .gcode file.

6) Open pronterface and connect to pi pico. Then Upload this gcode file and start printing.

   <h1> Credits </h1>

Big thanks to the people who made the free tools i used-
- Marlin, for the firmware that moves the motors
- Pronterface (Printrun), for sending the gcode to the printer
- OrcaSlicer, for slicing the models
- Fusion 360, for the CAD design

All the designs and the wiring are made by me.
