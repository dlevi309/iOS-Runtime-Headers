/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <BluetoothSettings/BluetoothSettings-Structs.h>
#import <Preferences/PSListItemsController.h>

@class BTSDevice;

@interface AccessoryControlListItemsController : PSListItemsController {

	BTSDevice* _currentDevice;
	SCD_Struct_Ac4 _listeningModeConfigs;

}
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(id)init;
-(void)listItemSelected:(id)arg1 ;
-(void)dealloc;
@end

