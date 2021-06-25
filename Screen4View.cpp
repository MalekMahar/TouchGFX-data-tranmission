#include <gui/screen4_screen/Screen4View.hpp>

Screen4View::Screen4View()
{

}

void Screen4View::setupScreen()
{
    Screen4ViewBase::setupScreen();
}

void Screen4View::tearDownScreen()
{
    Screen4ViewBase::tearDownScreen();
}

void Screen4View::handleTickEvent()
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
      ReceivingData.setVisible(false);
      ReceivingData.invalidate();
      Success.setVisible(true);
      Success.invalidate();
    }
}