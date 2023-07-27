#define UNIFORM 2
#define VEST 1
#define BACKPACK 0

class BW_WD2022_virolati {
	class UnitsConfig {
		class DefaultSoldier {
			lrFrequencys[] = {};
			curentSRAditionalChanle = 0;
			curentLRChanle = 0;
			curentLRAditionalChanle = 0;
			
			// Weapons
			primaryWeapon = "hlc_rifle_G36V";
			primaryWeaponItems[] = {
				{"BWA3_acc_LLM01_irlase"},
				{"BWA3_optic_ZO4x30_RSAS"},
			};
			primaryWeaponAmmo[] = {
				{"hlc_30rnd_556x45_EPR_G36"},
			};
			primaryWeaponItemsNite[] = {};

			secondaryWeapon = "BWA3_P8";
			secondaryWeaponItems[] = {};
			secondaryWeaponAmmo[] = {
				{"BWA3_15Rnd_9x19_P8"}
			};

			atWeapon = "";
			atWeaponItems[] = {};

			binocular = "";

			headgears[] = {
				{"rhsgref_helmet_pasgt_flecktarn"}
			};
			headgearsParade[] = {
				{"BWA3_Beret_Jaeger"}
			};

			goggles[] = {
				{"rhs_googles_black"},
				{"UK3CB_G_Tactical_Clear"},
				{"UK3CB_G_Tactical_Black"},
				{"UK3CB_G_Tactical_Black_Shemagh_Green"}, //UK3CB_G_Tactical_Black_Shemagh_Green_Headset
				{"UK3CB_G_Tactical_Clear_Shemagh_Green"}, //UK3CB_G_Tactical_Clear_Shemagh_Green_Headset
            };

			uniforms[] = {
				{"BWA3_Uniform_Fleck"},
				{"BWA3_Uniform_sleeves_Fleck"},
				{"BWA3_Uniform_tee_Fleck"},
			};
			uniformsW[] = {
				{"TCGM_CombatFatigues_MTP_Bra", {"\a3\Characters_F\common\data\basicbody_green_co.paa", "\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP_RollUp", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP_RollUp", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP_RollUp", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
			};
			uniformAmmo[] = {};
			uniformMedic[] = {};
			uniformGrenades[] = {};
			uniformItems[] = {
				{"murshun_cigs_cigpack", 1},
				{"murshun_cigs_matches", 1},
				{"ACE_CableTie", 2},
				{"ACE_EarPlugs", 1},
			};
			uniformItemsNight[] = {
				{"ACE_Flashlight_MX991", 1}
			};
			uniformRadios[] = {};

			vests[] = {
				{"BWA3_Vest_Rifleman_Fleck"}
			};
			vestMedic[] = {};
			vestAmmo[] = {
				{"hlc_30rnd_556x45_EPR_G36", 3},
				{"BWA3_15Rnd_9x19_P8", 2}
			};
			vestGrenades[] = {
				{"BWA3_DM51A1", 2},
				{"BWA3_DM25", 2}
			};
			vestItems[] = {};
			vestItemsNight[] = {
				{"ACE_IR_Strobe_Item", 1},
				{"ACE_HandFlare_White", 1},
				{"ACE_Chemlight_HiGreen", 2},
			};
			vestRadios[] = {
				{"ACRE_SEM52SL", 1}
			};

			backpacks[] = {
				{"BWA3_FieldPack_Fleck"}
			};
			TFARbackpacks[] = {};
			backpacksNite[] = {};
			backpacksNiteForce = 0;
			backpackAmmo[] = {
				{"hlc_30rnd_556x45_EPR_G36", 4}
			};
			backpackMedic[] = {};
			backpackGrenades[] = {};
			backpackItems[] = {
				{"ACE_Canteen", 1},
				{"ACE_WaterBottle", 1},
			};
			backpackItemsNight[] = {
				{"BWA3_optic_NSV600", 1}
			};
			backpackRadios[] = {};
            
            personalMedicStuffPlace = BACKPACK;  //0 = Backpack, 1 = Vest, 2 = Uniform
            personalMedicStuff[]  = {
				{"ACE_tourniquet", 4},
				{"ACE_salineIV_250", 2},
				{"ACE_fieldDressing", 16},
				{"kat_Painkiller", 1}
			};

			radio 	= "TFAR_anprc152";
			compass = "ItemCompass";
			map 	= "ItemMap";
			watch 	= "ItemWatch";
			gps 	= "ItemGPS";
			nvision = "rhsusf_ANPVS_15";
			nvisionPlace = VEST; //0 = Backpack, 1 = Vest, 2 = Uniform
		}
        
        class DefaultSoldierLocal {
			lrFrequencys[] = {};
			curentSRAditionalChanle = 0;
			curentLRChanle = 0;
			curentLRAditionalChanle = 0;
			
			// Weapons
			primaryWeapon = "hlc_rifle_G36E1";
			primaryWeaponItems[] = {
				{"hlc_optic_g36export35x"},
			};
			primaryWeaponAmmo[] = {
				{"hlc_30rnd_556x45_EPR_G36"},
			};
			primaryWeaponItemsNite[] = {};

			secondaryWeapon = "BWA3_P8";
			secondaryWeaponItems[] = {};
			secondaryWeaponAmmo[] = {
				{"BWA3_15Rnd_9x19_P8"}
			};

			atWeapon = "";
			atWeaponItems[] = {};

			binocular = "";

			headgears[] = {
				{
                    "UK3CB_LDF_B_H_HB97_GEO",
                    "UK3CB_LDF_B_H_HB97_ESS_GEO",
                    "UK3CB_LDF_B_H_HB97_ESS_Cover_GEO",
                }
			};
			headgearsParade[] = {
				{"UK3CB_LDF_B_H_CP04_GEO"}
			};

			goggles[] = {
				{"UK3CB_G_Ballistic_Black"},
				{"G_Shades_Black"},
				{"TRYK_Shemagh_G"},
				{"TRYK_Shemagh_EAR_G"},
				{"TRYK_Shemagh_shade_G"},
				{"TRYK_NOMIC_TAC_EARMUFF_Gs"},
            };

			uniforms[] = {
				{"UK3CB_LDF_B_U_CombatUniform_WDL_01"},
			};
			uniformsW[] = {
				{"TCGM_F_Soldier3"},
				{"TCGM_F_Soldier3_RollUp"},
			};
			uniformAmmo[] = {};
			uniformMedic[] = {};
			uniformGrenades[] = {};
			uniformItems[] = {
				{"murshun_cigs_cigpack", 1},
				{"murshun_cigs_matches", 1},
				{"ACE_CableTie", 2},
				{"ACE_EarPlugs", 1},
			};
			uniformItemsNight[] = {
				{"ACE_Flashlight_MX991", 1}
			};
			uniformRadios[] = {};

			vests[] = {
				{
                    "UK3CB_LDF_B_V_RIF_Vest_KKZ10_GEO",
                    "UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_GEO",
                }
			};
			vestMedic[] = {};
			vestAmmo[] = {
				{"hlc_30rnd_556x45_EPR_G36", 3},
				{"BWA3_15Rnd_9x19_P8", 2}
			};
			vestGrenades[] = {
				{"BWA3_DM51A1", 2},
				{"BWA3_DM25", 2}
			};
			vestItems[] = {};
			vestItemsNight[] = {
				{"ACE_IR_Strobe_Item", 1},
				{"ACE_HandFlare_White", 1},
				{"ACE_Chemlight_HiGreen", 2},
			};
			vestRadios[] = {
				{"ACRE_SEM52SL", 1}
			};

			backpacks[] = {
				{"UK3CB_LDF_B_B_ASS_GEO"}
			};
			TFARbackpacks[] = {};
			backpacksNite[] = {};
			backpacksNiteForce = 0;
			backpackAmmo[] = {
				{"hlc_30rnd_556x45_EPR_G36", 4}
			};
			backpackMedic[] = {};
			backpackGrenades[] = {};
			backpackItems[] = {
				{"ACE_Canteen", 1},
				{"ACE_WaterBottle", 1},
			};
			backpackItemsNight[] = {};
			backpackRadios[] = {};
            
            personalMedicStuffPlace = BACKPACK;  //0 = Backpack, 1 = Vest, 2 = Uniform
            personalMedicStuff[]  = {
				{"ACE_tourniquet", 4},
				{"ACE_salineIV_250", 2},
				{"ACE_fieldDressing", 16},
				{"kat_Painkiller", 1}
			};

			radio 	= "TFAR_anprc152";
			compass = "ItemCompass";
			map 	= "ItemMap";
			watch 	= "ItemWatch";
			gps 	= "ItemGPS";
			nvision = "rhsusf_ANPVS_15";
			nvisionPlace = VEST; //0 = Backpack, 1 = Vest, 2 = Uniform
		}
		
		class DefaultCrew {
			lrFrequencys[] = {};
			curentSRAditionalChanle = 0;
			curentLRChanle = 0;
			curentLRAditionalChanle = 0;
			
			// Weapons
			primaryWeapon = "rhsusf_weap_MP7A2";
			primaryWeaponItems[] = {
				{"BWA3_acc_LLM01_irlase"},
				{"BWA3_optic_RSAS"},
			};
			primaryWeaponAmmo[] = {
				{"rhsusf_mag_40Rnd_46x30_AP"},
			};
			primaryWeaponItemsNite[] = {};

			secondaryWeapon = "BWA3_P8";
			secondaryWeaponItems[] = {};
			secondaryWeaponAmmo[] = {
				{"BWA3_15Rnd_9x19_P8"}
			};

			atWeapon = "";
			atWeaponItems[] = {};

			binocular = "";

			headgears[] = {
				{"BWA3_CrewmanKSK_Tropen_Headset"}
			};

			goggles[] = {
				{"rhs_googles_orange"}
			};

			uniforms[] = {
				{"BWA3_Uniform_Tropen"},
				{"BWA3_Uniform_sleeves_Tropen"},
				{"BWA3_Uniform_tee_Tropen"},
			};
			uniformsW[] = {
				{"TCGM_CombatFatigues_MTP_Bra", {"\a3\Characters_F\common\data\basicbody_green_co.paa", "\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP_RollUp", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP_RollUp", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP_RollUp", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
				{"TCGM_CombatFatigues_MTP", {"\bwa3_uniforms\data\bwa3_uniform_fleck_co.paa"}},
			};
			uniformAmmo[] = {};
			uniformMedic[] = {};
			uniformGrenades[] = {};
			uniformItems[] = {};
			uniformItemsNight[] = {
				{"ACE_Flashlight_MX991", 1},
			};
			uniformRadios[] = {};

			vests[] = {
				{"BWA3_Vest_Tropen"}
			};
			vestMedic[] = {};
			vestAmmo[] = {
				{"rhsusf_mag_40Rnd_46x30_AP", 4},
				{"BWA3_15Rnd_9x19_P8", 2}
			};
			vestGrenades[] = {
				{"BWA3_DM51A1", 2},
				{"BWA3_DM25", 2}
			};
			vestItems[] = {};
			vestItemsNight[] = {
				{"BWA3_optic_NSV600", 1},
				{"ACE_IR_Strobe_Item", 1},
				{"ACE_HandFlare_White", 1},
				{"ACE_Chemlight_HiGreen", 2},
			};
			vestRadios[] = {
				{"ACRE_SEM52SL", 1}
			};

			backpacks[] = {};
			TFARbackpacks[] = {};
			backpacksNite[] = {};
			backpacksNiteForce = 0;
			backpackAmmo[] = {};
			backpackMedic[] = {};
			backpackGrenades[] = {};
			backpackItems[] = {};
			backpackItemsNight[] = {};
			backpackRadios[] = {};
            
            personalMedicStuffPlace = UNIFORM;  //0 = Backpack, 1 = Vest, 2 = Uniform
            personalMedicStuff[]  = {
				{"ACE_tourniquet", 4},
				{"ACE_salineIV_250", 2},
				{"ACE_fieldDressing", 16},
				{"kat_Painkiller", 1}
			};

			radio 	= "TFAR_anprc152";
			compass = "ItemCompass";
			map 	= "ItemMap";
			watch 	= "ItemWatch";
			gps 	= "ItemGPS";
			nvision = "rhsusf_ANPVS_15";
			nvisionPlace = BACKPACK;
		}

		class DefaultGroup {
			class Soldier: DefaultSoldier {};

			srFrequencys[] = {
				{"101", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 1},
				{"ACRE_PRC152", 12},
				{"ACRE_PRC117F", 12}
			};

			curentSRChanle = 1;
		}
		
		class LeadGrp : DefaultGroup {
		
			ACREChanels[] = {
				{"ACRE_SEM52SL", 5},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 1}
			};
			
			class Soldier: DefaultSoldier {};

			// Squad-Leader
			class SquadLeader: DefaultSoldier {
                
                goggles[] = {
                    {"UK3CB_G_Tactical_Black_Shemagh_Green_Headset"},
                    {"UK3CB_G_Tactical_Clear_Shemagh_Green_Headset"},
                };
				
				uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 6},
					{"ACE_MapTools", 1},
					{"ACE_key_west", 1},
				};
				uniformItemsNight[] = {};
				vests[] = {
					{"BWA3_Vest_Leader_Fleck"}
				};

				vestItems[] = {
					{"SmokeShellPurple", 2},
					{"SmokeShellBlue", 2},
					{"SmokeShellRed", 2},
					{"ItemMicroDAGR" ,1}
				};
				vestItemsNight[] = {};
				vestRadios[] = {
					{"ACRE_SEM52SL", 1},
					{"ACRE_PRC152", 1},
				};
				
				backpackItemsNight[] = {
					{"BWA3_optic_NSV600", 1},
					{"ACE_IR_Strobe_Item", 3},
					{"ACE_HandFlare_White", 3},
					{"ACE_Chemlight_HiGreen", 6},
					{"ACE_Flashlight_MX991", 1}
				};
				
				binocular = "ACE_Vector";
				TFARbackpacks[] = {
					{"TFAR_rt1523g_big_bwmod_tropen"}
				};
				
				gps = "ItemcTab";
				nvisionPlace = BACKPACK;
			}

			
			// Zug-Sani
			class Sani: DefaultSoldier {
				
				vests[] = {
					{"BWA3_Vest_Medic_Fleck"}
				};
				vestGrenades[] = {
					{"BWA3_DM25", 4},
				};

				backpacks[] = {
					{"BWA3_Kitbag_Fleck_Medic"}
				};
				
				backpackMedic[] = {
					{"ACE_fieldDressing", 15},
					{"ACE_elasticBandage", 25},
					{"ACE_packingBandage", 25},
					{"ACE_quikclot", 15},
					{"ACE_salineIV_250", 4},
					{"ACE_salineIV_500", 2},
					{"ACE_salineIV", 1},
					{"kat_IV_16", 8},
					{"kat_IO_FAST", 2},
					{"ACE_tourniquet", 4},
					{"ACE_adenosine", 3},
					{"ACE_epinephrine", 3},
					{"ACE_splint", 6},
					{"ACE_surgicalKit", 1},
					{"kat_stethoscope", 1},
					{"kat_AED", 1},
					{"kat_chestSeal", 4},
					{"kat_larynx", 2},
					{"kat_guedel", 6},
					{"kat_Pulseoximeter", 2},
					{"kat_Painkiller", 2},
					{"kat_CarbonateItem", 2},
					{"kat_TXA", 4},
				};
				
				gps = "ItemAndroid";
			}
			
			//Marksman
			/*class DMR : Soldier {
				
				// Weapons
				primaryWeapon = "BWA3_G28";
				primaryWeaponItems[] = {
					{"bwa3_optic_pmii_dmr_microt1_rear"},
					{"bwa3_bipod_harris"},
					{"bwa3_acc_llm01_irlaser"},
				};
				primaryWeaponAmmo[] = {
					{"BWA3_20Rnd_762x51_G28"},
				};
				
				// Vests
				vestItems[] = {
					{"ACE_RangeCard", 1}
				};
				vestAmmo[] = {
					{"BWA3_20Rnd_762x51_G28", 3},
					{"BWA3_20Rnd_762x51_G28_AP", 2}
				};
				vestItemsNight[] = {
					{"BWA3_optic_NSV600", 1},
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				// Backpacks
				backpackAmmo[] = {};
				backpacks[] = {};
				backpackItems[] = {};
				
                personalMedicStuffPlace = UNIFORM;
				nvisionPlace = VEST;
			}*/
            
            //ZF Schütze
			class DMR : Soldier {
				
				// Weapons
				primaryWeapon = "BWA3_G27";
				primaryWeaponItems[] = {
					{"rhsusf_acc_acog_mdo"},
					{"hlc_bipod_utgshooters"},
					{"bwa3_acc_llm01_irlaser"},
				};
				primaryWeaponAmmo[] = {
					{"BWA3_20Rnd_762x51_G28"},
				};
				
				// Vests
				vestAmmo[] = {
					{"BWA3_20Rnd_762x51_G28", 3},
					{"BWA3_20Rnd_762x51_G28_AP", 2}
				};
				vestItemsNight[] = {
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				// Backpacks
				backpackAmmo[] = {};
				backpacks[] = {};
				backpackItems[] = {};
				
                personalMedicStuffPlace = UNIFORM;
				nvisionPlace = VEST;
			}
		}
		
		class InfGrp {
			class Soldier: DefaultSoldier {};

			srFrequencys[] = {
				{"51.1", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 12},
				{"ACRE_PRC152", 12},
				{"ACRE_PRC117F", 12}
			};

			curentSRChanle = 1;
			
			
			// Team-Leader
			class TeamLeader: Soldier {
                
                goggles[] = {
                    {"UK3CB_G_Tactical_Black_Shemagh_Green_Headset"},
                    {"UK3CB_G_Tactical_Clear_Shemagh_Green_Headset"},
                };
				
				uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 4},
					{"ACE_MapTools", 1},
				};
				uniformItemsNight[] = {};
				
                vests[] = {
					{"BWA3_Vest_Leader_Fleck"}
				};

				vestItems[] = {
					{"SmokeShellPurple", 1},
					{"SmokeShellBlue", 1},
					{"SmokeShellRed", 1},
				};
				vestItemsNight[] = {};
				
				
				backpackItemsNight[] = {
					{"BWA3_optic_NSV600", 1},
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
					{"ACE_Flashlight_MX991", 1}
				};
				
				binocular = "Binocular";
				
				gps = "ItemAndroid";
				nvisionPlace = BACKPACK;
			}

			// Squad-Leader
			class SquadLeader: TeamLeader {
				
				lrFrequencys[] = {
					{"50", 1},
				};
				
				uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 4},
					{"ACE_MapTools", 1},
					{"ACE_key_west", 1},
				};
				
				vestRadios[] = {
					{"ACRE_SEM52SL", 1},
					{"ACRE_PRC152", 1},
				};
				TFARbackpacks[] = {
					{"TFAR_rt1523g_big_bwmod"}
				};
				
				binocular = "ACE_Vector";
			}
			
			// MG 1
			class MG: Soldier {
				// Weapons
				primaryWeapon = "hlc_lmg_MG3KWS_g";
				primaryWeaponItems[] = {};
				primaryWeaponAmmo[] = {
					{"UK3CB_MG3_100rnd_762x51_R"},
				};

				vests[] = {
					{"BWA3_Vest_MachineGunner_Fleck"}
				};
				vestAmmo[] = {
                    {"BWA3_15Rnd_9x19_P8", 2}
                };
				vestItemsNight[] = {
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				backpackAmmo[] = {
					{"UK3CB_MG3_100rnd_762x51_R", 2},
				};
				backpackItems[] = {
					{"ItemcTabHCam", 1},
					{"ACE_Canteen", 1},
					{"ACE_WaterBottle", 1},
				};
				backpackItemsNight[] = {};
			}
			
			// MG 2 / Assi
			class MGAssistant: Soldier {
				
				binocular = "Binocular";
				
				backpacks[] = {
					{"BWA3_Kitbag_Fleck"}
				};
				backpackItems[] = {
					{"UK3CB_MG3_100rnd_762x51_R", 2},
					{"greenmag_beltlinked_762x51_basic_100", 2},
					{"ACE_SpareBarrel_Item", 1},
					{"ACE_EntrenchingTool", 1},
				};
			}
			
			// LMG
			class LMG: Soldier {
				
				// Weapons
				primaryWeapon = "UK3CB_G36_LSW";
				primaryWeaponAmmo[] = {
					{"UK3CB_G36_100rnd_556x45_R"},
				};

				vestAmmo[] = {
					{"UK3CB_G36_100rnd_556x45_R" ,1}
				};
				
				backpackAmmo[] = {
					{"UK3CB_G36_100rnd_556x45_R", 3}
				};
			}
			
			// Grenadier
			class Grenadier: Soldier {
				primaryWeapon = "hlc_rifle_G36VAG36";
				primaryWeaponAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36"},
					{"1Rnd_HE_Grenade_shell"},
				};
				
				vests[] = {
					{"BWA3_Vest_Grenadier_Fleck"}
				};
				vestAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36", 3},
					{"BWA3_15Rnd_9x19_P8", 2},
					{"1Rnd_HE_Grenade_shell", 3},
					{"1Rnd_Smoke_Grenade_shell", 1},
					{"UGL_FlareRed_F", 1},
					{"UGL_FlareGreen_F", 1},
					{"1Rnd_SmokeBlue_Grenade_shell", 1},
				};
				vestItemsNight[] = {};
				
				
				backpackAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36", 4},
					{"1Rnd_HE_Grenade_shell", 5}
				};
				backpackItemsNight[] = {
					{"BWA3_optic_NSV600", 1},
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				nvisionPlace = BACKPACK;
			}
			
			// EOD
			class EOD: Soldier {
				
				secondaryWeapon = "ACE_VMH3";
				secondaryWeaponAmmo[] = {};
				
				vestAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36", 3},
					{"BWA3_15Rnd_9x19_P8", 3}
				};
				
				backpacks[] = {
					{"BWA3_Kitbag_Fleck"}
				};
				backpackItems[] = {
					{"ACE_wirecutter", 1},
					{"ACE_EntrenchingTool", 1},
					{"ACE_DefusalKit", 1},
					{"ACE_Clacker", 1},
					{"DemoCharge_Remote_Mag", 2},
					{"BWA3_P8", 1}
				};

				
			}
			
			// Breacher
			class Breacher: Soldier {
				
				backpacks[] = {
					{"BWA3_Kitbag_Fleck"}
				};
				backpackItems[] = {
					{"ACE_wirecutter", 1},
					{"ACE_EntrenchingTool", 1},
					{"ACE_Clacker", 1},
					{"DemoCharge_Remote_Mag", 2},
					{"tsp_popperCharge_mag", 2},
					{"tsp_frameCharge_mag", 2},
					{"tsp_stickCharge_mag", 2},
				};

				
			}
			
			// RiflemanCFR
			class RiflemanCVR: Soldier {
                vests[] = {
					{"BWA3_Vest_Medic_Fleck"}
				};

				backpacks[] = {
					{"BWA3_Kitbag_Fleck_Medic"}
				};
				
				backpackMedic[] = {
					{"ACE_fieldDressing", 20},
					{"ACE_elasticBandage", 15},
					{"ACE_packingBandage", 15},
					{"kat_IV_16", 3},
					{"ACE_quikclot", 6},
					{"ACE_tourniquet", 8},
					{"ACE_splint", 8},
					{"kat_guedel", 6},
					{"kat_Pulseoximeter", 1},
					{"kat_Painkiller", 2},
					{"kat_CarbonateItem", 1},
                    {"ACE_salineIV_250", 2},
                    {"ACE_salineIV", 1},
					{"kat_TXA", 2},
					{"kat_stethoscope", 1},
				};
			}
			
			// AT
			class RiflemanAT: Soldier {
				
				atWeapon = "BWA3_PzF3_Tandem_Loaded";
				
				vestItemsNight[] = {
					{"BWA3_optic_NSV600", 1},
					{"BWA3_optic_NSA80", 1},
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
			}
			
			// Sanni-O
			class Sani: Soldier {
				binocular = "ACE_Vector";


				vests[] = {
					{"BWA3_Vest_Medic_Fleck"}
				};

				backpacks[] = {
					{"BWA3_PatrolPack_Fleck"}
				};
				backpackMedic[] = {
					{"ACE_fieldDressing", 15},
					{"ACE_elasticBandage", 25},
					{"ACE_packingBandage", 25},
					{"ACE_quikclot", 15},
					{"ACE_salineIV_250", 4},
					{"ACE_salineIV_500", 2},
					{"ACE_salineIV", 1},
					{"kat_IV_16", 8},
					{"kat_IO_FAST", 2},
					{"ACE_tourniquet", 8},
					{"ACE_adenosine", 3},
					{"ACE_epinephrine", 3},
					{"ACE_splint", 4},
					{"ACE_surgicalKit", 1},
					{"kat_stethoscope", 1},
					{"kat_AED", 1},
					{"kat_chestSeal", 4},
					{"kat_accuvac", 1},
					{"kat_larynx", 2},
					{"kat_guedel", 6},
					{"kat_Pulseoximeter", 2},
					{"kat_Painkiller", 2},
					{"kat_CarbonateItem", 2},
					{"kat_TXA", 4},
				};
			}
			
			//ZF Schütze
			class DMR : Soldier {
				
				// Weapons
				primaryWeapon = "BWA3_G27";
				primaryWeaponItems[] = {
					{"rhsusf_acc_acog_mdo"},
					{"hlc_bipod_utgshooters"},
					{"bwa3_acc_llm01_irlaser"},
				};
				primaryWeaponAmmo[] = {
					{"BWA3_20Rnd_762x51_G28"},
				};
				
				// Vests
				vestAmmo[] = {
					{"BWA3_20Rnd_762x51_G28", 3},
					{"BWA3_20Rnd_762x51_G28_AP", 2}
				};
				vestItemsNight[] = {
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				// Backpacks
				backpackAmmo[] = {};
				backpacks[] = {};
				backpackItems[] = {};
				
                personalMedicStuffPlace = UNIFORM;
				nvisionPlace = VEST;
			}
		}
		
		class VehGrp {
			class Soldier: DefaultSoldier {};

			srFrequencys[] = {
				{"51.1", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 12},
				{"ACRE_PRC152", 12},
				{"ACRE_PRC117F", 12}
			};

			curentSRChanle = 1;
			
			
			// Crew
			class Crew: Soldier {
				primaryWeapon = "hlc_rifle_G36KV";
                primaryWeaponItems[] = {
                    {"BWA3_acc_LLM01_irlase"},
                    {"bwa3_optic_eotech552"},
                };
                
				personalMedicStuffPlace = UNIFORM;
                
                headgears[] = {
                    {
                        "BWA3_CrewmanKSK_Fleck_Headset",
                    }
                };
                
                vests[] = {
					{"BWA3_Vest_JPC_Rifleman_Fleck"}
				};
                
                backpacks[] = {};
                TFARbackpacks[] = {};
                backpacksNite[] = {};
                backpacksNiteForce = 0;
                backpackAmmo[] = {};
                backpackMedic[] = {};
                backpackGrenades[] = {};
                backpackItems[] = {};
                backpackItemsNight[] = {};
                backpackRadios[] = {};
			}
            
            class CrewLeader: Crew {
                uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 2},
					{"ACE_MapTools", 1},
				};
                
                
				vestRadios[] = {
					{"ACRE_SEM52SL", 1},
					{"ACRE_PRC152", 1},
				};
                
                binocular = "Binocular";
				
				gps = "ItemAndroid";
			}
		}
        
        class InfGrpLocal {
			class Soldier: DefaultSoldierLocal {};

			srFrequencys[] = {
				{"51.1", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 12},
				{"ACRE_PRC152", 12},
				{"ACRE_PRC117F", 12}
			};

			curentSRChanle = 1;
			
			
			// Team-Leader
			class TeamLeader: Soldier {
				
				uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 4},
					{"ACE_MapTools", 1},
				};
				uniformItemsNight[] = {};

                headgearsParade[] = {
                    {"UK3CB_AAF_B_H_Beret_Army"}
                };

                goggles[] = {
                    {"TRYK_TAC_EARMUFF_Gs"},
                    {"TRYK_TAC_EARMUFF_SHADE_Gs"},
                    {"TRYK_TAC_SET_OD"},
                };
                
				vests[] = {
					{"UK3CB_LDF_B_V_SL_Vest_KKZ10_GEO"}
				};

				vestItems[] = {
					{"SmokeShellPurple", 1},
					{"SmokeShellBlue", 1},
					{"SmokeShellRed", 1},
				};
				vestItemsNight[] = {};
				vestRadios[] = {
					{"ACRE_SEM52SL", 1},
					{"ACRE_PRC152", 1},
				};
				
				backpackItemsNight[] = {
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
					{"ACE_Flashlight_MX991", 1}
				};
				
				binocular = "Binocular";
				
				gps = "ItemAndroid";
				nvisionPlace = BACKPACK;
			}

			// Squad-Leader
			class SquadLeader: TeamLeader {
				
				lrFrequencys[] = {
					{"50", 1},
				};
				
				uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 4},
					{"ACE_MapTools", 1},
					{"ACE_key_west", 1},
				};
                
				TFARbackpacks[] = {
					{"TFAR_rt1523g_big_bwmod"}
				};
				
				binocular = "ACE_Vector";
			}
			
			// MG 1
			class MG: Soldier {
				// Weapons
				primaryWeapon = "hlc_lmg_MG3";
				primaryWeaponItems[] = {};
				primaryWeaponAmmo[] = {
					{"UK3CB_MG3_100rnd_762x51_R"},
				};

				vests[] = {
					{"UK3CB_LDF_B_V_MG_Vest_KKZ10_GEO"}
				};
				vestAmmo[] = {
                    {"BWA3_15Rnd_9x19_P8", 2}
                };
				vestItemsNight[] = {
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				backpackAmmo[] = {
					{"UK3CB_MG3_100rnd_762x51_R", 2},
				};
				backpackItems[] = {
					{"ItemcTabHCam", 1},
					{"ACE_Canteen", 1},
					{"ACE_WaterBottle", 1},
				};
				backpackItemsNight[] = {};
			}
			
			// MG 2 / Assi
			class MGAssistant: Soldier {
				
				binocular = "Binocular";
				backpackItems[] = {
					{"UK3CB_MG3_100rnd_762x51_R", 2},
					{"greenmag_beltlinked_762x51_basic_100", 2},
					{"ACE_SpareBarrel_Item", 1},
					{"ACE_EntrenchingTool", 1},
				};
				backpacks[] = {
					{"UK3CB_ION_B_B_RIF_OLI_01"}
				};
			}
            
            // MG 3 / AmmoCarrier
			class MGAssistant2: Soldier {
				
				binocular = "";
				backpackItems[] = {
					{"greenmag_beltlinked_762x51_basic_100", 6},
				};
				backpacks[] = {
					{"UK3CB_ION_B_B_RIF_OLI_01"}
				};
			}
			
			// LMG
			class LMG: Soldier {
				
				// Weapons
				primaryWeapon = "UK3CB_G36_LSW";
				primaryWeaponAmmo[] = {
					{"UK3CB_G36_100rnd_556x45_R"},
				};

				vestAmmo[] = {
					{"UK3CB_G36_100rnd_556x45_R" ,1}
				};
				
				backpackAmmo[] = {
					{"UK3CB_G36_100rnd_556x45_R", 3}
				};
			}
			
			// Grenadier
			class Grenadier: Soldier {
				primaryWeapon = "hlc_rifle_G36E1AG36";
				primaryWeaponAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36"},
					{"1Rnd_HE_Grenade_shell"},
				};
				
				vests[] = {
					{"UK3CB_LDF_B_V_GREN_Vest_KKZ10_GEO"}
				};
				vestAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36", 3},
					{"BWA3_15Rnd_9x19_P8", 2},
					{"1Rnd_HE_Grenade_shell", 3},
					{"1Rnd_Smoke_Grenade_shell", 1},
					{"UGL_FlareRed_F", 1},
					{"UGL_FlareGreen_F", 1},
					{"1Rnd_SmokeBlue_Grenade_shell", 1},
				};
				vestItemsNight[] = {};
				
				
				backpackAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36", 4},
					{"1Rnd_HE_Grenade_shell", 5}
				};
				backpackItemsNight[] = {
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
				
				nvisionPlace = BACKPACK;
			}
			
			// EOD
			class EOD: Soldier {
				
				secondaryWeapon = "ACE_VMH3";
				secondaryWeaponAmmo[] = {};
				
				vestAmmo[] = {
					{"hlc_30rnd_556x45_EPR_G36", 3},
					{"BWA3_15Rnd_9x19_P8", 3}
				};
				
				backpacks[] = {
					{"UK3CB_ION_B_B_RIF_OLI_01"}
				};
				backpackItems[] = {
					{"ACE_wirecutter", 1},
					{"ACE_EntrenchingTool", 1},
					{"ACE_DefusalKit", 1},
					{"ACE_Clacker", 1},
					{"DemoCharge_Remote_Mag", 2},
					{"BWA3_P8", 1}
				};

				
			}
			
			// Breacher
			class Breacher: Soldier {
				
				backpacks[] = {
					{"UK3CB_ION_B_B_RIF_OLI_01"}
				};
				backpackItems[] = {
					{"ACE_wirecutter", 1},
					{"ACE_EntrenchingTool", 1},
					{"ACE_Clacker", 1},
					{"DemoCharge_Remote_Mag", 2},
					{"tsp_popperCharge_mag", 2},
					{"tsp_frameCharge_mag", 2},
					{"tsp_stickCharge_mag", 2},
				};
			}
			
			// RiflemanCFR
			class RiflemanCVR: Soldier {
                vests[] = {
					{"UK3CB_LDF_B_V_MD_Vest_KKZ10_GEO"}
				};

				backpacks[] = {
					{"UK3CB_ION_B_B_RIF_MED_OLI"}
				};
				
				backpackMedic[] = {
					{"ACE_fieldDressing", 20},
					{"ACE_elasticBandage", 15},
					{"ACE_packingBandage", 15},
					{"kat_IV_16", 3},
					{"ACE_quikclot", 6},
					{"ACE_tourniquet", 8},
					{"ACE_splint", 8},
					{"kat_guedel", 6},
					{"kat_Pulseoximeter", 1},
					{"kat_Painkiller", 2},
					{"kat_CarbonateItem", 1},
                    {"ACE_salineIV_250", 2},
                    {"ACE_salineIV", 1},
					{"kat_TXA", 2},
					{"kat_stethoscope", 1},
				};
			}
			
			// AT
			class RiflemanAT: Soldier {
				
				atWeapon = "BWA3_PzF3_Tandem_Loaded";
				
				vestItemsNight[] = {
					{"BWA3_optic_NSA80", 1},
					{"ACE_IR_Strobe_Item", 1},
					{"ACE_HandFlare_White", 1},
					{"ACE_Chemlight_HiGreen", 2},
				};
			}
            
            // Crew
			class Crew: Soldier {
				primaryWeapon = "hlc_rifle_G36KE1";
                
				personalMedicStuffPlace = UNIFORM;
                
                headgears[] = {
                    {
                        "H_HelmetCrew_I",
                    }
                };
                
                vests[] = {
					{"UK3CB_LDF_B_V_CREW_Vest_KKZ10_GEO"}
				};
                
                backpacks[] = {};
                TFARbackpacks[] = {};
                backpacksNite[] = {};
                backpacksNiteForce = 0;
                backpackAmmo[] = {};
                backpackMedic[] = {};
                backpackGrenades[] = {};
                backpackItems[] = {};
                backpackItemsNight[] = {};
                backpackRadios[] = {};
			}
            
            class CrewLeader: Crew {
                uniformItems[] = {
					{"murshun_cigs_cigpack", 1},
					{"murshun_cigs_matches", 1},
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 2},
					{"ACE_MapTools", 1},
				};
                
                
				vestRadios[] = {
					{"ACRE_SEM52SL", 1},
					{"ACRE_PRC152", 1},
				};
                
                binocular = "Binocular";
				
				gps = "ItemAndroid";
			}
		}
			
		class Cerberus : LeadGrp {
			srFrequencys[] = {
				{"51.1", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 6},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}	
		
		class Cerberus_1 : InfGrp {
			srFrequencys[] = {
				{"51.1", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 1},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
		
		class Cerberus_2 : InfGrp {
			srFrequencys[] = {
				{"51.2", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 2},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
		
		class Cerberus_3 : InfGrp {
			srFrequencys[] = {
				{"51.3", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 3},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
		
		class Cerberus_5 : InfGrpLocal {
			srFrequencys[] = {
				{"51.4", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 5},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
		
		class Hammer_1 : VehGrp {
			srFrequencys[] = {
				{"51.4", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 4},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
        
		class Hammer_2 : VehGrp {
			srFrequencys[] = {
				{"51.4", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 4},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
		
		class Hammer_3 : InfGrpLocal {
			srFrequencys[] = {
				{"51.5", 1}
			};
			
			ACREChanels[] = {
				{"ACRE_SEM52SL", 4},
				{"ACRE_PRC152", 1},
				{"ACRE_PRC117F", 12}
			};
		}
		
		class Polarfuchs : DefaultGroup {
			class Soldier: DefaultSoldier {};
		
			ACREChanels[] = {
				{"ACRE_SEM52SL", 7},
				{"ACRE_PRC152", 12},
				{"ACRE_PRC117F", 1}
			};

			// Notfall Sani
			class Sani: DefaultSoldier {

				uniformItems[] = {
					{"ACE_EarPlugs", 1},
					{"ACE_CableTie", 4},
					{"ACE_MapTools", 1},
					{"ACE_key_west", 1},
				};
				vests[] = {
					{"BWA3_Vest_Medic_Fleck"}
				};

				backpacks[] = {
					{"BWA3_PatrolPack_Fleck"}
				};
				backpackMedic[] = {
					{"ACE_fieldDressing", 15},
					{"ACE_elasticBandage", 25},
					{"ACE_packingBandage", 25},
					{"ACE_quikclot", 15},
					{"ACE_tourniquet", 8},
					{"kat_PainkillerItem", 2},
					{"kat_CarbonateItem", 2},
					{"ACE_salineIV_250", 4},
					{"ACE_salineIV_500", 2},
					{"ACE_salineIV", 1},
					{"kat_IV_16", 4},
					{"kat_IO_FAST", 4},
					{"ACE_morphine", 2},
					{"ACE_epinephrine", 4},
					{"ACE_adenosine", 2},
					{"kat_atropine", 3},
					{"kat_amiodarone", 2},
					{"kat_lidocaine", 2},
					{"kat_TXA", 3},
					{"kat_EACA", 2},
					{"kat_naloxone", 1},
					{"ACE_splint", 4},
					{"ACE_surgicalKit", 1},
					{"kat_X_AED", 1},
					{"kat_aatKit", 2},
					{"kat_chestSeal", 4},
					{"kat_accuvac", 1},
					{"kat_guedel", 2},
					{"kat_larynx", 4},
					{"kat_Pulseoximeter", 2},
					{"kat_stethoscope", 1}
				};
				
				gps = "ItemAndroid";
			}
            // Squad-Leader
			class SquadLeader : Sani {
                
				binocular = "ACE_Vector";
                
                vestRadios[] = {
					{"ACRE_SEM52SL", 1},
					{"ACRE_PRC152", 1},
				};
            }
			
			//Funker
			class RTO : Soldier {
				
				backpacks[] = {
					{"UK3CB_B_B_Radio_Backpack"}
				};
				TFARbackpacks[] = {
					{"TFAR_rt1523g_big_bwmod_tropen"}
				};
				backpackRadios[] = {
					{"ACRE_PRC117F", 1}
				};
			}
		}
	}
	class BoxConfig {
		class DefaultChest {
			box = "Box_NATO_Support_F";
			size = 2;
			weapons[] = {};
			magazines[] = {};
			items[] = {};
			medicItems[] = {};
			backpacks[] = {};
		}

		class MedicBloadChest : DefaultChest {
			box = "Land_PlasticCase_01_medium_CBRN_F";
			name = "Blutbank";
			medicItems[] = {
				{"kat_bloodIV_O", 4},
				{"kat_bloodIV_A", 4},
				{"kat_bloodIV_AB", 4},
				{"kat_bloodIV_B", 4},
				{"kat_bloodIV_O_N", 4},
				{"kat_bloodIV_A_N", 4},
				{"kat_bloodIV_AB_N", 4},
				{"kat_bloodIV_B_N", 4},
				{"kat_bloodIV_O_500", 8},
				{"kat_bloodIV_A_500", 8},
				{"kat_bloodIV_AB_500", 8},
				{"kat_bloodIV_B_500", 8},
				{"kat_bloodIV_O_N_500", 8},
				{"kat_bloodIV_A_N_500", 8},
				{"kat_bloodIV_AB_N_500", 8},
				{"kat_bloodIV_B_N_500", 8},
				{"kat_bloodIV_O_250", 11},
				{"kat_bloodIV_A_250", 11},
				{"kat_bloodIV_AB_250", 11},
				{"kat_bloodIV_B_250", 11},
				{"kat_bloodIV_O_N_250", 11},
				{"kat_bloodIV_A_N_250", 11},
				{"kat_bloodIV_AB_N_250", 11},
				{"kat_bloodIV_B_N_250", 11},
				{"ACE_plasmaIV", 4},
				{"ACE_plasmaIV_500", 8},
				{"ACE_plasmaIV_250", 11},
				{"kat_crossPanel", 1}
			};
		}

		class MedicSurgicalChest : DefaultChest {
			box = "Land_PlasticCase_01_medium_black_CBRN_F";
			name = "Operations Sanitätskiste";
			medicItems[] = {
                {"kat_CarbonateItem", 2},
                {"ACE_salineIV_250", 25},
				{"kat_plate", 10},
				{"kat_clamp", 2},
				{"kat_retractor", 2},
				{"kat_scalpel", 2},
				{"kat_etomidate", 50},
				{"kat_lorazepam", 10},
				{"kat_flumazenil", 10},
			};
		}

		class MedicMedicationChest : DefaultChest {
			box = "Land_PlasticCase_01_small_gray_F";
			name = "Medikamenten Sanitätskiste";
			medicItems[] = {
				{"ACE_adenosine", 20},
				{"kat_amiodarone", 20},
				{"kat_atropine", 20},
				{"kat_EACA", 20},
				{"ACE_epinephrine", 20},
				{"kat_etomidate", 200},
				{"kat_fentanyl", 20},
				{"kat_flumazenil", 20},
				{"kat_ketamine", 20},
				{"kat_lidocaine", 20},
				{"kat_lorazepam", 20},
				{"ACE_morphine", 20},
				{"kat_nalbuphine", 20},
				{"kat_naloxone", 20},
				{"kat_nitroglycerin", 20},
				{"kat_norepinephrine", 20},
				{"kat_phenylephrine", 20},
				{"kat_TXA", 20},
				{"kat_CarbonateItem", 20},
			};
		}

		class MedicEquipmentChest : DefaultChest {
			box = "Land_PlasticCase_01_large_CBRN_F";
			name = "Ausrüstungs Sanitätskiste";
			medicItems[] = {
				{"ACE_personalAidKit", 5},
				{"ACE_surgicalKit", 1},
				{"kat_vacuum", 10},
				{"ACE_bodyBag", 15},
				{"ACE_splint", 10},
				{"ACE_EarPlugs", 10},
				{"kat_IV_16", 10},
				{"kat_IO_FAST", 5},
				{"kat_aatKit", 10},
				{"kat_stethoscope", 5},
				{"kat_accuvac", 5},
				{"kat_chestSeal", 10},
				{"kat_guedel", 15},
				{"kat_larynx", 15},
				{"kat_Pulseoximeter", 5},
				{"kat_X_AED", 1},
				{"kat_AED", 1},
				{"Attachable_Helistretcher", 1},
			};
		}

		class MedicMedicMedicChest : DefaultChest {
			box = "Land_PlasticCase_01_small_gray_F";
			name = "Medikamenten Sanitätskiste";
			medicItems[] = {
				{"ACE_morphine", 50},
				{"ACE_epinephrine", 50},
				{"ACE_adenosine", 50},
				{"kat_Painkiller", 50},
			};
		}
		
		class DoctorChest : DefaultChest {
			box = "ACE_medicalSupplyCrate_advanced";
			name = "Arzt Sanitätskiste";
			medicItems[] = {
				{"ACE_fieldDressing", 25},
				{"ACE_quikclot", 15},
				{"ACE_elasticBandage", 40},
				{"ACE_packingBandage", 40},
				{"ACE_tourniquet", 8},
				{"kat_TXA", 4},
				{"kat_PainkillerItem", 2},
				{"kat_CarbonateItem", 2},
				{"ACE_personalAidKit", 1},
				{"ACE_bodyBag", 2},
				{"ACE_salineIV", 5},
				{"ACE_salineIV_500", 7},
				{"ACE_salineIV_250", 10},
				{"ACE_plasmaIV", 3},
				{"ACE_plasmaIV_500", 5},
				{"ACE_plasmaIV_250", 7},
				{"ACE_splint", 2},
				{"kat_IO_FAST", 3},
				{"kat_IV_16", 8},
				{"kat_Pulseoximeter", 2},
				{"kat_aatKit", 4},
				{"kat_chestSeal", 5},
				{"kat_guedel", 2},
				{"kat_larynx", 6},
			};
		}

		class MedicMedicChest : DefaultChest {
			box = "ACE_medicalSupplyCrate_advanced";
			name = "Sanitäter Sanitätskiste";
			medicItems[] = {
				{"ACE_fieldDressing", 25},
				{"ACE_quikclot", 15},
				{"ACE_elasticBandage", 40},
				{"ACE_packingBandage", 40},
				{"kat_TXA", 4},
				{"kat_PainkillerItem", 2},
				{"kat_CarbonateItem", 2},
				{"ACE_tourniquet", 8},
				{"ACE_bodyBag", 2},
				{"ACE_EarPlugs", 2},
				{"kat_IV_16", 6},
				{"ACE_salineIV_250", 10},
				{"ACE_salineIV_500", 5},
				{"ACE_salineIV", 2},
				{"ACE_splint", 8},
				{"kat_Pulseoximeter", 1},
				{"kat_chestSeal", 4},
				{"kat_guedel", 12},
				{"kat_larynx", 4},
			};
		}

		class MedicChest : DefaultChest {
			name = "Trupp Sanitätskiste";
			medicItems[] = {
				{"ACE_fieldDressing", 50},
				{"ACE_quikclot", 15},
				{"ACE_elasticBandage", 15},
				{"ACE_packingBandage", 15},
				{"ACE_tourniquet", 4},
				{"ACE_bodyBag", 1},
				{"ACE_EarPlugs", 1},
				{"ACE_splint", 6},
				{"kat_IV_16", 2},
				{"ACE_salineIV_250", 20},
			};
		}

		class AmmoChest : DefaultChest {
			box = "Box_NATO_Ammo_F";
			name = "Munitionskiste";
			items[] = {
			  {"hlc_30rnd_556x45_EPR_G36", 4},
			  {"greenmag_ammo_556x45_basic_60Rnd", 30},
			  {"UK3CB_MG3_100rnd_762x51_R", 1},
			  {"greenmag_beltlinked_762x51_basic_100", 4},
			  {"UK3CB_G36_100rnd_556x45_R", 2},
			  {"BWA3_20Rnd_762x51_G28", 3},
			  {"BWA3_15Rnd_9x19_P8", 10},
			  {"1Rnd_HE_Grenade_shell", 4},
			  {"BWA3_DM51A1", 6},
			  {"BWA3_DM25", 6},
			};
		}

		class AmmoPackChest : DefaultChest {
			box = "Box_NATO_Ammo_F";
			name = "Munitionskiste Packungen";
			items[] = {
			  {"greenmag_ammo_556x45_basic_60Rnd", 60},
			  {"greenmag_beltlinked_762x51_basic_100", 10},
			};
		}

		class GrenateChest : DefaultChest {
			box = "Box_NATO_Grenades_F";
			name = "Granatenkiste";
			items[] = {
			  {"BWA3_DM51A1", 12},
			  {"rhs_mag_an_m8hc", 12},
			  {"SmokeShellPurple", 4},
			  {"SmokeShellBlue", 6},
			  {"SmokeShellRed", 6},
			  {"1Rnd_Smoke_Grenade_shell", 4},
			  {"1Rnd_HE_Grenade_shell", 6},
			  {"UGL_FlareRed_F", 2},
			  {"UGL_FlareGreen_F", 2}
			};
		}

		class LeaderChest : DefaultChest {
			box = "Box_NATO_Support_F";
			name = "Fuehrungskist";
			items[] = {
			  {"SmokeShellPurple", 4},
			  {"SmokeShellBlue", 6},
			  {"SmokeShellRed", 6},
			  {"UGL_FlareRed_F", 4},
			  {"UGL_FlareGreen_F", 4},
			  {"Laserbatteries", 4},
			  {"ACE_CableTie", 8},
			};
		}

		class LauncherChest : DefaultChest {
			box = "Box_NATO_WpsLaunch_F";
			name = "PzF3-Kiste";
			weapons[] = {
			  {"BWA3_PzF3_Tandem_Loaded", 4}
			};
		}
		
		class ExplosiveChest : DefaultChest {
			box = "Box_NATO_AmmoOrd_F";
			name = "Sprengstoff-Kiste";
			items[] = {
			  {"DemoCharge_Remote_Mag", 6},
			  {"SatchelCharge_Remote_Mag",2},
			  {"ACE_Clacker", 1}
			};
		}
		
		class MG3Chest : DefaultChest {
			box = "Box_NATO_Ammo_F";
			name = "MG3-Kiste";
			items[] = {
			  {"UK3CB_MG3_100rnd_762x51_R", 2},
			  {"greenmag_beltlinked_762x51_basic_100", 22},
			};
		}
		
		class KPVTChest : DefaultChest {
			box = "Box_NATO_Ammo_F";
			name = "KPVT-Kiste";
			magazines[] = {
			  {"ace_csw_50Rnd_127x108_mag", 6},
			};
		}
		
		class M2Chest : DefaultChest {
			box = "Box_NATO_Ammo_F";
			name = "M2-Kiste";
			magazines[] = {
			  {"ace_csw_100Rnd_127x99_mag", 6},
			};
		}
		
		class Mk19Chest : DefaultChest {
			box = "Box_NATO_Ammo_F";
			name = "Mk19-Kiste";
			magazines[] = {
			  {"ace_compat_rhs_usf3_48Rnd_40mm_MK19", 6},
			};
		}
		
		class FoodChest : DefaultChest {
			box = "Land_PlasticCase_01_large_gray_F";
			name = "Verpflegungs-Kiste";
			size = 4;
			items[] = {
			  {"ACE_MRE_SteakVegetables",4},
			  {"ACE_MRE_MeatballsPasta",4},
			  {"ACE_MRE_LambCurry",4},
			  {"ACE_MRE_CreamTomatoSoup",4},
			  {"ACE_MRE_CreamChickenSoup",4},
			  {"ACE_MRE_ChickenHerbDumplings",4},
			  {"ACE_MRE_BeefStew",4},
			  {"ACE_MRE_ChickenTikkaMasala",4},
			  {"ACE_WaterBottle", 40}
			};
		}
		
		class SpareWheel : DefaultChest {
			box = "ACE_Wheel";
			name = "Ersatzrad";
			size = 1;
			items[] = {};
		}
		
		class SpareTrack : DefaultChest {
			box = "ACE_Track";
			name = "Ersatzkette";
			items[] = {};
		}
		
		class FuleBarrel : DefaultChest {
			box = "Land_MetalBarrel_F";
			name = "Spritfass";
			size = 6;
			items[] = {};
		}
	}
}
