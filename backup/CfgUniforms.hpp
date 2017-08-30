	class ItemCore;	// External class reference
	class UniformItem;	// External class reference
	
	class Uniform_Base : ItemCore {
		class ItemInfo;	// External class reference
	};
	class LOP_U_PMC_Fatigue_01 : Uniform_Base {
		_generalMacro = "LOP_U_PMC_Fatigue_01";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "PMC fatigue 01";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "LOP_PMC_Infantry_TL";
			containerClass = "Supply70";
			mass = 50;
		};
	};	
	class LOP_U_PMC_Fatigue_02 : Uniform_Base {
		_generalMacro = "LOP_U_PMC_Fatigue_02";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "PMC fatigue 02";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "LOP_PMC_Infantry_SL";
			containerClass = "Supply40";
			mass = 40;
		};
	};	
	class LOP_U_PMC_Fatigue_03 : Uniform_Base {
		_generalMacro = "LOP_U_PMC_Fatigue_03";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "PMC fatigue 03";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "LOP_PMC_Infantry_Corpsman";
			containerClass = "Supply50";
			mass = 40;
		};
	};	
	class LOP_U_PMC_Fatigue_04 : Uniform_Base {
		_generalMacro = "LOP_U_PMC_Fatigue_04";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		displayName = "PMC fatigue 04";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "LOP_PMC_Infantry_Rifleman";
			containerClass = "Supply50";
			mass = 40;
		};
	};