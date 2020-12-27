///////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////     COPYRIGHT (C) GTA: UNDERGROUND    ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined UGMP_MODELS_INCLUDED
	#endinput
#endif
#define UGMP_MODELS_INCLUDED
#pragma library UGMP_MODELS

#define MAX_MODEL_NAME						40
#define INVALID_VEHICLE_MODEL               0xFFFFFFFF
#define INVALID_PED_MODEL					0xFFFFFFFF
#define INVALID_WEAPON_MODEL				0xFFFFFFFF
#define INVALID_WEAPON_TYPE 				0xFFFF

#define VEHICLE_TYPE_AUTOMOBILE				0
#define VEHICLE_TYPE_MTRUCK					1
#define VEHICLE_TYPE_HEAVY_INDUSTRIAL		2
#define VEHICLE_TYPE_HELI					3
#define VEHICLE_TYPE_PLANE					4
#define VEHICLE_TYPE_BOAT					5
#define VEHICLE_TYPE_HOVERCRAFT				6
#define VEHICLE_TYPE_ATV					7
#define VEHICLE_TYPE_TRAIN					8
#define VEHICLE_TYPE_BIKE					9
#define VEHICLE_TYPE_TRIKE					10
#define VEHICLE_TYPE_QUAD					11
#define VEHICLE_TYPE_BMX					12
#define VEHICLE_TYPE_TRAILER				13

#define CARMODTYPE_UGMP_FRONT_BUMPER		14
#define CARMODTYPE_UGMP_REAR_BUMPER			15
#define CARMODTYPE_FRONT_BULLBAR			16
#define CARMODTYPE_BACK_BULLBAR				17
#define CARMODTYPE_SIDESKIRT_LEFT			18
#define CARMODTYPE_SIDESKIRT_RIGHT			19
#define CARMODTYPE_MISC1					20
#define CARMODTYPE_MISC2					21
#define CARMODTYPE_MISC3					22

#define VEHICLE_DONT_MODIFY					0
#define VEHICLE_MODIFY_AS_NORMAL_VEHICLE	1
#define VEHICLE_MODIFY_AS_LOWRIDER			2
#define VEHICLE_MODIFY_AS_STREETRACER		3

///////////////////////////// NATIVES
//// Vehicle models
native IsValidVehicleModel(modelid);
native GetNumVehicleModels();
native GetValidVehicleModelAt(index);
native GetValidVehicleModelAtEx(index, &modelid, &vehtype, &modifyas, name[], namelen = sizeof(name));
native GetRandomVehicleModel();

//// Ped models
native IsValidPedModel(modelid);
native GetNumPedModels();
native GetValidPedModelAt(index);
native GetRandomPedModel();

//// Weapon types + models
native GetWeaponHighestParentType(weapontype);
native GetNumWeaponModels();
native GetValidWeaponModelAt(index);
native GetValidWeaponTypeAt(index);
native IsValidWeaponType(weapontype);
native IsValidWeaponModel(modelid);
native GetRandomWeaponModel();
native GetRandomWeaponType();
