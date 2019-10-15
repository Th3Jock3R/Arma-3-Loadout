class Leskovets {
	class UnitsConfig {
		class DefaultSoldier {
			
			lrFrequencys[] = {};
			curentSRAditionalChanle = 0;
			curentLRChanle = 0;
			curentLRAditionalChanle = 0;
			
			// Weapons
			primaryWeapon = "rhs_weap_ak103_npz";
			primaryWeaponItems[] = {
				{"rhs_acc_dtk"},
				{"rhs_acc_rakursPM"},
			};
			
			primaryWeaponItemsNite[] = {};

			secondaryWeapon = "rhs_weap_6p53";
			secondaryWeaponItems[] = {};

			atWeapon = "";
			atWeaponItems[] = {};

			binocular = "";

			headgears[] = {
				{"rhs_6b26"},
				{"rhs_6b26"},
				{"rhs_6b26"},
				{"rhs_6b26"},
				{"rhs_6b26_ess"},
				{"rhs_6b26_ess"},
				{"rhs_6b26_bala"},
				{"rhs_6b26_bala"},
				{"rhs_6b26_bala"},
				{"rhs_6b26_ess_bala"}
			};

			goggles[] = {};

			uniform = "rhs_uniform_flora_patchless";
			uniformItems[] = {
				{"rhs_18rnd_9x21mm_7N28", 3},
				{"ACE_MapTools", 1}
				
			};
			
			uniformItemsNite[] = {
				{"ACE_Chemlight_HiGreen", 2},
				{"ACE_Flashlight_KSF1", 1}
			};

			vest = "rhs_6b13_Flora_6sh92";
			vestMedic[] = {};
			vestAmmo[] = {
				{"rhs_30Rnd_762x39mm_polymer", 4},
				{"rhs_mag_rgd5", 3},
			};
			vestItems[] = {
				{"SmokeShell", 3},
			};

			backpack = "rhs_assault_umbts";
			backpackAmmo[] = {
				{"rhs_30Rnd_762x39mm_polymer", 3},
			};
			backpackMedic[] = {
				{"ACE_fieldDressing", 5},
				{"ACE_elasticBandage", 5},
				{"ACE_morphine", 2},
				{"ACE_packingBandage", 5},
				{"ACE_tourniquet", 2},
				{"ACE_salineIV_500", 1},
				{"ACE_quikclot", 2},
			};
			backpackItems[] = {
				{"ACE_EarPlugs", 1},
			};

			radio 	= "TFAR_fadak";
			compass = "ItemCompass";
			map 	= "ItemMap";
			watch 	= "ItemWatch";
			gps 	= "";
			nvision = "rhs_1PN138";
		}

		class DefaultGroup {
			class Soldier: DefaultSoldier {};

			srFrequencys[] = {
				{"101", 1}
			};

			curentSRChanle = 1;
		}
		
		class Cerberus : DefaultGroup {
			class Soldier: DefaultSoldier {};
			
			srFrequencys[] = {
				{"51.9", 8},
				{"51.1", 1},
				{"51.2", 2},
				{"51.3", 3}
			};

			// Squad-Leader
			class SquadLeader: DefaultSoldier {
				
				lrFrequencys[] = {
					{"30", 1}
				};
				curentSRAditionalChanle = 8;
				curentLRChanle = 1;

				uniformItems[] = {
					{"rhs_18rnd_9x21mm_7N28", 3},
					{"ACE_MapTools", 1}
				};

				vest = "rhs_6b13_Flora_6sh92_headset_mapcase";
				vestAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 4},
					{"rhs_mag_rgd5", 3}
				};

				binocular = "ACE_Vector";
				vestItems[] = {
					{"SmokeShellBlue", 1},
					{"SmokeShellGreen", 1},
					{"SmokeShellRed", 1},
					{"SmokeShell", 3},
				};

				backpack = "TFAR_mr3000_rhs";
				backpackAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 3},
				};
				backpackMedic[] = {
					{"ACE_fieldDressing", 5},
					{"ACE_elasticBandage", 5},
					{"ACE_morphine", 2},
					{"ACE_packingBandage", 5},
					{"ACE_tourniquet", 2},
					{"ACE_salineIV_500", 1},
					{"ACE_quikclot", 2},
				};
				backpackItems[] = {
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 3},
				};
				gps = "ItemGPS";
			}

			// Team-Leader TODO
			class TeamLeader: DefaultSoldier {
				
				curentSRAditionalChanle = 8;
				
				uniformItems[] = {
					{"rhs_18rnd_9x21mm_7N28", 3},
					{"ACE_MapTools", 1}
				};

				binocular = "ACE_Vector";
				vestItems[] = {
					{"SmokeShellBlue", 1},
					{"SmokeShellGreen", 1},
					{"SmokeShellRed", 1},
					{"SmokeShell", 3},
				};
				gps = "ItemGPS";
			}
			
			// MG 1
			class MG: DefaultSoldier {
				// Weapons
				primaryWeapon = "rhs_weap_pkp";
				primaryWeaponItems[] = {
					{"rhs_acc_1p78"},
				};
				primaryWeaponItemsNite[] = {
					{"rhs_acc_1pn93_1"},
				};

				vest = "rhs_6b13_Flora_6sh92"
				vestAmmo[] = {
					{"rhs_100Rnd_762x54mmR", 1},
					{"rhs_mag_rgd5", 2},
				};
				vestItems[] = {
					{"SmokeShell", 2},
				};

				backpack = "rhs_assault_umbts";
				backpackAmmo[] = {
					{"rhs_100Rnd_762x54mmR", 1},
				};
			}
			
			// MG 2 / Assi
			class MGAssistant: DefaultSoldier {
				backpack = "rhs_assault_umbts";
				backpackAmmo[] = {
					{"rhs_100Rnd_762x54mmR", 1},
					{"rhs_30Rnd_762x39mm_polymer", 3}
				};
			}
			
			// Grenadier
			class Grenadier: DefaultSoldier {
				vest = "rhs_6b13_Flora_6sh92_vog"
				vestAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 4},
					{"rhs_mag_rgd5", 3},
					{"rhs_VOG25", 4},
				};

				primaryWeapon = "rhs_weap_ak103_gp25_npz";
			}
			
			// AT
			class AT: DefaultSoldier {
				atWeapon = "rhs_weap_rpg7";
				atWeaponItems[] = {
					{"rhs_acc_pgo7v"}
				};
				vestAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 6},
				};
				vestItems[] = {};

				backpackAmmo[] = {
					{"rhs_rpg7_PG7V_mag", 1},
					{"rhs_rpg7_PG7VL_mag", 2}
				};
			}
			
			// EOD
			class EOD: DefaultSoldier {
				backpackItems[] = {
					{"ACE_DefusalKit", 1},
					{"ACE_Clacker", 1},
					{"DemoCharge_Remote_Mag", 2},
					{"ACE_EarPlugs", 1},
					{"rhs_weap_6p53", 1},
				};
				secondaryWeapon = "ACE_VMM3";
			}
			
			// RiflemanCFR
			class RiflemanCVR: DefaultSoldier {
				vest = "rhs_6b23_medic";
				vestMedic[] = {};

				backpackMedic[] = {
					{"ACE_fieldDressing", 15},
					{"ACE_elasticBandage", 15},
					{"ACE_epinephrine", 6},
					{"ACE_morphine", 6},
					{"ACE_packingBandage", 15},
					{"ACE_tourniquet", 8},
					{"ACE_quikclot", 6},
					{"ACE_salineIV_500", 1},
				};
				backpackAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 3},
				};
			}
		}
		
		class Cerberus_1 : Cerberus {
			srFrequencys[] = {
				{"51.9", 8},
				{"51", 1},
				{"51.1", 2}
			};
		}
		
		class Cerberus_2 : Cerberus {
			srFrequencys[] = {
				{"51.9", 8},
				{"51", 1},
				{"51.2", 2}
			};
		}
		
		class Gorgon : Cerberus {
			srFrequencys[] = {
				{"52", 8},
				{"52.1", 1},
				{"52.2", 2},
				{"52.3", 3}
			};
		}

		class Polarfuchs : DefaultGroup {
			class Soldier: DefaultSoldier {};
			
			srFrequencys[] = {
				{"71.9", 1}
			};

			// Squad-Leader
			class SquadLeader: DefaultSoldier {
				
				lrFrequencys[] = {
					{"30", 1}
				};
				curentLRChanle = 1;
				
				binocular = "ACE_Vector";

				uniformItems[] = {
					{"rhs_18rnd_9x21mm_7N28", 3},
					{"ACE_MapTools", 1},
					{"ACE_fieldDressing", 6},
					{"ACE_elasticBandage", 4},
					{"ACE_morphine", 1},
					{"ACE_packingBandage", 4},
					{"ACE_tourniquet", 4},
				};

				vest = "rhs_6b23_medic";
				vestMedic[] = {
					{"adv_aceCPR_AED", 1},
				};
				vestItems[] = {
					{"SmokeShellGreen", 3},
					{"SmokeShell", 3},
				};

				backpack = "TFAR_mr3000_rhs";
				backpackMedic[] = {
					{"adv_aceSplint_splint", 1},
					{"ACE_personalAidKit", 1},
					{"ACE_surgicalKit", 1},
					{"ACE_fieldDressing", 10},
					{"ACE_elasticBandage", 10},
					{"ACE_epinephrine", 6},
					{"ACE_morphine", 6},
					{"ACE_packingBandage", 10},
					{"ACE_tourniquet", 4},
					{"ACE_quikclot", 6},
					{"ACE_salineIV_500", 3}
				};
				backpackAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 3},
				};

				gps = "ItemGPS";
			}

			// Team-Leader
			class TeamLeader: DefaultSoldier {
				binocular = "ACE_Vector";

				vest = "rhs_6b23_medic";
				vestMedic[] = {
					{"adv_aceCPR_AED", 1},
				};

				backpackMedic[] = {
					{"adv_aceSplint_splint", 1},
					{"ACE_surgicalKit", 1},
					{"ACE_fieldDressing", 15},
					{"ACE_elasticBandage", 15},
					{"ACE_epinephrine", 6},
					{"ACE_morphine", 6},
					{"ACE_packingBandage", 15},
					{"ACE_tourniquet", 8},
					{"ACE_quikclot", 6},
					{"ACE_salineIV_500", 1},
					{"ACE_salineIV", 2}
				};
				backpackAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 3},
				};
			}
		}

		class Falke : DefaultGroup {
			class Soldier: DefaultSoldier {};
			
			srFrequencys[] = {
				{"72.9", 1}
			};

			// Squad-Leader TODO
			class SquadLeader: DefaultSoldier {
				
				lrFrequencys[] = {
					{"30", 1}
				};
				curentLRChanle = 1;
				
				headgears[] = {
					{"rhs_Booniehat_flora"},
				};
				
				binocular = "ACE_Vector";
				uniformItems[] = {
					{"ACE_tourniquet", 4},
					{"ACE_morphine", 2},
					{"ACE_elasticBandage", 6},
					{"ACE_EarPlugs", 1},
					{"ACE_packingBandage", 5},
					{"ACE_MapTools", 1},
					{"ACE_salineIV_500", 1},
					{"rhs_18rnd_9x21mm_7N28", 2}
				};
				
				vest = "rhs_6sh92_radio";
				vestMedic[] = {};
				vestAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 6},
					{"rhs_mag_rgd5", 2},
				};
				vestItems[] = {
					{"SmokeShell", 4},
				};

				backpack = "TFAR_mr3000_rhs";
				backpackMedic[] = {};
				backpackAmmo[] = {};
				backpackItems[] = {};

				gps = "ItemGPS";
			}

			// Team-Leader
			class TeamLeader: DefaultSoldier {
				
				headgears[] = {
					{"rhs_Booniehat_flora"},
				};
				
				binocular = "ACE_Vector";
				uniformItems[] = {
					{"ACE_tourniquet", 4},
					{"ACE_morphine", 2},
					{"ACE_elasticBandage", 6},
					{"ACE_EarPlugs", 1},
					{"ACE_packingBandage", 5},
					{"ACE_MapTools", 1},
					{"ACE_salineIV_500", 1},
					{"rhs_18rnd_9x21mm_7N28", 2}
				};
				
				vest = "rhs_6sh92_radio";
				vestMedic[] = {};
				vestAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 5},
					{"rhs_mag_rgd5", 2},
				};
				vestItems[] = {
					{"SmokeShell", 4},
				};

				backpack = "";
				backpackMedic[] = {};
				backpackAmmo[] = {};
				backpackItems[] = {};

				gps = "ItemGPS";
			}
		}
		
		class Herkules : DefaultGroup {
			class Soldier: DefaultSoldier {};
			
			srFrequencys[] = {
				{"30.9", 1}
			};

			// Squad-Leader
			class SquadLeader: DefaultSoldier {
				
				lrFrequencys[] = {
					{"30", 1}
				};
				curentLRChanle = 1;

				uniformItems[] = {
					{"rhs_18rnd_9x21mm_7N28", 3},
					{"ACE_MapTools", 1}
				};

				vest = "rhs_6b13_Flora_6sh92_headset_mapcase";
				vestAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 4},
					{"rhs_mag_rgd5", 3}
				};

				binocular = "ACE_Vector";
				vestItems[] = {
					{"SmokeShellBlue", 1},
					{"SmokeShellGreen", 1},
					{"SmokeShellRed", 1},
					{"SmokeShell", 3},
				};

				backpack = "TFAR_mr3000_rhs";
				backpackAmmo[] = {
					{"rhs_30Rnd_762x39mm_polymer", 3},
				};
				backpackMedic[] = {
					{"ACE_fieldDressing", 5},
					{"ACE_elasticBandage", 5},
					{"ACE_morphine", 2},
					{"ACE_packingBandage", 5},
					{"ACE_tourniquet", 2},
					{"ACE_salineIV_500", 1},
					{"ACE_quikclot", 2},
				};
				backpackItems[] = {
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 3},
				};
				gps = "ItemGPS";
			}
		}
	}

	class BoxConfig {
		class DefaultChest {
			box = "Box_NATO_Support_F";
			weapons[] = {};
			magazines[] = {};
			items[] = {};
			medicItems[] = {};
			backpacks[] = {
				{"rhs_assault_umbts", 1}
			};
		}

		class MedicMedicChest : DefaultChest {
			box = "ACE_medicalSupplyCrate_advanced";
			medicItems[] = {
			  {"ACE_fieldDressing", 25},
			  {"ACE_quikclot", 15},
			  {"ACE_elasticBandage", 40},
			  {"ACE_packingBandage", 40},
			  {"ACE_morphine", 15},
			  {"ACE_epinephrine", 20},
			  {"ACE_adenosine", 10},
			  {"ACE_atropine", 10},
			  {"ACE_tourniquet", 8},
			  {"adv_aceSplint_splint", 2},
			  {"adv_aceCPR_AED", 1},
			  {"ACE_surgicalKit", 1},
			  {"ACE_personalAidKit", 1},
			  {"ACE_bodyBag", 4},
			  {"ACE_EarPlugs", 4},
			  {"ACE_salineIV_250", 20},
			  {"ACE_salineIV_500", 15},
			  {"ACE_salineIV", 10},
			  {"ACE_bloodIV_250", 5},
			  {"ACE_bloodIV_500", 5},
			  {"ACE_bloodIV", 5}
			};
		}

		class MedicChest : DefaultChest {
			medicItems[] = {
			  {"ACE_fieldDressing", 50},
			  {"ACE_quikclot", 15},
			  {"ACE_elasticBandage", 15},
			  {"ACE_packingBandage", 15},
			  {"ACE_morphine", 10},
			  {"ACE_tourniquet", 4},
			  {"ACE_bodyBag", 2},
			  {"ACE_EarPlugs", 4},
			  {"ACE_salineIV_500", 10}
			};
		}

		class AmmoChest : DefaultChest {
			box = "Box_Syndicate_Ammo_F";
			items[] = {
			  {"rhs_30Rnd_762x39mm_polymer", 30},
			  {"rhs_30Rnd_762x39mm_polymer_tracer", 10},
			  {"rhs_100Rnd_762x54mmR", 6},
			  {"rhs_18rnd_9x21mm_7N28", 10},
			  {"rhs_VOG25", 6},
			  {"rhs_VOG25P", 2},
			  {"rhs_VG40OP_white", 3}
			};
		}

		class GrenateChest : DefaultChest {
			box = "Box_IED_Exp_F";
			items[] = {
			  {"rhs_mag_rgd5", 15},
			  {"SmokeShell", 15},
			  {"SmokeShellBlue", 6},
			  {"SmokeShellGreen", 6},
			  {"SmokeShellRed", 6}
			};
		}

		class LauncherChest : DefaultChest {
			box = "Box_Syndicate_WpsLaunch_F";
			items[] = {
			  {"rhs_rpg7_PG7VL_mag", 2},
			  {"rhs_rpg7_PG7V_mag", 1},
			  {"rhs_rpg7_OG7V_mag", 1},
			  {"rhs_mag_9k38_rocket", 2}
			};
			weapons[] = {
			  {"rhs_weap_rpg7", 1},
			  {"rhs_weap_igla", 1},
			  {"rhs_weap_rpg26", 2}
			};
			backpacks[] = {
				{"rhs_rpg_empty", 1}
			};
		}
		
		class MineChest : DefaultChest {
			box = "Box_IED_Exp_F";
			items[] = {
			  {"rhs_mine_pmn2_mag", 5},
			  {"rhs_mag_mine_pfm1", 5},
			  {"rhs_mine_pmn2_mag", 2}
			};
		}
		
		class ExplosiveChest : DefaultChest {
			box = "Box_IED_Exp_F";
			items[] = {
			  {"DemoCharge_Remote_Mag", 6},
			  {"SatchelCharge_Remote_Mag",2},
			  {"ACE_Clacker", 1}
			};
		}
		
		class FortificationChest : DefaultChest {
			box = "Box_Syndicate_Ammo_F";
			items[] = {
			  {"ACE_EntrenchingTool", 1},
			  {"ACE_Sandbag_empty", 50}
			};
		}
		
		class KornetChest : DefaultChest {
			box = "Box_Syndicate_WpsLaunch_F";
			backpacks[] = {
				{"RHS_Kornet_Gun_Bag", 1},
				{"RHS_Kornet_Tripod_Bag", 1}
			};
		}
		
		class DShkMChest : DefaultChest {
			box = "Box_Syndicate_Wps_F";
			backpacks[] = {
				{"RHS_DShkM_Gun_Bag", 1},
				{"RHS_DShkM_TripodHigh_Bag", 1},
				{"RHS_DShkM_TripodLow_Bag", 1}
			};
		}
	}
	class EnemyConfig {
		class PatrolesChDKZ {
			units[] = {
				{"rhsgref_ins_g_grenadier_rpg", 55},
				{"rhsgref_ins_g_machinegunner", 65},
				{"rhsgref_ins_g_machinegunner", 60},
				{"rhsgref_ins_g_medic", 45},
				{"rhsgref_ins_g_rifleman_akm", 40},
				{"rhsgref_ins_g_rifleman_aks74", 40},
				{"rhsgref_ins_g_rifleman_aksu", 30},
				{"rhsgref_ins_g_grenadier", 50},
				{"rhsgref_ins_g_grenadier", 55},
				{"rhsgref_ins_g_rifleman_RPG26", 50},
				{"rhsgref_ins_g_spotter", 40},
				{"rhsgref_ins_g_militiaman_mosin", 25},
			};
		}
	}
}