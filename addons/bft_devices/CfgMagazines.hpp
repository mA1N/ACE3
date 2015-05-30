
class CfgMagazines {
    class CA_magazine;
    class GVAR(MagazineCore): CA_magazine {
        descriptionShort = "";
        descriptionUse = "";
        displayName = "";
        scope = 2;
        value = 1;
        count = 1;
        type = 16;
    };

    // DK10 BLUFOR
    class ACE_DK10Magazine_b: GVAR(MagazineCore) {
        descriptionShort = "$STR_ACE_BFT_Devices_DK10_itemDescription_b";
        displayName = "$STR_ACE_BFT_Devices_DK10_itemName_b";
        picture = QUOTE(PATHTOF(UI\inventory\DK10_icon.paa));
        mass = 40;
        EGVAR(bft,type) = "ACE_DK10_b";
    };

    // DK10 OPFOR
    class ACE_DK10Magazine_o: ACE_DK10Magazine_b {
        descriptionShort = "$STR_ACE_BFT_Devices_DK10_itemDescription_o";
        displayName = "$STR_ACE_BFT_Devices_DK10_itemName_o";
        EGVAR(bft,type) = "ACE_DK10_o";
    };

    // DK10 IND
    class ACE_DK10Magazine_i: ACE_DK10Magazine_b {
        descriptionShort = "$STR_ACE_BFT_Devices_DK10_itemDescription_i";
        displayName = "$STR_ACE_BFT_Devices_DK10_itemName_i";
        EGVAR(bft,type) = "ACE_DK10_i";
    };

    // GD300 BLUFOR
    class ACE_GD300Magazine_b: GVAR(MagazineCore) {
        descriptionShort = "$STR_ACE_BFT_Devices_GD300_itemDescription_b";
        displayName = "$STR_ACE_BFT_Devices_GD300_itemName_b";
        model = QUOTE(PATHTOF(data\GD300.p3d));
        picture = QUOTE(PATHTOF(UI\inventory\GD300_icon.paa));
        mass = 5;
        EGVAR(bft,type) = "ACE_GD300_b";
    };

    // GD300 OPFOR
    class ACE_GD300Magazine_o: ACE_GD300Magazine_b {
        descriptionShort = "$STR_ACE_BFT_Devices_GD300_itemDescription_o";
        displayName = "$STR_ACE_BFT_Devices_GD300_itemName_o";
        EGVAR(bft,type) = "ACE_GD300_o";
    };

    // GD300 OPFOR
    class ACE_GD300Magazine_i: ACE_GD300Magazine_b {
        descriptionShort = "$STR_ACE_BFT_Devices_GD300_itemDescription_i";
        displayName = "$STR_ACE_BFT_Devices_GD300_itemName_i";
        EGVAR(bft,type) = "ACE_GD300_i";
    };

    /*class ACE_MicroDAGR_xMagazine: ACE_DK10Magazine { // temporary name change to not interfere with MicroDAGR module during integration
        descriptionShort = "$STR_ACE_BFT_Devices_MicroDAGR_itemDescription";
        displayName = "$STR_ACE_BFT_Devices_MicroDAGR_itemName";
        model = QUOTE(PATHTOF(data\MicroDAGR.p3d));
        picture = QUOTE(PATHTOF(UI\inventory\MicroDAGR_icon.paa));
        mass = 6;
        EGVAR(bft,type) = "ACE_MicroDAGR_x";
    };*/
};
