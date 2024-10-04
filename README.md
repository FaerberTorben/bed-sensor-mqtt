# mqtt-bed-sensor
MQTT Bed Sensor/Scales for bed occupancy

## Requirements
### Hardware
- [HX711 Amplifier + Load Cells](https://amzn.eu/d/dDlLHKy)
- [ESP8266](https://amzn.eu/d/1L4XS7H)
    Important it needs to be a board with 5v output!

### Libraries
- [HX711](https://github.com/bogde/HX711) library - available through Arduino IDE library manager
- [PubSubClient](https://github.com/knolleary/pubsubclient) library - available through Arduino IDE library manager
- [ESP boards](https://github.com/esp8266/Arduino)

## Calibration
1. Load calibration sketch, no weight on the bed/scale
2. Open serial monitor, watch starting measurements
3. Place weight on bed/scale and check new measurements printed on monitor
4. Adjust calibration factor variable and repeat steps till values are correct. Take note of calibration factor

## Bed sensor
1. Load sketch, no weight on the bed/scale
2. Configure all Variables in the config.h file
3. Watch output on serial monitor, place weight on bed/scale and check if the read-out is correct.
4. If everything is ok, unplug and plug into main power supply!