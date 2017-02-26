
#include <Adafruit_GFX.h>    // Core graphics library
//#include <Adafruit_TFTLCD.h> // Hardware-specific library
#include <Adafruit_ILI9341.h>

class LedSimulation {
  private:
    Adafruit_ILI9341 *pTft;
    unsigned char Scene[16][16];
    unsigned char SceneWas[16][16];
  public:
    LedSimulation::LedSimulation(Adafruit_ILI9341 &tft);
    void clear(void);
    void clearScene(void);
    void display(void);
    void draw(void);
    void setScene(unsigned char Scene[16][16]);
    void setLedOn(int x, int y);
    void setLedOff(int x, int y);
    void setLedBlue(int x, int y);
    void setLedGreen(int x, int y);
};
