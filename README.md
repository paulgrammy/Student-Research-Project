# Student-Research-Project-
Bluetooth signal receiver with filter stage and AUX/Speaker output.

UseCase description: 

The box shall process analog converted audio signal coming from a Bluetooth-capable ESP32 board. The user shall connect the box at the input and output of any given filter and shall have the option to hear the filtered and unfiltered audio signals coming out with minimal noise and distortion. The audio shall be received through bluetooth via phone once the box has been supplied with current.

Used platforms: 

- ESP32 FireBeetle board:
    https://wiki.dfrobot.com/FireBeetle_Board_ESP32_E_SKU_DFR0654
- PCM5102 DAC:
    https://www.ti.com/product/PCM5102
- MCP6001 OPAMPS:
    https://ww1.microchip.com/downloads/en/DeviceDoc/MCP6001-1R-1U-2-4-1-MHz-Low-Power-Op-Amp-DS20001733L.pdf
- TPA711 Power AMP:
    https://www.ti.com/product/TPA711

Potential solutions for the BluetoothRx interface:

https://github.com/pschatzmann/ESP32-A2DP

https://github.com/YetAnotherElectronicsChannel/ESP32_Bluetooth_Audio_Receiver

Books and Papers:

https://web.mit.edu/6.101/www/reference/op_amps_everyone.pdf
