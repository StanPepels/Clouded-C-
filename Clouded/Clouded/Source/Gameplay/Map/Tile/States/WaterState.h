#pragma once
#include "ITileState.h"
class WaterState : public ITileState
{
public:
  WaterState(float wetness);
  ITileState* Update( HexagonGrid* grid, HexagonTile* tile ) override;
  virtual float CalculateWaterTransition(ITileState * other) override;

  static float down_threshold_;
};