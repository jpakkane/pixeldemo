extern "C" {
#include<lua.h>
#include<lauxlib.h>
#include<lualib.h>
}


#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

const char luacode[] = R"(name = "Sample" .. " " .. "application")";

class Example : public olc::PixelGameEngine
{
public:
    Example()
    {
        // No error checking as this is demo code.
        lua_State *L = luaL_newstate();
        luaL_dostring(L, luacode);
        lua_getglobal(L, "name");
        sAppName = lua_tostring(L, -1);
        lua_close(L);
    }

public:
    bool OnUserCreate() override
    {
        // Called once at the start, so create things here
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
        // called once per frame
        for (int x = 0; x < ScreenWidth(); x++)
            for (int y = 0; y < ScreenHeight(); y++)
                Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand()% 255));
        return true;
    }
};


int main()
{
    Example demo;
    if (demo.Construct(256, 240, 4, 4))
        demo.Start();

    return 0;
}
