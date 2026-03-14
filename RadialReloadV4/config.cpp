class CfgPatches {
	class UGLMod {
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class SW_Weapons_Part2
	{
		dir = "SW_Weapons_Part2";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name =  "Aidar";
		credits =  "aidar";
		author =  "Aidar";
		authorID = "0";
		version = "1.0;";
		extra = 0;
		type = "mod";
		inputs = "test/inputs.xml";
		dependencies[] = {"Game","World","Mission"};
		
		class defs {
			class gameScriptModule
			{
				value="";
				files[] = {"test\scripts\3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"test\scripts\4_World"};
			};
			class missionScriptModule {
				value = "";
				files[] = {"test\scripts\5_Mission"};
			};
		};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class Mode_Single;
class OpticsInfoRifle;
class M79;
class cfgWeapons
{
	class Rifle_Base;
	class SVO_AR15_Base: Rifle_Base{
		scope=0;
		weight=2276;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.77999997;
		ObstructionDistance=0.52600002;
		ShoulderDistance=0.050000001;
		barrelArmor=2.5;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,0.75};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		muzzles[] =
        {
            "this",
            "M203"
        };
		 class M203: Muzzle_Base
        {
            magazines[] =
            {
                "Ammo_40mm_Explosive_RU"
            };
        };

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		weaponStateAnim="dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0,0.029999999};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.1,0,-0.039999999};
				orientation[]={0,0,0};
			};
		};
	};
	class SVO_AR15_UBTEST: SVO_AR15_Base{
		scope=2;
		displayName="$STR_cfgWeapons_M4A10";
		descriptionShort="$STR_cfgWeapons_M4A11";
		model="\dz\weapons\firearms\m4\m4a1.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"WeaponHandguardM4",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"svo_GP_AR"
		};
		itemSize[]={8,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\m4\data\m4_body_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\firearms\m4\data\m4_body.rvmat"
		};
	};
};
	class cfgVehicles{
	class Inventory_Base;
	class svo_underbrl_M203_UBTEST : Inventory_Base {
		scope = 2;
		displayName = "Подствольный гранатомет M203";
		descriptionShort = "";
		model = "DZ\weapons\attachments\underslung\M203.p3d";
		inventorySlot[] = { "svo_GP_AR" };
		attachments[] = { "svo_Weapon_AR" };
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAN"};
		weight = 530;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
	};
};
class CfgMagazines
{
	class Ammo_40mm_Base;
    class Ammo_40mm_Explosive_RU: Ammo_40mm_Base
	{
		scope=2;
		displayName="$STR_Ammo_40mm_Explosive0";
		descriptionShort="$STR_Ammo_40mm_Explosive1";
		model="\dz\weapons\ammunition\40mm_grenade.p3d";
		ammo="Bullet_40mm_Explosive";
	};
};
class CfgSlots
{
	class Slot_svo_Weapon_AR{
		name = "svo_Weapon_AR";
		displayName = "Приклад";
		ghostIcon = "set:iconsetsweapons image:buttstock";
	};
	class Slot_svo_GP_AR{
		name = "svo_GP_AR";
		displayName = "Приклад";
		ghostIcon = "set:iconsetsweapons image:buttstock";
	};
};