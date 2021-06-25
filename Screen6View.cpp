#include <gui/screen6_screen/Screen6View.hpp>

Screen6View::Screen6View()
{

}

void Screen6View::setupScreen()
{
    Screen6ViewBase::setupScreen();
}

void Screen6View::tearDownScreen()
{
    Screen6ViewBase::tearDownScreen();
}

void Screen6View::handleTickEvent()
{
    uint16_t currentValue = boxProgress1.getValue();
    
    if (currentValue < 100)
    {
        increase = true;
    }
    
    uint16_t nextValue = increase == true ? currentValue+1 : currentValue-1;
    boxProgress1.setValue(nextValue);
    
    if(currentValue==100)
    {
      ClearingBuffer.setVisible(false);
      ClearingBuffer.invalidate();
      Success.setVisible(true);
      Success.invalidate();
    }
}
