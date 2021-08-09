#include "gfxlib.h"

int main(int argc, char* args[])
{
#ifdef __APPLE__
    chdir(dirname(args[0]));
    chdir("../Resources");
#endif
    gfxEffects32();
    gfxDemo8();
    gfxEffects8();
    gfxDemo32();
    gfxFontView();
    return 0;
}
