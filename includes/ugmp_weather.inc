///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////     COPYRIGHT (C) GTA: UNDERGROUND    ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined UGMP_WEATHER_INCLUDED
	#endinput
#endif
#define UGMP_WEATHER_INCLUDED
#pragma library UGMP_WEATHER

///////////////////////////// DEFINES
//// Weather data interpreting types - affects how the weather is processed (all games except SA use a different way to calculate sun sizes, and don't use a directional multiplier, for example)
#define WEATHER_HANDLING_DEFAULT			0
#define WEATHER_HANDLING_GTAIII				1
#define WEATHER_HANDLING_GTAVC				2
#define WEATHER_HANDLING_GTALCS				3
#define WEATHER_HANDLING_GTAVCS				4
#define WEATHER_HANDLING_BULLY				5

//// Weather types. This controls main effects such as rain streaks
#define WEATHERTYPE_DEFAULT					0
#define WEATHERTYPE_RAINY					1
#define WEATHERTYPE_CLOUDY					2
#define WEATHERTYPE_FOGGY					3
#define WEATHERTYPE_HURRICANE				4
#define WEATHERTYPE_SNOWY					5
#define WEATHERTYPE_SNOWSTORM				6
#define WEATHERTYPE_SANDSTORM				7

//// Postfx overlay types. For stock SA postfx, stick to COLOURFILTER_SA as UG doesn't use the broken PC timecycle and instead uses ps2 overlay without blur
#define COLOURFILTER_NONE					0
#define COLOURFILTER_DEFAULT				1
#define COLOURFILTER_III					2
#define COLOURFILTER_VC						3
#define COLOURFILTER_SA						4	
#define COLOURFILTER_LEEDS					5
#define COLOURFILTER_BULLY_MODULATE			6

//// Time cycle fields which are RGB colours (each colour component is an 8-bit integer for rgb cols)
#define WEATHERPARAM_RGB_AMBIENT			0
#define WEATHERPARAM_RGB_AMBIENT_OBJ		1
#define WEATHERPARAM_RGB_AMBIENT_BL			2
#define WEATHERPARAM_RGB_AMBIENT_OBJ_BL		3
#define WEATHERPARAM_RGB_MATERIALMULT		4
#define WEATHERPARAM_RGB_DIRECTIONAL		5
#define WEATHERPARAM_RGB_SKYTOP				6
#define WEATHERPARAM_RGB_SKYBOT				7
#define WEATHERPARAM_RGB_FOG				8
#define WEATHERPARAM_RGB_SUNCORE			9
#define WEATHERPARAM_RGB_SUNCORONA			10
#define WEATHERPARAM_RGB_LOWCLOUDS			11
#define WEATHERPARAM_RGB_FLUFFYCLOUDSBOT	12
#define WEATHERPARAM_RGB_FLUFFYCLOUDSTOP	13

//// Time cycle fields which are RGBA colours (each colour component is a float for rgba cols)
#define WEATHERPARAM_RGBA_WATER				0
#define WEATHERPARAM_RGBA_POSTFX1			1
#define WEATHERPARAM_RGBA_POSTFX2			2

//// Time cycle fields which are floats
#define WEATHERPARAM_FLOAT_SUNSIZE			0
#define WEATHERPARAM_FLOAT_SPRITESIZE		1
#define WEATHERPARAM_FLOAT_SPRITEBGHT		2
#define WEATHERPARAM_FLOAT_FARCLIP			3
#define WEATHERPARAM_FLOAT_FOGSTART			4
#define WEATHERPARAM_FLOAT_LIGHTGROUNDBGHT	5
#define WEATHERPARAM_FLOAT_NIGHTFACTOR		6
#define WEATHERPARAM_FLOAT_CLOUDALPHA		7
#define WEATHERPARAM_FLOAT_BLUROFFSET		8

//// Time cycle fields which are integers (8-bit internally!!!!)
#define WEATHERPARAM_INT_SHADOWSTRENGTH		0
#define WEATHERPARAM_INT_LIGHTSHDSTRENGTH	1
#define WEATHERPARAM_INT_POLESHDSTRENGTH	2
#define WEATHERPARAM_INT_WATERFOGALPHA		3
#define WEATHERPARAM_INT_RADIOSITYINT		4
#define WEATHERPARAM_INT_RADIOSITYINTLIMIT	5		

//// Weather flags - mostly controls fx
#define WEATHERPARAM_FLAG_HEATHAZE			1
#define WEATHERPARAM_FLAG_SUNGLARE			2
#define WEATHERPARAM_FLAG_NOCLOUDCOVERAGE	4
#define WEATHERPARAM_FLAG_EXTRASUNNYNESS	8
#define WEATHERPARAM_FLAG_CANHAVERAINBOWS	16
#define WEATHERPARAM_FLAG_BEASTIE			32

//// Seasons
#define SEASON_DONT_OVERRIDE				-1
#define SEASON_SUMMER						0
#define SEASON_AUTUMN						1
#define SEASON_WINTER						2
#define SEASON_SPRING 						3

//// Weather types
// GTA: SA weather types
#define	EXTRASUNNY_LA						0
#define	SUNNY_LA							1
#define	EXTRASUNNY_SMOG_LA					2
#define	SUNNY_SMOG_LA						3
#define	CLOUDY_LA							4
#define	SUNNY_SF							5
#define	EXTRASUNNY_SF						6
#define	CLOUDY_SF							7
#define	RAINY_SF							8
#define	FOGGY_SF							9
#define	SUNNY_VEGAS							10
#define	EXTRASUNNY_VEGAS					11
#define	CLOUDY_VEGAS						12
#define	EXTRASUNNY_COUNTRYSIDE				13
#define	SUNNY_COUNTRYSIDE					14
#define	CLOUDY_COUNTRYSIDE					15
#define	RAINY_COUNTRYSIDE					16
#define	EXTRASUNNY_DESERT					17
#define	SUNNY_DESERT						18
#define	SANDSTORM_DESERT					19
#define	UNDERWATER_SA						20

// GTA: III weather types
#define SUNNY_NY							21
#define CLOUDY_NY							22
#define RAINY_NY							23
#define FOGGY_NY							24

// GTA: VC weather types
#define SUNNY_MIAMI							25
#define CLOUDY_MIAMI						26
#define RAINY_MIAMI							27
#define FOGGY_MIAMI							28
#define EXTRASUNNY_MIAMI					29
#define HURRICANE_MIAMI						30

// Bully: SE types - spring
#define SUNNY_NE							31
#define CLOUDY_NE							32
#define RAINY_NE							33
#define FOGGY_NE							34
#define EXTRASUNNY_NE						35
#define HURRICANE_NE						36

// Bully: SE weather types - winter
#define WINTER_SUNNY_NE						37
#define WINTER_CLOUDY_NE					38
#define SNOWY_NE							39
#define WINTER_FOGGY_NE						40
#define WINTER_EXTRASUNNY_NE				41
#define SNOWSTORM_NE						42

// Bully: SE weather types - fall
#define FALL_SUNNY_NE						43
#define FALL_CLOUDY_NE						44
#define FALL_RAINY_NE						45
#define FALL_FOGGY_NE						46
#define FALL_EXTRASUNNY_NE					47
#define FALL_HURRICANE_NE					48

// GTA: LCS weather types
#define SUNNY_NY_2							49
#define CLOUDY_NY_2							50
#define RAINY_NY_2							51
#define FOGGY_NY_2							52
#define EXTRASUNNY_NY						53
#define HURRICANE_NY						54
#define SNOWY_NY							55

// GTA: VCS weather types
#define SUNNY_MIAMI_2						56
#define CLOUDY_MIAMI_2						57
#define RAINY_MIAMI_2						58
#define FOGGY_MIAMI_2						59
#define EXTRASUNNY_MIAMI_2					60
#define HURRICANE_MIAMI_2					61
#define ULTRASUNNY_MIAMI					62

// Midway weathers
#define SUNNY_CHICAGO						63
#define CLOUDY_CHICAGO						64	
#define RAINY_CHICAGO						65
#define FOGGY_CHICAGO						66
#define EXTRASUNNY_CHICAGO					67

// Prairie countryside weathers
#define SUNNY_MIDWEST						68
#define CLOUDY_MIDWEST						69
#define RAINY_MIDWEST						70
#define FOGGY_MIDWEST						71
#define EXTRASUNNY_MIDWEST					72
#define SNOWY_MIDWEST						73

// GTA: SA extra colors
#define EXTRACOLOURS_1						74

// GTA: LCS extra colors
#define EXTRACOLOURS_2						75

// GTA: VC extra colors
#define EXTRACOLOURS_3						76

// Bully: SE extra colors
#define EXTRACOLOURS_4						77
#define EXTRACOLOURS_5						78
#define EXTRACOLOURS_6						79

// GTA: VCS extra colors
#define EXTRACOLOURS_7						80

///////////////////////////// NATIVES
//// Player-specific
native ToggleMoon(enable);
native ToggleStars(enable);
native ToggleLowClouds(enable);
native ToggleFluffyClouds(enable);
native ToggleRainbow(enable);
native SetCurrentSeason(season);
native TogglePlayerMoon(playerid, enable);
native TogglePlayerStars(playerid, enable);
native TogglePlayerLowClouds(playerid, enable);
native TogglePlayerFluffyClouds(playerid, enable);
native TogglePlayerRainbow(playerid, enable);
native SetPlayerSeason(playerid, season);
native ToggleSASunPositionFormula(enable);
native ToggleSASunPositionFormula_Pl(playerid, enable);
native IsSASunPositionFormulaEnabled(playerid);

//// Extra weather
native CreateExtraWeather(weatherHandlingType, weatherType, colourFilter, Float:windyness);
native DestroyExtraWeather(extraweatherid);
native SetExtraWeatherParam_RGB(extraweatherid, hour, param, red, green, blue);
native SetExtraWeatherParam_RGBA(extraweatherid, hour, param, Float:red, Float:green, Float:blue, Float:alpha);
native SetExtraWeatherParam_Float(extraweatherid, hour, param, Float:fParam);
native SetExtraWeatherParam_Int(extraweatherid, hour, param, nParam);
native SetExtraWeatherParam_Flags(extraweatherid, flags);
native SetExtraWeatherParam_Windyness(extraweatherid, Float:windyness);