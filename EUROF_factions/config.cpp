// eurof factions, config

#define _ARMA_

class CfgPatches
{
	class EUROF_factions
	{
		units[] = 
		{
			"usm_pack_alice",
			"usm_pack_alice_filled",
			"usm_pack_alice_medic",
			"usm_pack_alice_medic_filled",
			"usm_pack_alice_prc119",
			"usm_pack_alice_prc117",
			"usm_pack_alice_prc117_filled",
			"usm_pack_alice_prc119_filled",
			"usm_pack_alice_prc77",
			"usm_pack_alice_prc77_filled",
			"usm_pack_st138_prc77",
			"usm_pack_st138_prc77_filled",
			"usm_pack_m5_medic",
			"usm_pack_m5_medic_filled",
			"usm_pack_abag_m60",
			"usm_pack_abag_m60_filled",
			"usm_pack_762x51_bandoliers",
			"usm_pack_762x51_bandoliers_filled",
			"usm_pack_200rnd_556_bandoliers",
			"usm_pack_200rnd_556_bandoliers_filled",
			"usm_pack_762x51_ammobelts",
			"usm_pack_762x51_ammobelts_filled",
			"usm_pack_556x45_ammobelts",
			"usm_pack_556x45_ammobelts_filled"						
		};													//{"AO_USMC_D_HQ_PL","AO_USMC_D_HQ_PS","AO_USMC_D_HQ_FRO","AO_USMC_D_HQ_HM","AO_USMC_D_RSquad_SL","AO_USMC_D_RSquad_TL","AO_USMC_D_RSquad_AR","AO_USMC_D_RSquad_AAR","AO_USMC_D_RSquad_RO","AO_USMC_D_RSquad_MM","AO_USMC_D_MGSquad_TL","AO_USMC_D_MGSquad_MG","AO_USMC_D_MGSquad_AMG","AO_USMC_M9belt","AO_USMC_AAR","AO_USMC_medpack","AO_USMC_AMGkit","AO_USMC_MG_TLkit"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{	"A3_Soft_F",
			"A3_Characters_F",
			"A3_Weapons_F",
			//"EUROF_factions",
			"us_military_units",
			"us_military_units_patch",
			"Smill_VHO","Smill_70",
			"45KO_SO_Equipment",
			"acre_main",
			"hlcweapons_core",
			"cba_main"
		};
		author[] = {"kOepi"};
		authorUrl = "";
	};
};
class WeaponCloudsMGun;
class cfgWeapons
{
	//#include "CfgWeapons.hpp"
};
class CfgVehicles
{
	//#include "Cfginfantry.hpp"
	//#include "CfgBackpacks.hpp" should not be necessary, maybe with dir link
	
	
};
/*class CfgGroups
{
	class West
	{
		class AO_USMC
		{
			name = "US Marine Corps @AO";
			class Infantry
			{
				name = "USMC Rifle Company desert";
				class AO_USMC_D_HQ
				{
					name = "USMC Platoon HQ";
					faction = "AO_USMC";
					side = 1;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "AO_USMC_D_HQ_PL";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "AO_USMC_D_HQ_PS";
						rank = "Sergeant";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "AO_USMC_D_HQ_FRO";
						rank = "Corporal";
						position[] = {4,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "AO_USMC_D_HQ_HM";
						rank = "Corporal";
						position[] = {6,0,0};
					};
				};
				class AO_USMC_D_RSquad
				{
					name = "USMC Rifle Squad";
					faction = "AO_USMC";
					side = 1;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_SL";
						rank = "Sergeant";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_TL";
						rank = "Corporal";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_AR";
						rank = "Corporal";
						position[] = {4,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_AAR";
						rank = "Private";
						position[] = {6,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_RO";
						rank = "Private";
						position[] = {8,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_TL";
						rank = "Corporal";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_AR";
						rank = "Private";
						position[] = {12,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_AAR";
						rank = "Private";
						position[] = {14,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_MM";
						rank = "Private";
						position[] = {16,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_TL";
						rank = "Corporal";
						position[] = {18,0,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_AR";
						rank = "Corporal";
						position[] = {20,0,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_AAR";
						rank = "Private";
						position[] = {22,0,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_MM";
						rank = "Private";
						position[] = {24,0,0};
					};
				};
				class AO_USMC_D_MGSquad
				{
					name = "USMC Machine Gun Squad";
					faction = "AO_USMC";
					side = 1;
					aliveCategory = "Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "AO_USMC_D_RSquad_SL";
						rank = "Sergeant";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "AO_USMC_D_MGSquad_TL";
						rank = "Corporal";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "AO_USMC_D_MGSquad_MG";
						rank = "Corporal";
						position[] = {4,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "AO_USMC_D_MGSquad_AMG";
						rank = "Private";
						position[] = {6,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "AO_USMC_D_MGSquad_TL";
						rank = "Private";
						position[] = {8,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "AO_USMC_D_MGSquad_MG";
						rank = "Corporal";
						position[] = {10,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "AO_USMC_D_MGSquad_AMG";
						rank = "Private";
						position[] = {12,0,0};
					};
				};
			};
		};
	};
};
*/
//};
