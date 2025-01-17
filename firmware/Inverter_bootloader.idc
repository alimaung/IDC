//==================================================================================================
// bootloader.idc -- inverter development center project file for the bootloader
//==================================================================================================

Project
	{
	MainProject_Directory							= ".";
	MapFile											= "./inverter.map";
	}
	
	
//-------------------------------------------------------------------------------------------------
// List of properties for this project
// -----------------------------------
// Possible property types:
//    PROPERTYTYPE_SIGNED_INTEGER		1
//    PROPERTYTYPE_UNSIGNED_INTEGER		2
//    PROPERTYTYPE_SIGNED_FLOAT			3
//    PROPERTYTYPE_BIT					4
//    PROPERTYTYPE_STRING				5
//    PROPERTYTYPE_RAW					6
//
//-------------------------------------------------------------------------------------------------
Properties
	{
	Property_1										= "ProductCode";
	Property_2										= "SerialNumber";
	Property_3										= "Bootloader_Version";
	Property_4										= "Application_Version";
	}
	
ProductCode
	{
	Name											= "Product Code";
	Identifier										= 10001;
	Type											= 2;	
	ReadAccessLevel									= 0;	
	WriteAccessLevel								= 3;	
	}
	
SerialNumber
	{
	Name											= "Serial Number";
	Identifier										= 10002;
	Type											= 2;		
	ReadAccessLevel									= 0;	
	WriteAccessLevel								= 3;	
	}

Bootloader_Version
	{
	Name											= "BL Version";
	Identifier										= 10011;
	Type											= 2;		
	ReadAccessLevel									= 0;	
	WriteAccessLevel								= 3;	
	}

Application_Version
	{
	Name											= "APP Version";
	Identifier										= 20011;
	Type											= 2;		
	ReadAccessLevel									= 0;	
	WriteAccessLevel								= 3;	
	}
