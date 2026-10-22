# Project scope and source provenance

[Back to project overview](../README.md)

## Independent repository

This is Phoebien D. Cañete's separately maintained portfolio and documentation edition of the group project shared in the [original team repository](https://github.com/ShaniceReih/AquaFlush-Water-Flow-Monitoring). Original team credits and preserved source materials are recorded in [Attribution](ATTRIBUTION.md).

## Documentation basis

This revision documents the May 2025 AquaFlush academic prototype using the uploaded project archive: its recovered `.ino` file, README, hardware/scope notes, photograph catalog, five prototype photographs, and earlier laboratory report. The original presentation slide deck is referenced by those materials but was not included in the uploaded archive and has not been independently rechecked here.

According to the supplied documentation, the source file was lost and the approximately 63-line sketch was reconstructed from a screenshot of presentation slide 8. A project member identified that sketch as the only firmware used. It is therefore described as recovered/reconstructed source rather than a byte-for-byte authenticated original.

The recovered sketch is preserved unchanged in `firmware/AquaFlush_Original_Recovered/`, using the matching sketch-folder name expected by Arduino. This independent repository stores one canonical copy.

## Implementation boundaries

| Capability | Evidence in the uploaded materials | Status |
|---|---|---|
| Rising-edge pulse counting on D2 | Recovered sketch | Present in source |
| Estimated flow in L/hour | Recovered calculation and output | Present; sensor factor unverified |
| 16×2 I²C LCD output | Recovered sketch and photographs | Present in source / display shown |
| Serial Monitor output | `Serial.begin(9600)` and print calls | Present in source |
| Miniature drainage model | Prototype photographs | Physically documented |
| Relay and water pump | Photographs and component notes | Exhibit hardware documented |
| Automatic relay/pump control | No corresponding pin or routine in recovered sketch | Not established by available source |
| Clog classification or alarm thresholds | No corresponding routine | Proposed extension |
| Internet transfer or monitoring dashboard | No corresponding network code | Proposed extension |
| Measurement accuracy and calibrated performance | No supporting quantitative dataset in uploaded archive | Not established |

## Photograph and source discrepancy

The LCD close-up displays both a flow value and a pump-status label. The recovered sketch prints flow text only and contains no pump-status display or actuation logic. The uploaded materials do not resolve this difference. The photograph is retained as a record of the exhibit without treating its label as proof of automatic pump behavior.

## Limits of this revision

- Additional physical trials were not available. This revision includes no trial-testing section, new readings, measured error percentages, or reconstructed experimental results.
- The exact sensor model, module ratings, original component prices, and historical IDE/library versions are not recorded.
- Diagrams show source-derived logic and reference connections; they are not verified as-built circuit drawings.
- Documentation and asset checks do not establish compilation success, sensor accuracy, or operation on physical hardware.
- No demonstration video was supplied. An existing recording can be linked later if one is available.

## Future development roadmap

| Priority | Proposed development | Purpose |
|---|---|---|
| 1 | Recover exact component identities and improve the hydraulic layout | Establish the hardware and water-path assumptions |
| 2 | Revise interval handling, shared-counter access, and numeric conversion in a separate firmware iteration | Improve the measurement implementation |
| 3 | Add complementary sensing and develop a supported obstruction-detection method | Distinguish blockages from supply or hydraulic changes |
| 4 | Introduce rated actuator switching and defined fault behavior | Support a controlled response if a future system is developed |
| 5 | Add connectivity and a monitoring interface | Share readings beyond the local display |

These are possible future iterations, not work required to apply this documentation package and not completed features of the 2025 sketch.

## Team attribution

Names and contribution categories are retained from the submitted README. They are team-reported attributions rather than independently reconstructed individual work histories.

## Project naming

The supplied scope notes cite the broader conceptual presentation title, "Project AquaFlush: IoT-Based Smart Water Clogging Detection and Automation System for Small Urban Drainage Management." This documentation uses a water-flow monitoring title to match the available implementation. The updated report filename consistently uses **AquaFlush**.

