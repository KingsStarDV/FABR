<img width="1920" height="616" alt="Assembly Render" src="https://github.com/user-attachments/assets/72255bde-f43a-4bb9-835a-974deb6745cc" />




# FABR
FABR: Filament Added Builder &amp; Replicator. 

Well this is a cartesian 3d printer. It is designed to be simple and requires only some 3d printed parts.

<h3> Why I made it ? </h3>
 I always wanted to make a 3d printer, but all the tutorials or builds online were either very expensive or required craftsmanship. 

 i had neither of the two..

 so i designed this. 








<h1>Wiring </h1>

For the wiring, either u can follow this diagram, or see the txt file inside electronics. 
<img width="2254" height="663" alt="Wiring Diagram 1" src="https://github.com/user-attachments/assets/9966ac2e-406e-4f52-b8f9-3b61f0c590c2" />

<h1>Firmware</h1> 

<h3> Slicer </h3>

this is a firmware, which generates gcode for 3d printing.. 

You can download any slicer application, but i m using orcaslicer. 
download orcaslicer from their original website. then install the .exe file.

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

5) Open Orcaslicer, and click prepare tab the import a 3d model (stl). Click Export G-code, which saves a .gcode file.

6) Open pronterface and connect to pi pico. Then Upload this gcode file and start printing.

<h1> Bill of Materials </h1>

| Item | Qty | Description | Unit Price (INR) | Total Price (INR) | Total Price (USD) | Link |
|------|-----|-------------|------------------|-------------------|-------------------|------|
| Raspberry Pi Pico | 1 | Microcontroller | 384 | 384 | 4.608 | [Link](https://robu.in/product/raspberry-pi-pico/?gad_source=4&gad_campaignid=19974686076&gbraid=0AAAAADvLFWdUB5sSx30_3QPik9EZfq54s&gclid=CjwKCAjw_9bWBhBGEiwAomyTIoUPjd2g1CJikVJHrj6vVSTCGl6pg106oq_YpfR2KVJFePL8epIQpBoCxTYQAvD_BwE) |
| TMC2225 | 4 | Stepper Motor Driver | 400 | 1600 | 19.2 | [Link](https://robu.in/product/bigtreetech-tmc2225-v1-0-stepper-motor-driver/?gad_source=1&gad_campaignid=17427803012&gbraid=0AAAAADvLFWc3URXQSKREg9mkC9RHf79rH&gclid=CjwKCAjw_9bWBhBGEiwAomyTIvqv4RL49nJd0OahqaCumpJvmuB04kvSsAkPt45a0maJzo7ZG2JiPBoCaM4QAvD_BwE) |
| Nema 17 Motor | 4 | Stepper Motor | 549 | 2196 | 26.352 | [Link](https://robocraze.com/products/17hs4401-nema17-stepper-motor-40mm?variant=42490709246176&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&utm_source=google&utm_medium=cpc&utm_campaign=BL+%7C+Pmax+%7C+Feed+Only+%7C+RoboCraze+%7C+Electronic+Components+%7C+31%2F05&utm_source=googleads&utm_medium=ppc&utm_campaign=21337209786&utm_content=_&utm_term=&campaignid=21337209786&adgroupid=&campaign=21337209786&gad_source=1&gad_campaignid=21343423652&gbraid=0AAAAADgHQvbH57m6b5l082CZ-RAE4D9oU&gclid=CjwKCAjw_9bWBhBGEiwAomyTIp_XR2okXVqtpS3_nbKmuD4L3VjN_nlZrd_BjKbDbT2-k_uoHIHnDxoCNTUQAvD_BwE) |
| Endstop Switch | 3 | Switches for Homing | 23 | 69 | 0.828 | [Link](https://robu.in/product/kw4-z5f150-spdt-roller-lever-micro-switch-5a1-5n/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWdRNkR22LDjLdAY60rEt47Dr&gclid=CjwKCAjw_9bWBhBGEiwAomyTIqFrDMUeOOOmuARHfnL_HuaHZ221WyyG535tDI3Ti-CP-X-KmB06NxoCUr0QAvD_BwE) |
| Irfz44N | 1 | Mosfet for Hotend | 44 | 44 | 0.528 | [Link](https://robu.in/product/irlz44n/) |
| V6 J hotend | 1 | hotend | 764 | 764 | 8.404 | [Link](https://evelta.com/v6-remote-hotend-with-fan-24v-40w-1-75-0-4mm/?sku=509-B01487&utm_source=google&utm_campaign=19958243666&utm_medium=cpc&utm_content=&utm_term=&gad_source=1&gad_campaignid=19958265965&gbraid=0AAAAADwtsXkDPn-NTxvMwH5wfTRdCwUNN&gclid=CjwKCAjwotzWBhBFEiwA1JhPoOp0cDvpy7ZWjPvE76arYVIF0rsfE_kJBj0BI7tFB5mNVVhwSpPrShoC5k0QAvD_BwE) |
| DC-DC buck converter | 1 | To change 24v to 3.3v for electronic | 135 | 135 | 1.62 | [Link](https://robocraze.com/products/lm2596-dc-dc-step-down-buck-module-with-display?_pos=2&_sid=0c32e3ade&_ss=r) |
| 4.7K resistor | 8 | Got 8 as they were the MOQ/ replacement as the 5K resistors | 1.3 | 11 | 0.132 | [Link](https://robu.in/product/4-7k-ohm-1w-metal-film-resistor-pack-of-40/) |
| 100ohm Resistors | 6 | 6 is the MOQ | 1.7 | 11 | 0.132 | [Link](https://robu.in/product/1w-100-ohm-resistor-pack-of-40/) |
| 5A Fuse | 2 | 2 is MOQ | 9 | 18 | 0.216 | [Link](https://robu.in/product/1-month-warranty-1350/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWdRNkR22LDjLdAY60rEt47Dr&gclid=CjwKCAjw_9bWBhBGEiwAomyTIgJ3KACUWnQvfxgwx9RcVSbguER0ojij5nyh48pRxuc2z70yaiCrAhoCPKcQAvD_BwE) |
| Smooth Rod (1 meter) | 1 | total length required: 1380mm  Will get the part in (1 + 0.4) m | 380 | 380 | 4.56 | [Link](https://onlyscrews.in/products/8mm-smooth-rod-stainless-steel-304-1meter-1000mm) |
| Smooth Rod (0.4m) | 1 | --------- | 179 | 179 | 2.148 | [Link](https://robu.in/product/400-mm-long-chrome-plated-smooth-rod-diameter-8-mm/) |
| LM8UU | 10 | Linear bearing (8mm) | 49 | 490 | 5.88 | [Link](https://robocraze.com/products/lm8uu-8-mm-linear-motion-bearing-for-3d-printer?variant=40193531052185&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&campaignid=19018890706&adgroupid=&keyword=&device=c&gad_source=1&gad_campaignid=19012070097&gbraid=0AAAAADgHQvaVEhv2ymoSWaqVPq867aMnR&gclid=CjwKCAjw_9bWBhBGEiwAomyTIkru6Acuu1HJPDUX84F6rKjw4EyqvpwPUbGeTfBfCUbBDWYlrzNuZRoCnUAQAvD_BwE) |
| MK8 Bowden Extruder Kit | 1 | this includes all parts required to make a extruder | 199 | 199 | 2.388 | [Link](https://robocraze.com/products/extruder-kit-left-side-mk8-aluminum-3d-printer-block?_pos=8&_sid=89e144abd&_ss=r) |
| Nema 17 Mount | 2 | mount for stepper motor | 202 | 404 | 4.848 | [Link](https://robu.in/product/easymech-bracket-for-nema-17-stepper-motor/) |
| Lead Screw (300mm) + Nut | 1 | -----nearest i could find to 240mm is 300mm | 249 | 249 | 2.988 | [Link](https://robocraze.com/products/trapezoidal-screw-300mm-rod-with-copper-nut?_pos=5&_sid=3191a7e76&_ss=r) |
| 5mm to 8mm shaft coupler | 1 | to join lead screw and nema17 shaft | 105 | 105 | 1.26 | [Link](https://robu.in/product/nema-17-shaft-coupling-coupler-shaft-5mm-x-8mm/?gad_source=1&gad_campaignid=17427803012&gbraid=0AAAAADvLFWc3URXQSKREg9mkC9RHf79rH&gclid=CjwKCAjw_9bWBhBGEiwAomyTIuyeu6Gss6GjgM1ngK3YGs4J-RdxyPkqV8XDBL1ZvtyzswEgaZiv2BoCb_EQAvD_BwE) |
| GT2 6mm pulley | 2 | ---------- | 45 | 90 | 1.08 | [Link](https://robocraze.com/products/gt2-6mm-belt-width-20-teeth-5mm-bore-timing-pulley?_pos=1&_psq=gt2&_psid=1684f6d98&_ss=e) |
| GT6 6mm Timing Belt(1m) | 1 | needed:90cm | 90 | 90 | 1.08 | [Link](https://robocraze.com/products/1-meter-x-gt2-open-timing-belt-6mm-width-pitch-2mm-for-3d-printer?_pos=14&_sid=4e4315103&_ss=r) |
| Zip ties | 50 | to hold together timing belts, and fix bed plate with linear bearings | 0.4 | 20 | 0.24 | [Link](https://onlyscrews.in/products/2-5mm-x-100mm-white-color-multi-purpose-self-locking-nylon-industrial-grade-cable-zip-tie?variant=50926595998009) |
| M4 Screws | 10 | ----- | 2.8 | 28 | 0.336 | [Link](https://onlyscrews.in/products/chhd-m4-x-20mm-pack-of-20) |
| M1.6 Screws | 4 | -------- | 6 | 24 | 0.288 | [Link](https://onlyscrews.in/products/m1-6-x-8mm-hex-allen-socket-head-ss-304-screw-dia-1-6mm-length-8mm) |
| M4 60mm Screw | 5 | -----For the Rod holders-- | 13 | 65 | 0.78 | [Link](https://onlyscrews.in/products/m4-x-60mm-hex-allen-csk-high-tensile10-9-black-oxide-screw-dia-4mm-length-60mm?currency=INR&country=IN&variant=51646428610873&stkn=6e84ebfba1b8&utm_source=google&utm_medium=cpc&utm_campaign=googleads_22229903987&utm_id=22229903987&utm_adgroup=&utm_assetgroup=6594506010&utm_content=ad_&utm_term=&utm_matchtype=&utm_device=c&utm_network=x&gad_source=1&gad_campaignid=22229905346&gbraid=0AAAAA9sP2STCYqm-T1mOluwh962mWXq9b&gclid=CjwKCAjwxeHWBhBPEiwAiqtQ-UqFHHbmBaecY9lDXtWx4HTUm7VEGcAA8XPEOmMAzyY7xN4zs50sYxoCdB0QAvD_BwE) |
| M3 8mm | 14 | ---for stepper motor | 1.2 | 16.8 | 0.2016 | [Link](https://onlyscrews.in/products/m3-x-6mm-phillips-csk-ss-304-screw-dia-3mm-length-6mm) |
| M3 10mm | 4 | ----for vertical support and custom mount | 1.6 | 6.4 | 0.0768 | [Link](https://onlyscrews.in/products/phillips-csk-m3-x-10mm-pack-of-20) |
| M2 Screws | 8 | --------- | 2.6 | 20.8 | 0.2496 | [Link](https://onlyscrews.in/products/m2-x-5mm-hex-allen-socket-head-ss-304-screw-dia-2mm-length-5mm) |
| 3.5mm Self Tapping Screw | 4 | ---for extruder and bottom y axis part. | 1.6 | 6.4 | 0.0768 | [Link](https://onlyscrews.in/products/no-63-5mm-x-13mm-phillips-csk-ss-304-self-tapping-wood-screw) |
| Compression Spring | 4 | -----for bed assembly | 6 | 24 | 0.288 | [Link](https://onlyscrews.in/products/od-6mm-free-length-15mm-wire-dia-0-8mm-compression-spring-stainless-steel-304) |
| M4 20mm Screw | 4 | -----for bed assembly | 3.2 | 12.8 | 0.1536 | [Link](https://onlyscrews.in/products/m4-x-20mm-hex-bolt-ss304-dia-4mm-length-20mm) |
| M4 Hex Nut | 4 | ----for bed assembly | 1.6 | 6.4 | 0.0768 | [Link](https://onlyscrews.in/products/m4-nylon-hex-nut-dia-4mm) |
| Wire (3m) | 3 | for connections of endstop switches and motor drivers | 45 | 135 | 2.7 | [Link](https://robocraze.com/products/ribbon-cable-10-wire-1-meter?_pos=1&_sid=4ef974617&_ss=r) |
| 4 pin JST connector | 4 | for connecting stepper motor | 50 | 200 | 2.4 | [Link](https://robu.in/product/720mm-cable-with-connector-for-nema17-stepper-motor/) |
| 24v SMPS | 1 | ----------Already have it | -- | -- | 0 | -- |
| 1 Kg PETG Filament | 1 | -------For printing legion | 1000 | 1000 | 12 | [Link](https://robocraze.com/products/anycubic-petg-black-1kg-1-75mm-petg-3d-printer-filament?variant=67651507224800&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&utm_source=googleads&utm_medium=ppc&utm_campaign=24287584529&utm_content=_&utm_term=&campaignid=24287584529&adgroupid=&campaign=24287584529&gad_source=1&gad_campaignid=24282193143&gbraid=0AAAAADgHQvax1P1WwPNqMk3k8G7kyD99l&gclid=CjwKCAjwxeHWBhBPEiwAiqtQ-eQrFdFYzQxXzz0QIGaxZ0c0qOdC69hlPlVqD4fSy-dkVAny2eogNRoCTu0QAvD_BwE) |

**Total Shipping Costs (INR):** 149

**Total Cost (USD):** 108.1192 


   <h1> Credits </h1>

Big thanks to the people who made the free tools i used-
- Marlin, for the firmware that moves the motors
- Pronterface (Printrun), for sending the gcode to the printer
- OrcaSlicer, for slicing the models
- Fusion 360, for the CAD design

All the designs and the wiring are made by me.
