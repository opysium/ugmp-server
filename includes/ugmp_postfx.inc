///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////     COPYRIGHT (C) GTA: UNDERGROUND    ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined UGMP_POSTFX_INCLUDED
	#endinput
#endif
#define UGMP_POSTFX_INCLUDED
#pragma library UGMP_POSTFX

///////////////////////////// NATIVES
//// Player-specific
native TogglePlayerNightVision(playerid, enable);
native TogglePlayerInfraRed(playerid, enable);
native TogglePlayerCCTV(playerid, enable);
native TogglePlayerFogOverlay(playerid, enable);
native TogglePlayerDarknessFilter(playerid, enable, darknessAlpha);
native TogglePlayerVideoCameraOverlay(playerid, enable);