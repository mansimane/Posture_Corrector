int s_input = D0;
int slouch = 0;


void setup() {
    pinMode(s_input, INPUT);
}

void loop() {
    slouch = digitalRead(s_input);
    
    if(slouch == 1)
    {
        delay(200);
        if(slouch == 1)
        {
            Serial.print("Hello, you are slouching");
            Particle.publish("Hello, you are slouching");
            delay(1000);
        }
    }
    else
    {
        Serial.print("No Slouch");
        Particle.publish("No Slouch");
    }
    
}
