/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListItemsController.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate> {

	RadiosPreferences* _radioPreferences;

}

@property (nonatomic,retain) RadiosPreferences * radioPreferences;              //@synthesize radioPreferences=_radioPreferences - In the implementation block
-(id)init;
-(void)dealloc;
-(void)airplaneModeChanged;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)reloadCache;
@end

