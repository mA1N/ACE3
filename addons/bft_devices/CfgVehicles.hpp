class CfgVehicles {
    // Boxes
    class Box_NATO_Support_F;
    class ACE_Box_BFT_b: Box_NATO_Support_F {
        author = "$STR_ACE_Common_ACETeam";
        displayName = "$STR_ACE_BFT_Devices_Box_b";
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACE_DK10_b,5);
            MACRO_ADDITEM(ACE_GD300_b,15);
            MACRO_ADDITEM(ACE_HelmetCam,25);
        };
    };
    class Box_East_Support_F;
    class ACE_Box_BFT_o: Box_East_Support_F {
        author = "$STR_ACE_Common_ACETeam";
        displayName = "$STR_ACE_BFT_Devices_Box_o";
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACE_DK10_o,5);
            MACRO_ADDITEM(ACE_GD300_o,15);
            MACRO_ADDITEM(ACE_HelmetCam,25);
        };
    };
    class Box_IND_Support_F;
    class ACE_Box_BFT_i: Box_IND_Support_F {
        author = "$STR_ACE_Common_ACETeam";
        displayName = "$STR_ACE_BFT_Devices_Box_i";
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 9001;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACE_DK10_i,5);
            MACRO_ADDITEM(ACE_GD300_i,15);
            MACRO_ADDITEM(ACE_HelmetCam,25);
        };
    };

    // Vehicles

    // MRAPs
    class MRAP_01_base_F;
    class B_MRAP_01_F: MRAP_01_base_F {
        EGVAR(bft,vehicleDevices)[] = {"JV5_Mot_b"};
    };

    // Armor

    // Helicopters
    class Heli_Attack_01_base_F;
    class B_Heli_Attack_01_F: Heli_Attack_01_base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_b"};
    };

    class Heli_Light_01_armed_base_F;
    class B_Heli_Light_01_armed_F: Heli_Light_01_armed_base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_b"};
    };

    class Heli_Light_01_unarmed_base_F;
    class B_Heli_Light_01_F: Heli_Light_01_unarmed_base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_b"};
    };

    class Heli_Transport_01_base_F;
    class B_Heli_Transport_01_F: Heli_Transport_01_base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_b"};
    };

    class Helicopter_Base_H;
    class Heli_Transport_03_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_b"};
    };
    class Heli_Light_02_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_o"};
    };
    class Heli_Transport_02_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_i"};
    };
    class Heli_Transport_04_base_F: Helicopter_Base_H {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Heli_o"};
    };

    // Planes
    class Plane_Base_F;
    class Plane_CAS_01_base_F: Plane_Base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Plane_b"};
    };
    class Plane_CAS_02_base_F: Plane_Base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Plane_o"};
    };
    class Plane_Fighter_03_base_F: Plane_Base_F {
        EGVAR(bft,vehicleDevices)[] = {"TAD_Plane_i"};
    };
};
