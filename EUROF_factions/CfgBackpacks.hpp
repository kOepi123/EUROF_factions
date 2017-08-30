	
	
	class Bag_Base;
	class usm_pack_alice: Bag_Base
	{	author = "Tim";
		allowedSlots[] = {501,601,701,801,901};
		displayName = "Field Pack, LC-1, Large";
		maximumLoad = 505;
		mass = 30.6;
	};
	class usm_pack_alice_filled: usm_pack_alice
	{
		displayName = "Field Pack, LC-1, Large, filled";
		class TransportMagazines 
		{
			class _xx_halfcanteen {	magazine = "usm_lc2canteen_empty"; count = 2; };
			class _xx_MealR2eat { magazine = "usm_mre"; count = 4; };
			class _xx_MealR2trash {	magazine = "usm_mre_trash"; count = 2; };
		};
		class TransportItems
		{
			class _xx_100mphgaffa {	name = "usm_90mphtape"; count = 2; };
			class _xx_bugkillah { name = "usm_bugrepellant"; count = 2; };
			class _xx_canteen_full { name = "usm_lc2canteen_full"; count = 4; };
			class _xx_rope_climb { name = "usm_climbingrope"; count = 1; };
			class _xx_identification_tag {name = "usm_dogtags"; count = 1; };
			class _xx_etool { name = "usm_etool"; count = 1; };
			class _xx_maglite {	name = "usm_flashlight"; count = 1; };
			class _xx_foot_powder {	name = "footpowder"; count = 2; };
			class _xx_light_gloves { name = "usm_gigloves"; count = 2; };
			class _xx_wool_socks { name = "usm_socks"; count = 4; };
			class _xx_hygiene {	name = "usm_hygienekit"; count = 1; };
			class _xx_sleeping_pad { name = "usm_isomat"; count = 2; };
			class _xx_military_ID {	name = "usm_militaryid"; count = 2; };
			class _xx_meal_read_2_eat {	name = "usm_mre"; count = 2; };
			class _xx_notepad_pen {	name = "usm_notepadpen"; count = 1; };
			class _xx_playboy_enjoy { name = "usm_playboy"; count = 1; };
			class _xx_ponch_o {	name = "usm_poncho"; count = 1; };
			class _xx_poncho_liner { name = "usm_poncholiner"; count = 1; };
			class _xx_rifle_kit { name = "usm_rifle_cleaning_kit"; count = 1; };
			class _xx_sleeping_bag { name = "usm_sleepingbag"; count = 1; };
			class _xx_bayonet_m9 {	name = "usm_bayonet_m9"; count = 1; };
			class _xx_gasmask_m17 {	name = "usm_gasmask_m17"; count = 1; };
			class _xx_gasmask_carrier {	name = "usm_gasmaskcarrier"; count = 1; };
		};
	};
	class usm_pack_alice_medic: usm_pack_alice
	{
		displayName = "Field Pack, LC-1, Large, medical";
	};
	class usm_pack_alice_medic_filled: usm_pack_alice_filled
	{
		displayName = "Field Pack, LC-1, Large, medical, filled";
		class TransportItems															// ace medical needs to be set
		{
			class _xx_LC_1_medic_filled
			{
				name = "usm_90mphtape"; count = 2;
			};
		};
	};
	class usm_pack_alice_prc119: usm_pack_alice
	{
		displayName = "Field Pack, LC-1, Large, w/o radio, w/ 3m antenna";
		maximumLoad = 477;
		mass = 53.1;
	};
	class usm_pack_alice_prc117: usm_pack_alice_filled
	{
		displayName = "Field Pack, LC-1, Large, w/o radio, w/ 3m antenna";
		maximumLoad = 477;
		mass = 45.6;
	};	
	class usm_pack_alice_prc117_filled: usm_pack_alice_prc117
	{
		class TransportItems
		{
			class _xx_acre_PRC_117f
			{	
				name = "ACRE_PRC117F_ID_1";
				count = 1;
			};
		};
	};
	class usm_pack_alice_prc119_filled: usm_pack_alice_filled
	{
		displayName = "Field Pack, LC-1, Large, W/o radio, w/ 3m antenna, filled";
		maximumLoad = 477;
		mass = 53.1;
	};
	class usm_pack_alice_prc77: usm_pack_alice
	{
		displayName = "Field Pack, LC-1, Large, w/o radio, w/ 3m AT-271B/PRC antenna";
		maximumLoad = 477;
		mass = 53.1;
	};
	class usm_pack_alice_prc77_filled: usm_pack_alice_filled
	{
		displayName = "Field Pack, LC-1, Large, w/ AN/PRC-77, w/ 3m AT-271B/PRC antenna, filled";
		maximumLoad = 477;
		mass = 53.1;
	};
	class usm_pack_st138_prc77: Bag_Base
	{
		displayName = "ST-138, AN/PRC-77 w/o radio, w/ 23cm AB-591 A/PRC antenna";
		maximumLoad = 204;
		mass = 60;
	};
	class usm_pack_st138_prc77_filled: usm_pack_st138_prc77
	{
		displayName = "ST-138, AN/PRC-77 with ACRE radio inside, w/ 23cm AB-591 A/PRC antenna";
		class TransportItems
		{
			class _xx_acre_PRC_77 
			{	
				name = "ACRE_PRC77_ID_1";
				count = 1;
			};
		};
	};
	class usm_pack_m5_medic: Bag_Base
	{
		displayName = "Bag, M5, Combat Life Saver";
		allowedSlots[] = {501,601,701,801,901};
		maximumLoad = 160;
		icon = "iconBackpack";
		mass = 11;
	};
	class usm_pack_m5_medic_filled: usm_pack_m5_medic
	{
		displayName = "Bag, M5, Combat Life Saver, filled";
		class TransportItems
		{
			class _xx_M5medic_filled
			{
				name = "usm_90mphtape"; count = 2; 
			};
		};
	};
	
	class usm_pack_abag_m60: Bag_Base
	{
		displayName = "Spare barrel bag, M60, empty";
		maximumLoad = 80;
		mass = 3;
		allowedSlots[] = {801,901};
	};
	class usm_pack_abag_m60_filled: usm_pack_abag_m60
	{
		displayName = "Spare barrel bag, M60 w/ spare barrel";
		class TransportMagazines
		{
			class _xx_mmg_spare_barrel 
			{	
				magazine = "ACE_SpareBarrel"; 
				count = 1;
			};
		};
	};
	class usm_pack_762x51_bandoliers: Bag_Base
	{
		displayName = "Bandolier, NATO 7.62x45mm, 100 rnd x 4";
		descriptionshort = "can hold 400 rounds with steel M13 links";		
		maximumLoad = 266.7;
		mass = 5;
		allowedSlots[] = {901,801};
		class TransportMagazines {};
	};
	class usm_pack_762x51_bandoliers_filled: usm_pack_762x51_bandoliers
	{
		class TransportMagazines 
		{ 
			class _xx_mmg_spare_barrel 
			{
				magazine = "hlc_100Rnd_762x51_M_M60E4"; count = 4; 
			};
		};
	};
	class usm_pack_200rnd_556_bandoliers: Bag_Base {};
	class usm_pack_200rnd_556_bandoliers_filled: usm_pack_200rnd_556_bandoliers
	{
		class TransportMagazines 
		{
			class _xx_mmg_spare_barrel 
			{
				magazine = "hlc_200rnd_556x45_M_SAW"; count = 4; 
			};
		};
	};
	class usm_pack_762x51_ammobelts: Bag_Base {};
	class usm_pack_762x51_ammobelts_filled: usm_pack_762x51_ammobelts
	{
		class TransportMagazines 
		{
			class _xx_200_rnd_762_belt
			{
				magazine = "hlc_100Rnd_762x51_M_M60E4"; count = 2; 		//hlc_200Rnd_762x51_M_M80A1M62A1
			};
		};
	};	
	class usm_pack_556x45_ammobelts: usm_pack_762x51_ammobelts {};
	class usm_pack_556x45_ammobelts_filled: usm_pack_556x45_ammobelts
	{
		displayName = "Linked, NATO 5.56x45mm, 100 rnd x 2";
		class TransportMagazines
		{
			class _xx_200_rnd_556_belt
			{	
				magazine = "hlc_200rnd_556x45_M_SAW"; count = 1; 
			};
		};
	};
	

/*	
	class TRYK_B_Belt_br;
	class CUP_B_AssaultPack_Coyote;
	class TRYK_B_Medbag;
	class B_Kitbag_cbr;
	class AO_USMC_M9belt: TRYK_B_Belt_br
	{
		_generalMacro = "AO_USMC_M9belt";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportItems
		{
			class _xx_M9ammo
			{
				count = 2;
				name = "CUP_15Rnd_9x19_M9";
			};
		};
	};
	class AO_USMC_AAR: CUP_B_AssaultPack_Coyote
	{
		_generalMacro = "AO_USMC_AAR";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class TransportMagazines
		{
			class _xx_200rd
			{
				count = 3;
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
			};
		};
	};
	class AO_USMC_medpack: TRYK_B_Medbag
	{
		_generalMacro = "AO_USMC_medpack";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class Transportitems
		{
			class _xx_morph
			{
				count = 26;
				name = "ACE_morphine";
			};
			class _xx_epi
			{
				count = 26;
				name = "ACE_epinephrine";
			};
			class _xx_PB
			{
				count = 26;
				name = "ACE_packingBandage";
			};
			class _xx_EB
			{
				count = 26;
				name = "ACE_elasticBandage";
			};
			class _xx_SA250
			{
				count = 13;
				name = "ACE_salineIV_250";
			};
			class _xx_PAK
			{
				count = 9;
				name = "ACE_personalAidKit";
			};
			class _xx_Atro
			{
				count = 6;
				name = "ACE_atropine";
			};
			class _xx_BQL
			{
				count = 26;
				name = "ACE_quikclot";
			};
			class _xx_FDB
			{
				count = 26;
				name = "ACE_fieldDressing";
			};
		};
	};
	class AO_USMC_AMGkit: B_Kitbag_cbr
	{
		_generalMacro = "AO_USMC_AMG_kit";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class Transportitems
		{
			class _xx_6x762
			{
				count = 6;
				name = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
			};
		};
	};
	class AO_USMC_MG_TLkit: CUP_B_AssaultPack_Coyote
	{
		_generalMacro = "AO_USMC_MG_TLkit";
		author = "$STR_LOP_FULL_NAME";
		scope = 1;
		class Transportitems
		{
			class _xx_3x762
			{
				count = 3;
				name = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
			};
		};
	};
/*