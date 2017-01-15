// ESP8266 over MQTT controlling analog Led strip
// References pulled from various sources online
// so I have no ownership of the code.
  
//includes

#include <ESP8266WiFi.h>
#include <PubSubClient.h>


// setup defines

#define wifi_ssid "Put Ya SSID Here" 
#define wifi_password "Password goes here"

#define mqtt_server "somemqtt.com" 
#define mqtt_port "mqttPort"
#define mqtt_user "mqttUser" 
#define mqtt_password "mqttPassword" 

#define RedLights 5
#define GreenLights 6
#define BlueLights 7
     
 
void setup() {
  Serial.begin(115200);
  
  pinMode(RedLights, OUTPUT);
  pinMode(GreenLights, OUTPUT);
  pinMode(BlueLights, OUTPUT);
}
 
 