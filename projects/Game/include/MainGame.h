#pragma once

#include <UniDx.h>

using namespace UniDx;

namespace UniDx
{
    class Scene;
    class TextMesh;
}

class MainGame : public UniDx::Singleton<MainGame>
{
public:
    virtual ~MainGame();

    void AddScore(int n);

    unique_ptr<UniDx::Scene> CreateScene();



protected:
    int score = 0;
    unique_ptr<UniDx::GameObject> mapObj;
    UniDx::TextMesh* scoreTextMesh;
    Vector3 PlayerPosition;
    void createMap();
};