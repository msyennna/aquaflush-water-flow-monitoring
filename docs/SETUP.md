# Source review and setup guide

[Back to project overview](../README.md)

This guide explains how to open the historical sketch and how it could be reused with confirmed hardware. Updating the documentation does not require connecting a board. No additional physical trials were available for this revision.

## Dependencies and recorded versions

| Item | Required selection or API | Version information |
|---|---|---|
| Arduino IDE | Desktop IDE; steps below use the IDE 2.x workflow | Exact 2025 IDE version not recorded |
| Board package | Arduino AVR Boards by Arduino | Historical package version not recorded |
| Board | Arduino Uno / ATmega328P | Board identifier: `arduino:avr:uno` |
| `Wire.h` | I²C support bundled with the AVR board platform | Supplied by the selected board package |
| `LiquidCrystal_I2C.h` | Three-argument constructor, `init()`, `backlight()`, `setCursor()`, and `print()` | Exact original author/version not recorded |
| Serial Monitor | 9600 baud | Specified in the recovered sketch |

**Library reference:** The [johnrickman/LiquidCrystal_I2C source](https://github.com/johnrickman/LiquidCrystal_I2C) exposes the constructor and `init()` API used by the sketch. Its inspected `library.properties` reports version **1.1.4**, author **Frank de Brabander**, and AVR support. This identifies a reference implementation, not the original installed dependency or a newly verified build. The repository describes itself as archived. Libraries with similar display names can expose different APIs, so retain the actual installed source/version if this project is built again.

## 1. Extract the package

On Windows, right-click the ZIP, choose **Extract All**, and open the project root containing `README.md`, `docs`, `assets`, and `firmware`. Work from the extracted folder rather than opening files inside the ZIP.

## 2. Open the correctly named sketch

In Arduino IDE, choose **File > Open** and select:

`firmware/AquaFlush_Original_Recovered/AquaFlush_Original_Recovered.ino`

The sketch folder matches the `.ino` filename, as required by Arduino. This repository stores one unchanged recovered sketch in that folder.

## 3. Select the board platform

1. Open **Boards Manager**.
2. Search for **Arduino AVR Boards** by Arduino and install it if necessary.
3. Select **Arduino Uno** using the board selector or the **Tools > Board** menu.

A board connection and serial port are not needed merely to open the source or compile it.

## 4. Install the LCD dependency

1. Open **Library Manager** and search for `LiquidCrystal_I2C`.
2. Check the author, source, and API rather than choosing solely by display name.
3. Alternatively, obtain the referenced library through its repository's **Code > Download ZIP**, then use **Sketch > Include Library > Add .ZIP Library**.
4. Keep one intended implementation active to avoid ambiguous duplicate libraries.

`Wire.h` comes with the board platform; it does not need a separate third-party installation.

## 5. Review and compile

1. Confirm the selected board is **Arduino Uno**.
2. Click **Verify**.
3. If an error occurs, see [Troubleshooting](TROUBLESHOOTING.md).

This revision provides instructions and source documentation. It does not claim a fresh successful compilation; no Arduino toolchain was run during the revision.

## 6. Upload only if hardware becomes available

1. Confirm the module ratings and reference connections in [Hardware](HARDWARE.md).
2. Connect the Uno using a USB data cable.
3. Select the board's port.
4. Click **Upload**.
5. Open **Serial Monitor** and choose **9600 baud**.

These are reuse instructions, not a request to reconstruct the prototype or perform new trials.

## Output described by the source

| Stage | LCD behavior | Serial behavior |
|---|---|---|
| Initialization | `Flow Monitor` | Port starts at 9600 baud |
| Each approximately one-second update | `Flow: <integer> L/h` | `<integer> L/hour` followed by a newline |

`<integer>` is a placeholder describing the output format, not a captured reading. The recovered source does not write a second-row pump-status message.

## Configuration values in the recovered sketch

| Setting | Value | Interpretation |
|---|---|---|
| Flow signal pin | D2 | External interrupt 0 on Uno |
| Interrupt edge | `RISING` | One count per detected rising edge |
| LCD geometry | 16 columns × 2 rows | I²C character display |
| LCD address | `0x27` | Must match the actual backpack |
| Update interval | Approximately 1000 ms | Uses a `millis()` comparison |
| Flow divisor | `7.5` | Assumed sensor relationship; not calibrated for the unidentified module |

See [References](REFERENCES.md) for Arduino's official sketch and library documentation.

