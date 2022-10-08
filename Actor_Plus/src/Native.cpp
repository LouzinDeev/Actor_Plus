#include "Native.h"

namespace Native {

    cell AMX_NATIVE_CALL HelloWorld(AMX* amx, cell* params) {
        logprintf("Hello, Aki e o louzin");
        return 1;
    }

    AMX_DECLARE_NATIVE(IsPlayerAimingActor) {
        
        int playerid = static_cast<int>(params[1]);
        int actorid = static_cast<int>(params[2]);

        return actor_p::IsPlayerAimingActor(playerid, actorid);
    }

    AMX_DECLARE_NATIVE(SetActorChatBubble) {
        int actorid = static_cast<int>(params[1]);
        
        char* text = new char[101];
        lzn::amx_GetStr(amx, params[2], text, 100);

        actor_p::SetActorChatBubble(actorid, static_cast<const char*>(text));
        return 1;
    }

    AMX_NATIVE_INFO PluginNatives[] = {
        {"HelloWorld", HelloWorld},
        {"IsPlayerAimingActor", IsPlayerAimingActor},
        {"SetActorChatBubble", SetActorChatBubble},
        {0, 0}
    };

}