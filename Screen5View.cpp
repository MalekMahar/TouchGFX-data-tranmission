#include <gui/screen5_screen/Screen5View.hpp>

extern uint8_t data_rx[3];
Screen5View::Screen5View()
{

}

void Screen5View::setupScreen()
{
    Screen5ViewBase::setupScreen();
    Counter = 0;
}

void Screen5View::tearDownScreen()
{
    Screen5ViewBase::tearDownScreen();
}

void Screen5View::handleTickEvent()
{
    if ((Counter++) % 10 == 0)
    {
        updateWildcardTexts(Counter / 10);
    }
}

void Screen5View::updateWildcardTexts(uint16_t tick)
{

Unicode::snprintf(bufferTXT1Buffer, 5, "%d", data_rx[0]);
bufferTXT1.invalidate();

Unicode::snprintf(bufferTXT2Buffer, 5, "%d", data_rx[1]);
bufferTXT2.invalidate();

Unicode::snprintf(bufferTXT3Buffer, 5, "%d", data_rx[2]);
bufferTXT3.invalidate();
}
    
