#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern"C"
{
  void SPIdata();
  //volatile uint8_t data_rx[1];
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}


