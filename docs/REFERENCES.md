# References and source notes

[Back to project overview](../README.md)

## Project materials

Original team repository: [ShaniceReih/AquaFlush-Water-Flow-Monitoring](https://github.com/ShaniceReih/AquaFlush-Water-Flow-Monitoring). This independent edition retains the group attribution documented in [ATTRIBUTION.md](ATTRIBUTION.md).

1. **AquaFlush project archive supplied by the team.** May 2025 project, documentation revised October 2026. Contains the recovered Arduino sketch, project notes, five photographs, and the earlier report titled *AquaFlash Lab Report.pdf*. This was the local source package for the present documentation revision.
2. **Recovered/reconstructed firmware.** [`AquaFlush_Original_Recovered.ino`](../firmware/AquaFlush_Original_Recovered/AquaFlush_Original_Recovered.ino). The archive attributes its recovery to a screenshot of presentation slide 8; the lost original source and slide deck were not supplied.
3. **Original prototype photographs.** See the [photo catalog](PHOTO_GALLERY.md). Presentation slide numbers are inherited from the supplied catalog.

## Primary technical references

Technical references were reviewed on **22 October 2026**. They support the setup and platform explanations; they do not validate the historical prototype.

4. **Arduino. UNO R3 documentation.** Board family and ATmega328P platform.  
   https://docs.arduino.cc/hardware/uno-rev3/

5. **Arduino. UNO R3 full pinout.** Reference for D2/interrupt and A4/SDA, A5/SCL assignments.  
   https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf

6. **Arduino. Sketch specification.** Requires the primary `.ino` filename to match the sketch root folder.  
   https://docs.arduino.cc/arduino-cli/sketch-specification/

7. **Arduino. Installing a library in Arduino IDE 2.** Official library-installation workflow.  
   https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-installing-a-library/

8. **johnrickman. LiquidCrystal_I2C source and metadata.** Reference LCD API; inspected metadata reports version 1.1.4, author Frank de Brabander, and AVR support. The historical dependency is not identified by this reference.  
   https://github.com/johnrickman/LiquidCrystal_I2C  
   https://github.com/johnrickman/LiquidCrystal_I2C/blob/master/library.properties  
   https://github.com/johnrickman/LiquidCrystal_I2C/blob/master/LiquidCrystal_I2C.h

9. **GitHub Docs. Adding a file to a repository.** Browser upload and commit workflow.  
   https://docs.github.com/en/repositories/working-with-files/managing-files/adding-a-file-to-a-repository

10. **GitHub Docs. Deleting files in a repository.** Removing an obsolete report after its replacement is available.  
    https://docs.github.com/en/repositories/working-with-files/managing-files/deleting-files-in-a-repository

## Records still unavailable

No exact sensor datasheet, original purchase list, original IDE/library version record, measured calibration dataset, or demonstration video was supplied. Background flooding concerns are retained as the team's project motivation rather than presented as newly researched local findings.

