/*
	addNVision:
	-1 = Between 1700 and 0500
	0 = Off
	1 = On
 */
addNVision = paramsArray select 0;
systemChat str addNVision;

/*
	Configuration Class
*/
mapConfig = "BW_WD2022_virolati";
CRE_ignoreSoldierLoadout = ["DefaultSoldier", "DefaultSoldierLocal", "DefaultCrew", "DefaultCrewLocal", "DefaultGroop"];
CRE_isAcre = paramsArray select 1;
CRE_slungHeadgear = (1 == (paramsArray select 2));


/*
	Soldier Loadout Map
	[SoldierType, Array of Soldiers]
*/

soldierLoadout = [
	['SquadLeader',	['h1',  'h2',  'c1',  'g1',  's1',  'l1', 'p1']],
	['TeamLeader',	['h2',  'c2',  'g2',  's2',  'l2']],
	['RTO',			[]],
	['EOD', 		['c11', 'g11', 's11', 'l16', 'l17']],
	['Breacher', 	['c14', 'g14', 's14']],
	['RiflemanCVR',	['c10', 'g10', 's10', 'l10']],
	['RiflemanAT',	['c7',  'c8',  'g7',  'g8', 's7', 's8',  'l7', 'l8']],
	['Sani',		['c12', 'g12', 's12', 'h3', 'p2']],
	['Grenadier', 	['c6',  'g6',  's6',  'l6']],
	['LMG', 		['c5',  'g5',  's5']],
	['DMR', 		['c13', 'g13', 's13', 'h4']],
	['MG', 			['c3',  'g3',  's3',  'l3']],
	['MGassistant', ['c4',  'g4',  's4',  'l4']],
	['MGassistant2',['l5']],
	['Crew',        ['l12',  'l13',   'h_1_2', 'h_2_2', 'h_3_2']],
	['CrewLeader',  ['l11',  'h_1_1', 'h_2_1', 'h_3_1']]
];

/*
Cerberus-6		1 Zugführung -
Cerberus-6		2 Stelf. Zugführung -
Cerberus-6		3 San C -
Cerberus-6		4 Marksman -

Cerberus-1	1	Gruppenführung	-
Cerberus-1	2	Truppführung	-
Cerberus-1	3	MG	-
Cerberus-1	4	MG Assist	-
Cerberus-1	5	Automatikschütze	-
Cerberus-1	6	Grenadier	-
Cerberus-1	7	Schütze AT	-
Cerberus-1	8	Schütze AT	-
Cerberus-1	9	Schütze	-
Cerberus-1	10	San B	-
Cerberus-1	O-1 EOD -
Cerberus-1	O-2 San C -
Cerberus-1	O-3 Marksman -
Cerberus-1	O-4	Breacher -

...

Polarfuchs	1	Arzt -
Polarfuchs	2	San C -
Polarfuchs	3	Schütze -
Polarfuchs	4	Schütze -
*/

/*
	ACRE init
*/
if (CRE_isAcre == -1) then {
	[] execVM "scripts\ACREGlobalInit.sqf";
};

/*
Granaten Deaktivieren
*/
execVM "grenadeStop.sqf";

/*
Erweitertes Slingloading
*/
execVM "logistic\fn_advancedSlingLoadingInit.sqf";

/*
	Medick Tents
*/
medicTentBox = [
	"medicTent_1",
	"medicTent_2",
	"medicTent_3"
];
if (isServer) then {
    [["HC_01","HC_02","HC_03"]] call CRE_fnc_hcTracingInit;
    [] call CRE_fnc_hcTracing;
};

addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	if (_unit == h3) then {
		_mk = "VSS Cerberus-6";
		if (((getMarkerPos _mk) select 0) != 0 || ((getMarkerPos _mk) select 1) != 0 || ((getMarkerPos _mk) select 2) != 0) then {
			_house = (nearestObjects [getMarkerPos _mk, ["House"], 10]) select 0;
			_house setVariable ["ACE_medical_isMedicalFacility", false, true];
			deleteMarker _mk;
		};
	};
	if (_unit == c12) then {
		_mk = "VSS Cerberus-1";
		if (((getMarkerPos _mk) select 0) != 0 || ((getMarkerPos _mk) select 1) != 0 || ((getMarkerPos _mk) select 2) != 0) then {
			_house = (nearestObjects [getMarkerPos _mk, ["House"], 10]) select 0;
			_house setVariable ["ACE_medical_isMedicalFacility", false, true];
			deleteMarker _mk;
		};
	};
	if (_unit == g12) then {
		_mk = "VSS Cerberus-2";
		if (((getMarkerPos _mk) select 0) != 0 || ((getMarkerPos _mk) select 1) != 0 || ((getMarkerPos _mk) select 2) != 0) then {
			_house = (nearestObjects [getMarkerPos _mk, ["House"], 10]) select 0;
			_house setVariable ["ACE_medical_isMedicalFacility", false, true];
			deleteMarker _mk;
		};
	};
	if (_unit == p1) then {
		_mk = "Larzarett Polarfuchs";
		if (((getMarkerPos _mk) select 0) != 0 || ((getMarkerPos _mk) select 1) != 0 || ((getMarkerPos _mk) select 2) != 0) then {
			_house = (nearestObjects [getMarkerPos _mk, ["House"], 10]) select 0;
			_house setVariable ["ACE_medical_isMedicalFacility", false, true];
			deleteMarker _mk;
		};
	};
	[_unit] spawn {
		params ["_unit"];
		_unit setDamage 1;
		sleep 10;
		deleteVehicle _unit;
	};
	true;
}];
