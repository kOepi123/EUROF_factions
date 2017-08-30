//  EUROF factions, main config

#define _ARMA_

class CfgPatches
{
	class EUROF_factions_main
	{
		units[] = 
		{
			"EUROF_BFor_USA",
			"EUROF_BFor_ETF",
			"EUROF_RFor_Russians",
			"EUROF_IFor_Guerillas",
			"EUROF_BFor_US_Rifle_SQD",
			"EUROF_BFor_ETF_Rifle_PLT",
			"EUROF_BFor_ETF_Rifle_SQD",
			"EUROF_BFor_ETF_LRRP_Rifle_SQD",
			"EUROF_RFor_CCCR_Rifle_SQD",
			"EUROF_RFor_CCCR_MG_Squad",
			"EUROF_RFor_CCCR_MG_Tean",
			"EUROF_IFor_Guerillas"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{
			"us_military_units",
			"us_military_units_patch",
			"Smill_VHO","Smill_70",
			"45KO_SO_Equipment",
			"acre_main",
			"hlcweapons_core",
			"cba_main"
			
		};							// RHS RF, ACE
		author[] = {"kOepi"};
		authorUrl = "";
	};
};
class CfgFactionClasses
{
	class EUROF_BFor_USA
	{
		displayName = "pre-2000 US Military mod faction";
		author = "kOepi";
		icon = "";
		priority = 1;
		side = 2;
	};
	class EUROF_BFor_ETF
	{
		displayName = "pre-2005 light, Infantry based European Task Force";
		author = "kOepi";
		icon = "";
		priority = 1;
		side = 2;
	};
	class EUROF_RFor_Russians
	{
		displayName = "pre-2005 light Regular Russian Army";
		author = "OPS";
		icon = "";
		priority = 1;
		side = 1;
	};
	class EUROF_IFor_Guerillas
	{
		displayName = "pre-2000 Guerilla force";
		author = "kOepi";
		icon = "";
		priority = 1;
		side = 0;
	};
};
class CfgVehicleClasses
{
	class EUROF_BFor_US_Rifle_SQD
	{
		displayName = "US military Rilfe Squad";
	};
	class EUROF_BFor_ETF_Rifle_PLT
	{
		displayName = "EUROF Task Force Company Team";
	};
	class EUROF_BFor_ETF_Rifle_SQD
	{
		displayName = "EUROF Task Force light Rifle Squad";
	};
	class EUROF_BFor_ETF_LRRP_Rifle_SQD
	{
		displayName = "EUROF Task Force heavy Rifle Squad - Long Range ( Recon. ) Patrol";
	};
	
//----------------------------------------------------------------------------------------------
	
	class EUROF_RFor_CCCR_Rifle_SQD
	{
		displayName = "Regular Russian Army Rifle Squad";
	};
	class EUROF_RFor_CCCR_MG_Squad
	{
		displayName = "Regular Russian Army Machine Gun Squad";
	};
	class EUROF_RFor_CCCR_MG_Tean
	{
		displayName = "Regular Russian Army Machine Gun Team";
	};
	
//----------------------------------------------------------------------------------------------
	
	class EUROF_IFor_Guerillas
	{
		displayName = "Independent Russian Army";
	};
};

class CfgVehicles
{
	#include "CfgBackpacks.hpp"
};
