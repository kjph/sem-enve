#define gHA 11
#define gHB 9
#define gHC 5
#define gLA 10
#define gLB 6
#define gLC 3

int speed=255/2;
int deadtime_ms=100;
int on_ms=50;

void setup()
{
    pinMode(gHA, OUTPUT);
    pinMode(gHB, OUTPUT);
    pinMode(gHC, OUTPUT);
    pinMode(gLA, OUTPUT);
    pinMode(gLB, OUTPUT);
    pinMode(gLC, OUTPUT);
}

void loop()
{
    commute_AB();
    commute_AC();
    commute_BC();
    commute_BA();
    commute_CA();
    commute_CB();
}

void commute_AB()
{
    delay(deadtime_ms);
    analogWrite(gHB, 0);
    analogWrite(gHC, 0);
    analogWrite(gLA, 0);
    analogWrite(gLC, 0);
    analogWrite(gHA, speed);
    analogWrite(gLB, HIGH);
    delay(on_ms_);
    analogWrite(gHA, 0);
    analogWrite(gLB, 0);
}

void commute_AC()
{
    delay(deadtime_ms);
    analogWrite(gHB, 0);
    analogWrite(gHC, 0);
    analogWrite(gLA, 0);
    analogWrite(gLB, 0);
    analogWrite(gHA, speed);
    analogWrite(gLC, HIGH);
    delay(on_ms_);
    analogWrite(gHA, 0);
    analogWrite(gLC, 0);
}

void commute_BA()
{
    delay(deadtime_ms);
    analogWrite(gHA, 0);
    analogWrite(gHC, 0);
    analogWrite(gLB, 0);
    analogWrite(gLC, 0);
    analogWrite(gHB, speed);
    analogWrite(gLA, HIGH);
    delay(on_ms_);
    analogWrite(gHB, 0);
    analogWrite(gLA, 0);
}

void commute_BC()
{
    delay(deadtime_ms);
    analogWrite(gHA, 0);
    analogWrite(gHC, 0);
    analogWrite(gLA, 0);
    analogWrite(gLB, 0);
    analogWrite(gHB, speed);
    analogWrite(gLC, HIGH);
    delay(on_ms_);
    analogWrite(gHB, 0);
    analogWrite(gLC, 0);
}

void commute_CA()
{
    delay(deadtime_ms);
    analogWrite(gHA, 0);
    analogWrite(gHB, 0);
    analogWrite(gLB, 0);
    analogWrite(gLC, 0);
    analogWrite(gHC, speed);
    analogWrite(gLA, HIGH);
    delay(on_ms_);
    analogWrite(gHC, 0);
    analogWrite(gLA, 0);
}

void commute_CB()
{
    delay(deadtime_ms);
    analogWrite(gHA, 0);
    analogWrite(gHB, 0);
    analogWrite(gLA, 0);
    analogWrite(gLC, 0);
    analogWrite(gHC, speed);
    analogWrite(gLB, HIGH);
    delay(on_ms_);
    analogWrite(gHC, 0);
    analogWrite(gLB, 0);
}

