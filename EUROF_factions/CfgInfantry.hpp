	class rhsusf_usmc_marpat_d_officer;
	class rhsusf_usmc_marpat_d_fso;
	class rhsusf_usmc_marpat_d_rifleman;
	class rhsusf_navy_marpat_d_medic;
	
	class rhsusf_usmc_marpat_d_squadleader;
	class rhsusf_usmc_marpat_d_teamleader;
	class rhsusf_usmc_marpat_d_autorifleman_m249;
	class rhsusf_usmc_marpat_d_autorifleman_m249_ass;
	class rhsusf_usmc_marpat_d_rifleman_light;
	class rhsusf_usmc_marpat_d_marksman;
	class rhsusf_usmc_marpat_d_machinegunner;
	class rhsusf_usmc_marpat_d_machinegunner_ass;
	
	class AO_USMC_D_HQ_PL : rhsusf_usmc_marpat_d_officer {
		_generalMacro = "AO_USMC_D_HQ_PL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_HQ";
		
		displayName = "0302 Platoon Leader";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDUTshirt";
		
		Items[] = 	{"rhs_Booniehat_m81","ACE_personalAidKit","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"rhs_Booniehat_m81","ACE_personalAidKit","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","CUP_hgun_M9","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","CUP_hgun_M9","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_15Rnd_9x19_M9",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",						
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"SmokeShellGreen", "SmokeShellGreen",
						"SmokeShellRed","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen", "SmokeShellGreen","SmokeShellRed","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_semi",
						"rhsusf_spc_light",
						"ItemMap",
						"ItemCompass","Itemwatch",
						"G_Aviator"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_semi","rhsusf_spc_light","ItemMap","ItemCompass","Itemwatch","G_Aviator"};
		
		backpack = "AO_USMC_M9belt";
	};
	class AO_USMC_D_HQ_PS : rhsusf_usmc_marpat_d_fso {
		_generalMacro = "AO_USMC_D_HQ_PS";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_HQ";
		
		displayName = "0369 Platoon Sergeant";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDUTshirt";
		
		Items[] = 	{"rhs_Booniehat_m81","ACE_personalAidKit","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"rhs_Booniehat_m81","ACE_personalAidKit","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","CUP_hgun_M9","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","CUP_hgun_M9","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_15Rnd_9x19_M9",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",						
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"SmokeShellGreen", "SmokeShellGreen",
						"SmokeShellRed","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen", "SmokeShellGreen","SmokeShellRed","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_semi",
						"rhsusf_spc_light",
						"ItemMap",
						"ItemCompass","Itemwatch",
						"rhs_googles_black"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_semi","rhsusf_spc_light","ItemMap","ItemCompass","Itemwatch","rhs_googles_black"};
		
		backpack = "AO_USMC_M9belt";
	};
	class AO_USMC_D_HQ_FRO : rhsusf_usmc_marpat_d_rifleman {
		_generalMacro = "AO_USMC_D_HQ_FRO";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_HQ";
		
		displayName = "0621 Platoon Field Radio Operator";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"rhs_Booniehat_m81","ACE_personalAidKit","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"rhs_Booniehat_m81","ACE_personalAidKit","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"SmokeShellGreen", "SmokeShellGreen",
						"SmokeShellRed","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_semi",
						"rhsusf_spc_light",
						"ItemMap",
						"ItemCompass","Itemwatch",
						"TRYK_US_ESS_Glasses"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_semi","rhsusf_spc_light","ItemMap","ItemCompass","Itemwatch","TRYK_US_ESS_Glasses"};
		
		backpack = "tf_rt1523g_big_bwmod_tropen";
	};
	class AO_USMC_D_HQ_HM : rhsusf_navy_marpat_d_medic {
		_generalMacro = "AO_USMC_D_HQ_HM";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_HQ";
		
		displayName = "8404 Hospital Corpsman";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_AOR1","ACE_personalAidKit","ACE_quikclot","ACE_CableTie","ACE_CableTie",
							"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage",
							"ACE_surgicalKit","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing"
							};
		RespawnItems[] = {"TRYK_H_Booniehat_AOR1","ACE_personalAidKit","ACE_quikclot","ACE_CableTie","ACE_CableTie",
							"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage",
							"ACE_surgicalKit","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing"};
		
		weapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"SmokeShellGreen","SmokeShellGreen",
						"SmokeShellRed","SmokeShellRed"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed"};
		
		linkedItems[] = {"rhsusf_ach_bare_tan_ess",
						"rhsusf_spc_corpsman",
						"ItemMap",
						"ItemCompass","Itemwatch"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_tan_ess","rhsusf_spc_corpsman","ItemMap","ItemCompass","Itemwatch"};
		
		backpack = "AO_USMC_medpack";
	};
	class AO_USMC_D_RSquad_SL : rhsusf_usmc_marpat_d_squadleader {
		_generalMacro = "AO_USMC_D_RSquad_SL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_RSquad";
		
		displayName = "0311 Squad Leader";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDUTshirt";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","CUP_hgun_M9","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","CUP_hgun_M9","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_15Rnd_9x19_M9",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"SmokeShellGreen", "SmokeShellGreen",
						"SmokeShellRed","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen", "SmokeShellGreen","SmokeShellRed","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des",
						"rhsusf_spc_light",
						"ItemMap",
						"ItemCompass","Itemwatch",
						"G_Goggles_VR"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_spc_light","ItemMap","ItemCompass","Itemwatch","G_Goggles_VR"};

		backpack = "AO_USMC_M9belt";
	};
	class AO_USMC_D_RSquad_TL : rhsusf_usmc_marpat_d_teamleader {
		_generalMacro = "AO_USMC_D_RSquad_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_RSquad";
		
		displayName = "0311 Team Leader";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDUTshirt";
		
		Items[] = 	{"TRYK_H_Booniehat_CC","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_CC","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
						"CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203",
						"CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203",
						"CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeYellow_M203",
						"CUP_1Rnd_SmokeGreen_M203","CUP_1Rnd_SmokeGreen_M203",
						"CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeGreen_M203","CUP_1Rnd_SmokeGreen_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};

		linkedItems[] = {"rhsusf_ach_bare_wood_ess",
						"rhsusf_spc_iar",
						"ItemMap",
						"ItemCompass","Itemwatch"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_wood_ess","rhsusf_spc_iar","ItemMap","ItemCompass","Itemwatch"};
		
		backpack = "";
	};
	class AO_USMC_D_RSquad_AR : rhsusf_usmc_marpat_d_autorifleman_m249 {
		_generalMacro = "AO_USMC_D_RSquad_AR";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_RSquad";
		
		displayName = "0311 Automatic Rifleman";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_CC","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_CC","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_lmg_M249","CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M249","CUP_hgun_M9","Throw","Put"};
		
		magazines[] = 	{"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
						"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
						"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
						"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
						"CUP_15Rnd_9x19_M9","CUP_HandGrenade_M67",
						"SmokeShell","SmokeShell","SmokeShell",
						"CUP_100Rnd_TE4_Red_Tracer_556x45_M249"
						};
		respawnMagazines[] = {"CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_HandGrenade_M67","SmokeShell","SmokeShell","SmokeShell","CUP_100Rnd_TE4_Red_Tracer_556x45_M249"};
		
		linkedItems[] = {"rhsusf_ach_bare_wood_ess",
						"rhsusf_spc_iar",
						"Itemwatch"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_wood_ess","rhsusf_spc_iar","ItemMap","Itemwatch"};
		
		backpack = "AO_USMC_M9belt";
	};
	class AO_USMC_D_RSquad_AAR : rhsusf_usmc_marpat_d_autorifleman_m249_ass {
		_generalMacro = "AO_USMC_D_RSquad_AAR";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_RSquad";
		
		displayName = "0311 Assistant Automatic Rifleman";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",
						"ACE_M84","ACE_M84","ACE_M84","ACE_M84",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","ACE_M84","ACE_M84","ACE_M84","ACE_M84","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des_ess",
						"rhsusf_spc_rifleman",
						"Itemwatch"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des_ess","rhsusf_spc_rifleman","ItemMap","Itemwatch"};
		
		backpack = "AO_USMC_AAR";
	};
	class AO_USMC_D_RSquad_RO : rhsusf_usmc_marpat_d_rifleman {
		_generalMacro = "AO_USMC_D_RSquad_RO";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_RSquad";
		
		displayName = "0621 Squad Field Radio Operator";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet",,"ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet",,"ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"SmokeShellGreen", "SmokeShellGreen",
						"SmokeShellRed","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen", "SmokeShellGreen","SmokeShellRed","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des",
						"rhsusf_spc_light",
						"ItemMap",
						"ItemCompass","Itemwatch",
						"TRYK_US_ESS_Glasses"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des","rhsusf_spc_light","ItemMap","ItemCompass","Itemwatch","TRYK_US_ESS_Glasses"};
		
		backpack = "tf_rt1523g_big_bwmod_tropen";
	};
	class AO_USMC_D_RSquad_MM : rhsusf_usmc_marpat_d_rifleman {
		_generalMacro = "AO_USMC_D_RSquad_MM";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_RSquad";
		
		displayName = "0311 Scout Rifleman";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"AO_USMC_M16ACOG","Binocular","Throw","Put"};
		respawnWeapons[] = {"AO_USMC_M16ACOG","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"ACE_M84","ACE_M84","ACE_M84","ACE_M84",
						"CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84","ACE_M84","ACE_M84","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des_ess",
						"rhsusf_spc_rifleman",
						"ItemMap","Itemwatch","Itemcompass"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des_ess","rhsusf_spc_rifleman","ItemMap","Itemwatch","Itemcompass"};
		
		backpack = "";
	};
	class AO_USMC_D_MGSquad_TL : rhsusf_usmc_marpat_d_teamleader {
		_generalMacro = "AO_USMC_D_MGSquad_TL";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_MGSquad";
		
		displayName = "0311 MG Team Teamleader";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Binocular","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des_ess",
						"rhsusf_spc_rifleman",
						"ItemMap","Itemwatch","Itemcompass"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des_ess","rhsusf_spc_rifleman","ItemMap","Itemwatch","Itemcompass"};
		
		backpack = "AO_USMC_MG_TLkit";
	};
	class AO_USMC_D_MGSquad_MG : rhsusf_usmc_marpat_d_machinegunner {
		_generalMacro = "AO_USMC_D_MGSquad_MG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_MGSquad";
		
		displayName = "0311 Gunner";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage"};
		
		weapons[] = {"CUP_lmg_M240","CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M240","CUP_hgun_M9","Throw","Put"};
		
		magazines[] = 	{"CUP_15Rnd_9x19_M9",
						"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
						"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
						"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des_ess",
						"rhsusf_spc_rifleman",
						"Itemwatch"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des_ess","rhsusf_spc_rifleman","Itemwatch"};
		
		backpack = "AO_USMC_M9belt";
	};
	class AO_USMC_D_MGSquad_AMG : rhsusf_usmc_marpat_d_machinegunner_ass {
		_generalMacro = "AO_USMC_D_RSquad_AMG";
		author = $STR_LOP_FULL_NAME;
		
		scope = 2;
		side = 1;
	
		faction = "AO_USMC";
		vehicleClass = "AO_USMC_D_MGSquad";
		
		displayName = "0311 Ammo Man";
		
		uniformClass = "TRYK_U_B_3CD_Delta_BDU";
		
		Items[] = 	{"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_SpareBarrel"};
		RespawnItems[] = {"TRYK_H_Booniehat_3CD","ACE_personalAidKit","ACE_CableTie","ACE_quikclot",
					"ACE_EarPlugs","ACE_tourniquet","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_SpareBarrel"};
		
		weapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		
		magazines[] = 	{"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag",
						"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag",
						"SmokeShell","SmokeShell","SmokeShell","SmokeShell",
						"CUP_HandGrenade_M67"
						};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_M67"};
		
		linkedItems[] = {"rhsusf_ach_bare_des_ess",
						"rhsusf_spc_rifleman",
						"Itemwatch"
						};
		respawnLinkedItems[] = {"rhsusf_ach_bare_des_ess","rhsusf_spc_rifleman","Itemwatch"};
		
		backpack = "AO_USMC_MG_TLkit";
	};