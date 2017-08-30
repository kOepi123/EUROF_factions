	
	class Bag_Base;
	class usm_pack_alice: Bag_Base
	{	author = "Tim";
		allowedSlots[] = {501,601,701,801,901};
		displayName = "Field Pack, LC-1, Large";
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
			class _xx_100mph { name = "usm_90mphtape"; count = 2; };
			class _xx_bugkiller { name = "usm_bugrepellant"; count = 2; };
			class _xx_canteen_full { name = "usm_lc2canteen_full"; count = 4; };
			class _xx_rope_climb { name = "usm_climbingrope"; count = 1; };
			class _xx_ID_tag {name = "usm_dogtags"; count = 1; };
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
			class _xx_fielddressings {	name = "usm_fielddressing"; count = 10; };
		};
	};
	class usm_pack_alice_medic: usm_pack_alice {};
	class usm_pack_alice_medic_filled: usm_pack_alice_filled
	{
		displayName = "Field Pack, LC-1, Large, medical, filled";
		descriptionshort = "Alice LC-1, Large, with standard and medical items filled";
		class TransportItems															// ace medical needs to be set
		{
			class _xx_LC_1_medic_filled
			{
				name = "usm_90mphtape"; count = 2;
			};
		};
	};
	class usm_pack_alice_prc119: usm_pack_alice {};
	class usm_pack_alice_prc117_filled: usm_pack_alice_filled
	{
		displayName = "Field Pack, LC-1, Large, for AN/PRC 117, filled";
		descriptionshort = "Alice Pack with radio, 3m antenna and standard items filled";
		model = "\us_military_units\usm_pack_alice_prc119.p3d";
		picture = "\us_military_units\icons\pack_alice_icon_ca.paa";
		maximumLoad = 900;
		mass = 53.1;
		class TransportItems
		{
			class _xx_acre_PRC_117f
			{	
				name = "ACRE_PRC117F_ID_1";
				count = 1;
			};
		};
	};
	class usm_pack_alice_prc77_filled: usm_pack_alice_prc117_filled
	{
		displayName = "Field Pack, LC-1, Large, for AN/PRC-77, filled";
		descriptionshort = "Alice Pack, w/ radio, 3m AT-271B/PRC antenna and standard items filled";
		maximumLoad = 900;
		mass = 53.1;
	};
	class usm_pack_st138_prc77: Bag_Base
	{
		displayName = "ST-138 manpack frame, for AN/PRC-77 ";
		descriptionshort = "Alice Pack, w/o radio, w/ 23cm AB-591A/PRC antenna and standard items filled";
		maximumLoad = 204;
		mass = 60;
	};
	class usm_pack_st138_prc77_filled: usm_pack_st138_prc77
	{
		displayName = "ST-138 manpack frame, for AN/PRC-77 ";
		descriptionshort = "Alice Pack, w/o radio, w/ 23cm AB-591A/PRC antenna and standard items filled";
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
		descriptionshort = "Small M5 bag for medical items ";
		allowedSlots[] = {501,601,701,801,901};
		maximumLoad = 160;
		icon = "iconBackpack";
		mass = 11;
	};
	class usm_pack_m5_medic_filled: usm_pack_m5_medic
	{
		displayName = "Bag, M5, Combat Life Saver, filled";
		descriptionshort = "Small M5 bag with medical items ";
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
		descriptionshort = "Small M5 bag with medical items ";
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
		descriptionshort = "can hold 400 rounds of 7.62 with steel M13 links";		
		maximumLoad = 266.7;
		mass = 5;
		allowedSlots[] = {901,801};
		class TransportMagazines {};
	};
	class usm_pack_762x51_bandoliers_filled: usm_pack_762x51_bandoliers
	{
		descriptionshort = "holds 400 rounds of 7.62 with steel M13 links";	
		class TransportMagazines 
		{ 
			class _xx_mmg_spare_barrel 
			{
				magazine = "hlc_100Rnd_762x51_M_M60E4"; count = 4; 
			};
		};
	};
	class usm_pack_200rnd_556_bandoliers: Bag_Base 
	{
		descriptionshort = "can hold 800 rounds of 5.56 with steel M13 links";
	};
	class usm_pack_200rnd_556_bandoliers_filled: usm_pack_200rnd_556_bandoliers
	{
		descriptionshort = "holds 800 rounds of 5.56 with steel M13 links";	
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
		descriptionshort = "holds 200 rounds of 7.62 with steel M13 links";
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
		displayName = "Linked, NATO 5.56x45mm, 200 rounds";
		descriptionshort = "holds 200 rounds of 5.56 with steel M27 links";
		class TransportMagazines
		{
			class _xx_200_rnd_556_belt
			{	
				magazine = "hlc_200rnd_556x45_M_SAW"; count = 1; 
			};
		};
	};