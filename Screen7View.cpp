#include <gui/screen7_screen/Screen7View.hpp>

Screen7View::Screen7View()
{

}

void Screen7View::setupScreen()
{
    Screen7ViewBase::setupScreen();
    Counter = 0;
}

void Screen7View::tearDownScreen()
{
    Screen7ViewBase::tearDownScreen();
}

void Screen7View::handleTickEvent()
{
    if ((Counter++) % 10 == 0)
    {
        updateWildcardTexts(Counter / 10);
    }
}

void Screen7View::updateWildcardTexts(uint16_t tick)
{

Unicode::snprintf(bufferTX1Buffer, 5, "%d", 0);
bufferTX1.invalidate();

Unicode::snprintf(bufferTX2Buffer, 5, "%d", 0);
bufferTX2.invalidate();

Unicode::snprintf(bufferTX3Buffer, 5, "%d", 0);
bufferTX3.invalidate();
}
    
