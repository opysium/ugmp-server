///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////     COPYRIGHT (C) GTA: UNDERGROUND    ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined UGMP_INCLUDED
	#endinput
#endif
#define UGMP_INCLUDED
#pragma library UGMP

#include <ugmp_weather>
#include <ugmp_postfx>
#include <ugmp_discord>
#include <ugmp_vehicles>
#include <ugmp_models>

///////////////////////////// DEFINES
//// Affects how players can get knocked off bikes
#define BIKE_KNOCK_OFF_DEFAULT 				0 
#define BIKE_KNOCK_OFF_NEVER 				1
#define BIKE_KNOCK_OFF_ALWAYS 				2

//// HUD 
#define HUD_COMPONENT_AMMO					1
#define HUD_COMPONENT_WEAPONICON			2
#define HUD_COMPONENT_HEALTH				4
#define HUD_COMPONENT_OXYGEN				8
#define HUD_COMPONENT_ARMOUR				16
#define HUD_COMPONENT_RADAR					32
#define HUD_COMPONENT_CROSSHAIR				64
#define HUD_COMPONENT_MONEY					128
#define HUD_COMPONENT_LASERDOT				256

//// Map offset types
#define MAPOFFSET_MIAMI						0
#define MAPOFFSET_NEWYORK					1
#define MAPOFFSET_NEWENGLAND				2

//// Limits
#define MAX_EXTRAWEATHERS					32

///////////////////////////// NATIVES
//// Math
native MT19937_Random(a, b);

//// Player-specific
native SetAircraftHeightLimitForPlayer(playerid, Float:heightLimit);
native SetJetpackHeightLimitForPlayer(playerid, Float:heightLimit);
native SetPlayerKnockedOffBikeState(playerid, knockState);
native SetPlayerFireProof(playerid, enable);
native TogglePlayerInfiniteSprint(playerid, enable);
native TogglePlayerSun(playerid, enable);
native TogglePlayerRubbish(playerid, enable);
native IsRubbishVisibleForPlayer(playerid);
native TogglePlayerRealTimeShadows(playerid, enable);
native TogglePlayerGrass(playerid, enable);

native Float:GetPlayerAircraftHeightLimit(playerid);
native Float:GetPlayerJetpackHeightLimit(playerid);

//// HUD
native TogglePlayerHUDComponents(playerid, hudComponents);
native SetPlayerHUDComponentsColour(playerid, hudComponents, intColour);			

//// Misc
native ApplyMapOffsetToCoords(type, &Float:x_coor, &Float:y_coor, &Float:z_coor);

//// Ped colours
native ChangePlayerPedColor(playerid, color1, color2, color3, color4);						
native GetPlayerPedColor(playerid, &color1, &color2, &color3, &color4);

///////////////////////////// CALLBACKS
forward OnVehicleResprayAtGarage(playerid, vehicleid, color1, color2, color3, color4);
forward OnLaserDotUpdate(playerid, weaponid, Float:x, Float:y, Float:z);