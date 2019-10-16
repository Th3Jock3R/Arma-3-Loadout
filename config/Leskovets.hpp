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
		
		class Cerberus: DefaultGroup {
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

			// Team-Leader
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
		
		class Cerberus_1: Cerberus {
			srFrequencys[] = {
				{"51.9", 8},
				{"51", 1},
				{"51.1", 2}
			};
		}
		
		class Cerberus_2: Cerberus {
			srFrequencys[] = {
				{"51.9", 8},
				{"51", 1},
				{"51.2", 2}
			};
		}
		
		class Gorgon: Cerberus {
			srFrequencys[] = {
				{"52", 8},
				{"52.1", 1},
				{"52.2", 2},
				{"52.3", 3}
			};
		}
	}
}