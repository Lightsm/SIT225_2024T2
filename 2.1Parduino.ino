#include <DHT.h>

#define DHTPIN 2      
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600); 
    dht.begin();         
}

void loop() {
    float temperature = dht.readTemperature();  
    float humidity = dht.readHumidity();        

    if (isnan(temperature) || isnan(humidity)) {
        Serial.println("Error, not able to get reading from DHT sensor!");
    } else {
        Serial.print("Temperature: ");
        Serial.print(temperature);
	        Serial.print(" °C, Humidity: ");
	        Serial.print(humidity);
	        Serial.println(" %");
	
	        Serial.print(temperature);
	        Serial.print(",");
	        Serial.println(humidity);
	    }
	
    delay(10000); 
}
