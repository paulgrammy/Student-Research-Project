# Student-Research-Project-
Bluetooth signal receiver with filter stage and AUX/Speaker output.

UseCase description: 

This project seeks to help students more easily understand the effects of filters on electric signals by using sound. Since Music and/or audio is composed of frequencies across a spectrum (20Hz to 20kHz), one can hear what an LPF/HPF would do when fed audio signals. In my Student-Research project work, I try to design a PCB that shall overline this use case.

The PCB shall process analog converted audio signal coming from a Bluetooth-capable ESP32 board. The user shall connect the board at the input and output of any given filter and shall have the option to hear the filtered and unfiltered audio signals coming out with minimal noise and distortion.

Used platforms and ICs:

- ESP32 FireBeetle board:
    https://wiki.dfrobot.com/FireBeetle_Board_ESP32_E_SKU_DFR0654
- PCM5102 DAC:
    https://www.ti.com/product/PCM5102
- MCP6001 OPAMPS:
    https://ww1.microchip.com/downloads/en/DeviceDoc/MCP6001-1R-1U-2-4-1-MHz-Low-Power-Op-Amp-DS20001733L.pdf
- TPA711 Power AMP:
    https://www.ti.com/product/TPA711

Potential software solutions for the BluetoothRx interface:

https://github.com/pschatzmann/ESP32-A2DP

https://github.com/YetAnotherElectronicsChannel/ESP32_Bluetooth_Audio_Receiver

Books and Papers:

https://web.mit.edu/6.101/www/reference/op_amps_everyone.pdf

End result:
![PCB 3D View](https://github.com/user-attachments/assets/e8ce52a5-6ba1-4353-9602-ee014ab92bfc)

Conclusions: 
The board works with minimal distortion up to the OpAmps single supply limits, offering almost no phase lag.
Some layout optimizations can be carried out to lower the noise floor and make implementation in the labs easier.
