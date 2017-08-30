	class TRYK_B_Belt_br;
	class CUP_B_AssaultPack_Coyote;
	class TRYK_B_Medbag;
	class B_Kitbag_cbr;
	class AO_USMC_M9belt : TRYK_B_Belt_br
	{
		_generalMacro = "AO_USMC_M9belt";
		author = $STR_LOP_FULL_NAME;
		
		scope = 1;
		class TransportItems 		// transportitems, orig.
		{
			class _xx_M9ammo 
			{
				count = 2;
				name = "CUP_15Rnd_9x19_M9";
			};
		};
	};	
	class AO_USMC_AAR : CUP_B_AssaultPack_Coyote
	{
		_generalMacro = "AO_USMC_AAR";
		author = $STR_LOP_FULL_NAME;
		
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
	class AO_USMC_medpack : TRYK_B_Medbag
	{
		_generalMacro = "AO_USMC_medpack";
		author = $STR_LOP_FULL_NAME;
			
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
				name =  "ACE_salineIV_250";
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
	class AO_USMC_AMGkit : B_Kitbag_cbr
	{
		_generalMacro = "AO_USMC_AMG_kit";
		author = $STR_LOP_FULL_NAME;
			
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
	class AO_USMC_MG_TLkit : CUP_B_AssaultPack_Coyote
	{
		_generalMacro = "AO_USMC_MG_TLkit";
		author = $STR_LOP_FULL_NAME;
		
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