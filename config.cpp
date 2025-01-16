class CfgPatches
{
	class ModularDungeon
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class ModularDungeonMOD
	{
		dir = "ModularDungeon";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ModularDungeon";
		credits = "AJ45";
		author = "AJ45";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_CDAJ_DungeonHall_Room: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_Room.p3d";
	};
	class Land_CDAJ_DungeonHall_3Way: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_3Way.p3d";
	};
	class Land_CDAJ_DungeonHall_4Way: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_4Way.p3d";
	};
	class Land_CDAJ_DungeonHall_Corner: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_Corner.p3d";
	};
	class Land_CDAJ_DungeonHall_Doorway: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_Doorway.p3d";
	};
	class Land_CDAJ_DungeonHall_DoorwayDoor: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_DoorwayDoor.p3d";
        class Doors 
        {
            class DoorsTwin1
            {
                displayName="door Twin1";
                component="DoorsTwin1";
                soundPos="doorsTwin1_action";
                animPeriod=1;
                initPhase=0;
                initOpened=0.3;
                soundOpen="doorWoodTwinOpen";
                soundClose="doorWoodTwinClose";
                soundLocked="doorWoodTwinRattle";
                soundOpenABit="doorWoodTwinOpenABit";
            };
        };
	};
	class Land_CDAJ_DungeonHall_Hallway: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_Hallway.p3d";
	};
	class Land_CDAJ_DungeonHall_Single: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_Single.p3d";
	};
	class Land_CDAJ_DungeonHall_Stairs: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_Stairs.p3d";
	};
	class Land_CDAJ_DungeonHall_StairsCorner: HouseNoDestruct
	{
		scope=1;
		model="\ModularDungeon\ModularDungeon_StairsCorner.p3d";
	};
};