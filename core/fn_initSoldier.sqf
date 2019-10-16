params["_addNightVision"];
private _loadout = "";
private _groupId = groupId(group player);

waitUntil {!isNil "soldierLoadout"};

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

player forceAddUniform 	getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniform");
player addVest 			getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vest");
player addBackpack 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpack");

player addHeadgear 		selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "headgears") select 0);
player addGoggles 		selectRandom (getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "goggles") select 0);

player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "radio");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "compass");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "map");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "watch");
player linkItem 		getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "gps");

// uniform items
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToUniform	(_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformItems");

// vest items
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToVest (_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestMedic");
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToVest (_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestAmmo");
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToVest (_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "vestItems");

// backpack items
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToBackpack (_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackMedic");
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToBackpack (_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackAmmo");
{
	for "_i" from 1 to (_x select 1) do {
		player addItemToBackpack (_x select 0);
	};
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "backpackItems");

// primaryWeapon
player addWeapon getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeapon");
{
	player addPrimaryWeaponItem	(_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponItems");

// secondaryWeapon (Handgun)
player addWeapon getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeapon");
{
	player addHandgunItem (_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "secondaryWeaponItems");

// atWeapon
player addWeapon getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "atWeapon");
{
	player addSecondaryWeaponItem (_x select 0);
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "atWeaponItems");


if (
	(
		_addNightvision == -1
		&& (date select 3 < 6 || date select 3 > 17)
	) || _addNightvision == 1
) then {
	player linkItem getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "nvision");

	{
		for "_i" from 1 to (_x select 1) do {
			player addItemToUniform	(_x select 0);
		};
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "uniformItemsNite");

	{
		player addPrimaryWeaponItem	(_x select 0);
	} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "primaryWeaponItemsNite");
};

// additionalWeapon
player addWeapon getText(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "binocular");
// todo add 1 mag after add weapons, remove before -> Check it before

// TFAR set Frequencys
sleep 15;
{
	[(call TFAR_fnc_activeSwRadio), (_x select 1), (_x select 0)] call TFAR_fnc_setChannelFrequency;
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> "srFrequencys");

{
	[(player call TFAR_fnc_backpackLR), (_x select 1), (_x select 0)] call TFAR_fnc_setChannelFrequency;
} forEach getArray(missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "lrFrequencys");

private _srChanal =  getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> "curentSRChanle");
private _lrChanal =  getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "curentLRChanle");
private _srChanalA = getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "curentSRAditionalChanle");
private _lrChanalA = getNumber (missionConfigFile >> mapConfig >> "UnitsConfig" >> _groupId >> _loadout >> "curentLRAditionalChanle");

[call TFAR_fnc_activeSwRadio, (_srChanal - 1)] call TFAR_fnc_setSwChannel;

if (_srChanalA != 0) then {
	[(call TFAR_fnc_activeSwRadio), (_srChanalA - 1)] call TFAR_fnc_setAdditionalSwChannel;
	//[(call TFAR_fnc_activeSwRadio) select 0, (call TFAR_fnc_activeSwRadio) select 1, srChanalA] call TFAR_fnc_setAdditionalSwChannel;
};

if (_lrChanal != 0) then {
	[player call TFAR_fnc_backpackLR, (_lrChanal - 1)] call TFAR_fnc_setLrChannel;
	//[(call TFAR_fnc_backpackLR) select 0, (call TFAR_fnc_backpackLR) select 1, srChanal] call TFAR_fnc_setAdditionalBackpackLRChannel;
};

if (_lrChanalA != 0) then {
 	[player call TFAR_fnc_backpackLR, (_lrChanalA - 1)] call TFAR_fnc_setAdditionalLrChannel;
	//[(call TFAR_fnc_backpackLR) select 0, (call TFAR_fnc_backpackLR) select 1, lrChanalA] call TFAR_fnc_backpackLRChannel;
};