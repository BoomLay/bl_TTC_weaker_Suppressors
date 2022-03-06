class CfgPatches
{
	class bl_TTC_weaker_Suppressors
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{  
			"DZ_Data",
			"M14Suppressor",
			"TTCSuppressor",
			"TTC_MCX",
			"TTC_Pistol_Parts",
			"TTC_Attachements_DMR",
			"TTC_AKMod"
		};
	};
};
class CfgMods
{
	class bl_TTC_weaker_Suppressors
	{
		dir="bl_TTC_weaker_Suppressors";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="bl_TTC_weaker_Suppressors";
		credits="Morty for Mortys Weapons - read the ReadMe.txt"; 
		author="BoomLay";
		authorID="76561198001453933";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
	};
};


class CfgVehicles
{
	class ItemSuppressor;
	class TTC_M14Suppressor_BASE: ItemSuppressor
	{

	};
	class TTC_M14Suppressor: TTC_M14Suppressor_BASE
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_Universal_Suppressor_BASE: ItemSuppressor
	{

	};
	class TTC_Universal_Suppressor_BLACK: TTC_Universal_Suppressor_BASE
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_Universal_Suppressor_TAVOR: TTC_Universal_Suppressor_BASE
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_Universal_Suppressor_TAVOR: TTC_Universal_Suppressor_BASE
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_AKMod_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_MCX_Spear_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_PistolSuppressor: ItemSuppressor
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};

	class TTC_DMR_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=8;
				};
			};
		};
	};
};


