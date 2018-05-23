#pragma once
#include "Graphics/GPUModel.h"
namespace resources
{
   class AssetManager;
}
class HexagonGrid;
class HexagonTile;
class D3D11Renderer;
class ITileState
{
public:
  enum State
  {
    Water,
    Swamp,
    Grass,
    Savannah,
    Desert,
    Mountain
  };
  static ITileState* Create( float wetness );
  static void Initialize( resources::AssetManager& asset_manager );

  ITileState(float wetness, const char* model);
  virtual ITileState* Update(HexagonGrid* grid, HexagonTile* tile ) = 0;
  virtual void Draw( D3D11Renderer& gfx, const Vec2& position ) = 0;
  virtual float CalculateWaterTransition(ITileState* other)=0;
  float wetness();
  void set_wetness(float wetness);
  State Type();
protected:
  float wetness_;
  ModelHandle model_;

private:
  static resources::AssetManager* asset_manager_;
};
