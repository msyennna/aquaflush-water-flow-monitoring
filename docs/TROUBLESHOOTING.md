# Troubleshooting for future reuse

[Back to project overview](../README.md) · [Setup](SETUP.md) · [Hardware](HARDWARE.md)

These are source-based checks for anyone who later opens or reuses the prototype. They are not a log of newly observed failures or completed repairs.

| Symptom | Checks and likely causes |
|---|---|
| `LiquidCrystal_I2C.h: No such file or directory` | Install the intended LCD library and reopen the sketch. Check that the installed library actually provides this header. |
| Constructor or `init()` compilation error | A similarly named LCD library may expose a different API. Compare it with the reference implementation in [Setup](SETUP.md). |
| `sei` or board-specific compilation errors | Check that **Arduino Uno** and the **Arduino AVR Boards** platform are selected. |
| IDE requests a matching sketch folder | Keep the `.ino` file inside `firmware/AquaFlush_Original_Recovered/` and open it from that matching folder. |
| No upload port appears | Check the USB data cable, connection, operating-system device recognition, and any driver required by the actual board's USB interface. |
| LCD backlight is off | Confirm the actual backpack supply rating, power, ground, and connections before powering it. |
| LCD is lit but shows no readable text | Check contrast, SDA/SCL, and the backpack address. The code assumes `0x27`. |
| Serial text is unreadable | Select the correct port and **9600 baud**. |
| Flow remains at zero | Check the pulse connection to D2, common ground, sensor orientation/flow requirements, and whether the sensor is producing compatible pulses. A zero reading alone does not identify a blockage. |
| Readings are inconsistent | Recheck signal connections and source conditions. The assumed calibration, approximate interval, and shared-counter access also limit this sketch. |
| Pump does not respond to flow | The recovered sketch contains no pump-control routine or relay output. Refer to [Project scope](PROJECT_SCOPE.md). |
| Second-row pump message does not appear | That text is visible in a historical photo but is absent from the recovered source. |

Exact module ratings and sensor identification must be confirmed before reconnecting hardware. See the [reference wiring notes](HARDWARE.md).
