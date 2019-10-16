# ArmA 3 Loadout

**Requirements:**
- [ArmA 3](https://store.steampowered.com/app/107410/Arma_3/)
- [CBA_A3](https://steamcommunity.com/sharedfiles/filedetails/?id=450814997) [[Github](https://github.com/CBATeam/CBA_A3)]
- [TFAR](http://radio.task-force.ru/en/) [[Github](https://github.com/michail-nikolaev/task-force-arma-3-radio/releases/tag/1.0-PreRelease)]

**Install**
1. Download and put the files in the Mission folder.
2. Create Groups with Soldiers. Give every Unit an variable name, e.g. "Cerberus"
3. Give every soldier an variable name (e.g. s1, s2, s3, s4).
4. Create an Configuration, e.g. Lesokovets, best way is to put each Loadout in a single file.
5. Define the Loadout. The "Default Soldier" is the basic and from this Loadout, all other will be inheritated. This Soldier shoud get everything, what a normal soldier has. Afterwards, you can create the Units (must be the same name like under step 2 defined)
6. Include the configuration in the config/Master.hpp
7. Define the soldierLoadout in the init.sqf

e.g.
```
soldierLoadout = [
	['SquadLeader', ['c1', 'g1', 'f1', 'h1', 'p1']],
	['TeamLeader', 	['c2', 'c3', 'g2', 'f2', 'h2', 'p2']],
	['EOD', 		['c4', 'g4']],
	['RiflemanCVR',	['c5', 'g5']],
	['Grenadier', 	['c6', 'g6']],
	['MG', 			['c7', 'g7']],
	['MGassistant', ['c8', 'g8']],
	['AT', 			['c9', 'g9']]
];
```
means, that soldier with the variable name 'c1', 'g1', 'f1', 'h1' & 'p1' will get the Loadout, defined under the "SquadLeader" class in there group. Soldiers which arn't defined, will get the "defeaultSoldier" loadout.