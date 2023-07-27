//Version 1.3 Including seperate Wapon Ammo and Granate slots for Vest and Backpack
//Version 1.4 Including seperate Nightequipment Items and Primary Wapon Atatchments
//Version 2.0 Change the groop base from Calsine to Group variable
//Version 2.1 Fix Error masage if player hadend SR Radio
//Version 2.2 adds posybillety to Gender Uniforms
//Version 3.0 adds ACRE Compatibelity
//Version 3.1 add seperation for Uniform items, improve Nightequipment handeling
//Version 3.2 add safemode on load
//Version 3.2 add personalMedicStuff
//Version 3.3 add Night specific Weapon
//Version 4.0 add hint if some item can't stort
//Version 4.1 add Slunged Helmet to config

//params["_addNightVision"];
//private _loadout = "";
//private _groupId = groupId(group player);


params["_addNightVision", ["_pinGroup", true]];
private ["_loadout", "_cfgGroups", "_uniformG"];
private _missingItems = [];
_groupId = "CREDefault";
_loadout = "";

waitUntil {!isNil "soldierLoadout"};
waitUntil {!isNil "CRE_ignoreSoldierLoadout"};
waitUntil {!isNil "CRE_wPlayers"};
_isAcre = missionNamespace getVariable ["CRE_isAcre", false];
_slungHeadgear = missionNamespace getVariable ["CRE_slungHeadgear", false];


if (isNil "CRE_cfgGroups") then {
	_cfgGroups = [];
	{
		private _y = ((str _x) splitString "/") select ((count ((str _x) splitString "/"))-1);
		if (((missionNamespace getVariable "CRE_ignoreSoldierLoadout") find _y) < 0) then {
			_cfgGroups pushBackUnique _y;
		};
	}  forEach ("true" configClasses(missionConfigFile >> mapConfig >> "UnitsConfig"));
} else {
	_cfgGroups = (missionNamespace getVariable "CRE_cfgGroups");
};

if ((getPlayerUID player) in (missionNamespace getVariable "CRE_wPlayers")) then {
	_uniformG = "uniformsW";
} else {
	_uniformG = "uniforms";
};


if(isNil "CRE_groupId") then {
	{
		if(group player == missionNamespace getVariable _x) exitWith { 
			_groupId = _x;
			if (_pinGroup) then {
				missionNamespace setVariable ["CRE_groupId", _groupId];
			};
		};
		_groupId = "CREDefault";
	} forEach _cfgGroups;
} else {
	_groupId = (missionNamespace getVariable "CRE_groupId");
};


{
	if ((_x select 1) find (str vehicle player) != -1) exitWith {
		_loadout = _x select 0;
	};
} forEach soldierLoadout;

if (_loadout == "") then {
	_loadout = "Soldier";
};

if (
	!isClass(missionConfigFile >> mapConfig)
	|| !isClass(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId)
	|| !isClass(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout)
) exitWith {
	hint format["C: %1 | G: %2 | L: %3", mapConfig, _groupId, _loadout];
	-1;
};

removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

[(selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> _uniformG)))] call {
	(_this select 0) params ["_class", ["_textures", []]];
	player forceAddUniform _class;
	
	if ((count _textures) != 0) then {
		_i = 0;
		{
			[_x, _i] spawn {
				params ["_path", "_slot"];
				for "_i" from 0 to 15 do {
					player setObjectTextureGlobal [_slot, _path];
					sleep 2;
				};
			};
			_i = _i + 1;
		} forEach _textures;
	};
};
player addVest 			selectRandom (selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vests")));
player addBackpack 		selectRandom (selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpacks")));

if (
	(
		(
			_addNightvision == -1
			&& (date select 3 < 6 || date select 3 > 17)
		) || _addNightvision >= 1
	) &&
	(
		(getNumber(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpacksNightForce") != 0) ||
		(count ((getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpacks"))) == 0)
	)
) then {
	removeBackpack player;
	player addBackpack 		selectRandom (selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpacksNight")));
};

if (_isAcre > 0 && (count ((getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "TFARbackpacks"))) != 0)) then {
	removeBackpack player;
	player addBackpack 		selectRandom (selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "TFARbackpacks")));
};

{
	player removeItemFromUniform _x;
} forEach uniformItems player;

{
	player removeItemFromVest _x;
} forEach vestItems player;

{
	player removeItemFromBackpack _x;
} forEach backpackItems player;


player addGoggles selectRandom (selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "goggles")));

if (_isAcre > 0) then {
	player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "radio");
};
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "compass");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "map");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "watch");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "gps");

// primaryWeapon
if (
	(
		(
			_addNightvision == -1
			&& (date select 3 < 6 || date select 3 > 17)
		) || _addNightvision >= 1
	) && ((getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponNight")) != "")
) then {
	player addWeapon (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponNight"));
} else {
	player addWeapon (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeapon"));
};
if (
	(
		(
			_addNightvision == -1
			&& (date select 3 < 6 || date select 3 > 17)
		) || _addNightvision >= 1
	) && (count (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponItemsNight")) > 0)
) then {
	{
		player addPrimaryWeaponItem	(_x select 0);
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponItemsNight");
} else {
	{
		player addPrimaryWeaponItem	(_x select 0);
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponItems");
};
{
	player addPrimaryWeaponItem	(_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponAmmo");

// secondaryWeapon (Handgun)
if (
	(
		(
			_addNightvision == -1
			&& (date select 3 < 6 || date select 3 > 17)
		) || _addNightvision >= 1
	) && ((getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponNight")) != "")
) then {
	player addWeapon (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponNight"));
} else {
	player addWeapon (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeapon"));
};
{
	player addHandgunItem (_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponItems");
if (
	(
		(
			_addNightvision == -1
			&& (date select 3 < 6 || date select 3 > 17)
		) || _addNightvision >= 1
	) && (count (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponItemsNight")) > 0)
) then {
	{
		player addHandgunItem	(_x select 0);
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponItemsNight");
} else {
	{
		player addHandgunItem	(_x select 0);
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponItems");
};
{
	player addHandgunItem (_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponAmmo");

// atWeapon
player addWeapon getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "atWeapon");
{
	player addSecondaryWeaponItem (_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "atWeaponItems");

//Acre Items
if (_isAcre < 0) then {	
	{
		for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToUniform (_x select 0)) then {
                player addItemToUniform (_x select 0);
            } else {
                _missingItems pushBack ["uniformRadios", (_x select 0)];
            };
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformRadios");
	{
		for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToVest (_x select 0)) then {
                player addItemToVest (_x select 0);
            } else {
                _missingItems pushBack ["vestRadios", (_x select 0)];
            };
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestRadios");
	{
		for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToBackpack (_x select 0)) then {
                player addItemToBackpack (_x select 0);
            } else {
                _missingItems pushBack ["backpackRadios", (_x select 0)];
            };
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackRadios");
};

// personalMedicStuff
[getNumber(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "personalMedicStuffPlace")] call {
    params [["_place", 0]];
    private _personalMedicStuff = getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "personalMedicStuff");
    if (_place == 1) exitWith {
        {
            for "_i" from 1 to (_x select 1) do {
                if(player canAddItemToVest (_x select 0)) then {
                    player addItemToVest (_x select 0);
                } else {
                    _missingItems pushBack ["personalMedicStuff_Vest", (_x select 0)];
                };
            };
        } forEach _personalMedicStuff;
    };
    if (_place == 2) exitWith {
        {
            for "_i" from 1 to (_x select 1) do {
                if(player canAddItemToUniform (_x select 0)) then {
                    player addItemToUniform (_x select 0);
                } else {
                    _missingItems pushBack ["personalMedicStuff_Uniform", (_x select 0)];
                };
            };
        } forEach _personalMedicStuff;
    };
    {
        for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToBackpack (_x select 0)) then {
                player addItemToBackpack (_x select 0);
            } else {
                _missingItems pushBack ["personalMedicStuff_Backpack", (_x select 0)];
            };
        };
    } forEach _personalMedicStuff;
};

// uniform items
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToUniform (_x select 0)) then {
            player addItemToUniform (_x select 0);
        } else {
            _missingItems pushBack ["uniformMedic", (_x select 0)]
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformMedic");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToUniform (_x select 0)) then {
            player addItemToUniform (_x select 0);
        } else {
            _missingItems pushBack ["uniformAmmo", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformAmmo");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToUniform (_x select 0)) then {
            player addItemToUniform (_x select 0);
        } else {
            _missingItems pushBack ["uniformGrenades", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformGrenades");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToUniform (_x select 0)) then {
            player addItemToUniform (_x select 0);
        } else {
            _missingItems pushBack ["uniformItems", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformItems");

//Headger add Pusible as uniform item
_headgear = 		selectRandom (selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "headgears")));
_headgearsParade =  getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "headgearsParade");
if (_slungHeadgear) then {
    if (count _headgearsParade != 0) then {
        player addHeadgear selectRandom (selectRandom (_headgearsParade));
    };
    [player, "_headgear"] call GRAD_slingHelmet_fnc_addSlungHelmet;
} else {
    if (count _headgearsParade != 0) then {
    _headgearParade = selectRandom (selectRandom (_headgearsParade));
        if(player canAddItemToUniform (_headgearParade)) then {
            player addItemToUniform (_headgearParade);
        } else {
            _missingItems pushBack ["uniformHeadgearParade", (_headgearParade)];
        };
    };
    player addHeadgear _headgear;
};

// vest items
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToVest (_x select 0)) then {
            player addItemToVest (_x select 0);
        } else {
            _missingItems pushBack ["vestMedic", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestMedic");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToVest (_x select 0)) then {
            player addItemToVest (_x select 0);
        } else {
            _missingItems pushBack ["vestAmmo", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestAmmo");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToVest (_x select 0)) then {
            player addItemToVest (_x select 0);
        } else {
            _missingItems pushBack ["vestGrenades", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestGrenades");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToVest (_x select 0)) then {
            player addItemToVest (_x select 0);
        } else {
            _missingItems pushBack ["vestItems", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestItems");

// backpack items
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToBackpack (_x select 0)) then {
            player addItemToBackpack (_x select 0);
        } else {
            _missingItems pushBack ["backpackMedic", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackMedic");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToBackpack (_x select 0)) then {
            player addItemToBackpack (_x select 0);
        } else {
            _missingItems pushBack ["backpackAmmo", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackAmmo");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToBackpack (_x select 0)) then {
            player addItemToBackpack (_x select 0);
        } else {
            _missingItems pushBack ["backpackGrenades", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackGrenades");
{
	for "_i" from 1 to (_x select 1) do {
        if(player canAddItemToBackpack (_x select 0)) then {
            player addItemToBackpack (_x select 0);
        } else {
            _missingItems pushBack ["backpackItems", (_x select 0)];
        };
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackItems");

if (
	(
		_addNightvision == -1
		&& (date select 3 < 6 || date select 3 > 17)
	) || _addNightvision >= 1
) then {
	if (_addNightvision == 2) then {
		[getNumber(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "nvisionPlace")] call {
			params [["_place", 0]];
            private _item = getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "nvision");
			if (_place == 1) exitWith {
                if(player canAddItemToVest _item) then {
                    player addItemToVest _item;
                } else {
                    _missingItems pushBack ["nvision_Vest", _item];
                };
			};
			if (_place == 2) exitWith {
                if(player canAddItemToUniform _item) then {
                    player addItemToUniform _item;
                } else {
                    _missingItems pushBack ["nvision_Uniform", _item];
                };
			};
            if(player canAddItemToBackpack _item) then {
                player addItemToBackpack _item;
            } else {
                _missingItems pushBack ["nvision_Backpack", _item];
            };
		};
	} else {
		player linkItem getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "nvision");
	};

	{
		for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToUniform (_x select 0)) then {
                player addItemToUniform (_x select 0);
            } else {
                _missingItems pushBack ["uniformItemsNight", (_x select 0)];
            };
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformItemsNight");

	{
		for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToVest (_x select 0)) then {
                player addItemToVest (_x select 0);
            } else {
                _missingItems pushBack ["vestItemsNight", (_x select 0)];
            };
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestItemsNight");

	{
		for "_i" from 1 to (_x select 1) do {
            if(player canAddItemToBackpack (_x select 0)) then {
                player addItemToBackpack (_x select 0);
            } else {
                _missingItems pushBack ["backpackItemsNight", (_x select 0)];
            };
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackItemsNight");
};

// additionalWeapon
player addWeapon getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "binocular");
// todo add 1 mag after add weapons, remove before -> Check it before

[player, currentWeapon player, true] call ace_safemode_fnc_setWeaponSafety;

if (count _missingItems > 0) then {
    hint str _missingItems;
}; 


if (_isAcre < 0) then {
// ACRE set Frequencys
	sleep 15;
	{
		_x params ["_radio", "_chanel"];
		if (([_radio] call acre_api_fnc_getRadioByType) != "") then {
			waitUntil { ([] call acre_api_fnc_isInitialized)};
			[([_radio] call acre_api_fnc_getRadioByType), _chanel] call acre_api_fnc_setRadioChannel;
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> "ACREChanels");
};

if (_isAcre > 0) then {
// TFAR set Frequencys
	sleep 15;

	if (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "radio") != "") then {
		{
			[(call TFAR_fnc_activeSwRadio), (_x select 1), (_x select 0)] call TFAR_fnc_setChannelFrequency;
		} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> "srFrequencys");
	};

	{
		[(player call TFAR_fnc_backpackLR), (_x select 1), (_x select 0)] call TFAR_fnc_setChannelFrequency;
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "lrFrequencys");

	private _srChanal =  getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> "curentSRChanle");
	private _lrChanal =  getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "curentLRChanle");
	private _srChanalA = getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "curentSRAditionalChanle");
	private _lrChanalA = getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "curentLRAditionalChanle");
	if (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "radio") != "") then {
		[call TFAR_fnc_activeSwRadio, (_srChanal - 1)] call TFAR_fnc_setSwChannel;
	};

	if (getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "radio") != "") then {
		if (_srChanalA != 0) then {
			[(call TFAR_fnc_activeSwRadio), (_srChanalA - 1)] call TFAR_fnc_setAdditionalSwChannel;
			//[(call TFAR_fnc_activeSwRadio) select 0, (call TFAR_fnc_activeSwRadio) select 1, srChanalA] call TFAR_fnc_setAdditionalSwChannel;
		};
	};

	if (_lrChanal != 0) then {
		[player call TFAR_fnc_backpackLR, (_lrChanal - 1)] call TFAR_fnc_setLrChannel;
		//[(call TFAR_fnc_backpackLR) select 0, (call TFAR_fnc_backpackLR) select 1, srChanal] call TFAR_fnc_setAdditionalBackpackLRChannel;
	};

	if (_lrChanalA != 0) then {
		[player call TFAR_fnc_backpackLR, (_lrChanalA - 1)] call TFAR_fnc_setAdditionalLrChannel;
		//[(call TFAR_fnc_backpackLR) select 0, (call TFAR_fnc_backpackLR) select 1, lrChanalA] call TFAR_fnc_backpackLRChannel;
	};
};