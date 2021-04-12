/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <BluetoothSettings/BluetoothSettings-Structs.h>
#import <Preferences/PSListItemsController.h>

@class BTSDevice;

@interface AccessoryControlListItemsController : PSListItemsController {

	BTSDevice* _currentDevice;
	SCD_Struct_Ac4 _listeningModeConfigs;

}
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)listItemSelected:(id)arg1 ;
@end

