///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////     COPYRIGHT (C) GTA: UNDERGROUND    ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined UGMP_VEHICLES_INCLUDED
	#endinput
#endif
#define UGMP_VEHICLES_INCLUDED
#pragma library UGMP_VEHICLES

//// Radio stations
#define RADIO_OFF							0
#define USER_TRACKS							1

// GTA: SA radio stations
#define RADIO_CA_PLAYBACK					2
#define RADIO_CA_KROSE						3
#define RADIO_CA_KDST						4
#define RADIO_CA_BOUNCE						5
#define RADIO_CA_SFUR						6
#define RADIO_CA_RADIO_LOS_SANTOS			7
#define RADIO_CA_RADIO_X					8
#define RADIO_CA_CSR						9
#define RADIO_CA_KJAH_WEST					10
#define RADIO_CA_MASTER_SOUNDS				11
#define RADIO_CA_WCTR						12

// GTA: III/GTA: LCS radio stations
#define RADIO_NY_HEAD_RADIO					13
#define RADIO_NY_DOUBLE_CLEF				14
#define RADIO_NY_GAME_RADIO					15
#define RADIO_NY_FREE						16
#define RADIO_NY_MSX						17
#define RADIO_NY_KJAH						18
#define RADIO_NY_LIBERTY_JAM				19
#define RADIO_NY_FLASHBACK					20
#define RADIO_NY_DELMUNDO					21
#define RADIO_NY_RISE						22
#define RADIO_NY_LIPS						23
#define RADIO_NY_CHATTERBOX					24

// GTA: VC/GTA: VCS radio stations
#define RADIO_MI_KCHAT						25
#define RADIO_MI_ESPANTOSO					26
#define RADIO_MI_WILDSTYLE					27
#define RADIO_MI_PARADISE					28
#define RADIO_MI_EMOTION					29
#define RADIO_MI_FEVER						30
#define RADIO_MI_FRESH						31
#define RADIO_MI_VCPR						32
#define RADIO_MI_VCFL						33
#define RADIO_MI_VROCK						34
#define RADIO_MI_FLASH						35
#define RADIO_MI_WAVE						36

// Atlantis radio stations
#define RADIO_AT_EMPIRE						37
#define RADIO_AT_FLASHBACK					38
#define RADIO_AT_KBIG						39
#define RADIO_AT_PRBS						40

// Bullworth radio stations
#define RADIO_NE_8TRACK						41
#define RADIO_NE_ARROW						42
#define RADIO_NE_BULLWORTH_ROCK				43
#define RADIO_NE_HIGH_VOLTAGE				44

//// Vehicle colour types
#define VEHICLE_COLOR_PRIMARY				0
#define VEHICLE_COLOR_SECONDARY				1
#define VEHICLE_COLOR_TERTIARY				2
#define VEHICLE_COLOR_QUATERNARY			3

//// Additional car mod types
#define CARMODTYPE_UGMP_FRONT_BUMPER		14
#define CARMODTYPE_UGMP_REAR_BUMPER			15
#define CARMODTYPE_FRONT_BULLBAR			16
#define CARMODTYPE_BACK_BULLBAR				17
#define CARMODTYPE_SIDESKIRT_LEFT			18
#define CARMODTYPE_SIDESKIRT_RIGHT			19
#define CARMODTYPE_MISC1 					20
#define CARMODTYPE_MISC2					21
#define CARMODTYPE_MISC3					22
#define NUM_CAR_MOD_TYPES					23

//// The default pearlescent color
#define DEFAULT_PEARL_COLOR_R               165.75
#define DEFAULT_PEARL_COLOR_G               165.75
#define DEFAULT_PEARL_COLOR_B               165.75

///////////////////////////// NATIVES
//// Vehicles
native ChangeVehicleColorRGB(vehicleid, color, red, green, blue);
native ToggleVehicleColorRGB(vehicleid, color, enable);
native ChangeVehiclePearlColor(vehicleid, color);
native ChangeVehiclePearlColorRGB(vehicleid, red, green, blue);
native GetVehicleComponentTypeEx(component);

//// Radio
native SetVehicleRadioStation(vehicleid, station);
native GetVehicleRadioStation(vehicleid);
native GetRadioStationName(station, str[], len = sizeof(str));
native EnableRadioAutoTune(enable);
native IsRadioAutoTuneEnabled();

///////////////////////////// CALLBACKS
forward OnPlayerChangeRadio(playerid, vehicleid, oldstation, newstation);