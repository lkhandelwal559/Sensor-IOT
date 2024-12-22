#include <wiringPi.h>
#include<conio.h>
#include <dht.h>
#include <stdio.h>

int main() {
    if (wiringPiSetup() == -1)
        return 1; // Error
    int pin = 2; // GPIO pin number (wiringPi pin numbering)
    if (dhtRead(pin, DHT22) == -1)
        return 1; // Error
    float temperature = dhtData[DHT_TEMPERATURE];
    float humidity = dhtData[DHT_HUMIDITY];
    printf("Temperature: %.2f°C\n", temperature);
    printf("Humidity: %.2f%%\n", humidity);
    return 0;
}
