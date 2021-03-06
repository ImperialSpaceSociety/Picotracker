# Code Development, Programming and Debugging the HC12 Radio Module

How to develop code, program, and debug the embedded STM8S003F3 processor on the HC12 Radio Module.


## Code Development
![IAR Embedded WorkBench](https://github.com/ImperialSpaceSociety/PicoTracker/blob/master/images/IAR.png)

We use the [IAR Embedded Workbench for STM8](). This is a highly regarded professional development environment. IAR offer a limited Kickstarter version supporting up to 8K code size. The limitations below are not a problem for our project.

* 8K Code size Limit is the same as the code size on the STM8S003F3
* The source of the libraries is not provided, but we don't use them anyway
* It is only available for the Microsoft Windows Operating System
* We do not use the code for commercial purposes

Download the Evaluation Version and get a license for the free 8K Code limited Version.

If the above limitations are an issue for others, there are other compilers available such as [SDCC](http://sdcc.sourceforge.net/).

## Programming and Debugging

To program the code to the flash of the STM8S003F3 we use the [ST-LINK/V2](https://www.st.com/en/development-tools/st-link-v2.html) or one of the low cost clones available. The clones we have tested work well.

The ST-LInk/V2 is wired to the HC12 connecting the GND, RST, SWIM, and 3.3V/VCC connection. The VCC connection will power the HC12 from the clone. The SWIM and RST pads are adjacent to the TXD and RXD pads. on the rear of the PCB
![SWIM Connections](https://github.com/ImperialSpaceSociety/PicoTracker/blob/master/images/HC12%20SWIM.jpg)
![HC12 Debug](https://github.com/ImperialSpaceSociety/PicoTracker/blob/master/images/HC12%20Debug.jpg)
![ST-Link Debug](https://github.com/ImperialSpaceSociety/PicoTracker/blob/master/images/STLink%20Debug.jpg)
The HC12 as purchased comes with custom code which is Read Out Protected (ROP). This must be disabled by erasing the flash of the STM3S003F3. This done using the Option Bytes selection from the IAR Embedded Workbench ST-LINK menu.
![ROP1](https://github.com/ImperialSpaceSociety/PicoTracker/blob/master/images/ROP1.JPG)
![ROP2](https://github.com/ImperialSpaceSociety/PicoTracker/blob/master/images/ROP2.JPG)
