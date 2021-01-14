/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListItemsController.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate> {

	RadiosPreferences* _radioPreferences;

}

@property (nonatomic,retain) RadiosPreferences * radioPreferences;              //@synthesize radioPreferences=_radioPreferences - In the implementation block
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)airplaneModeChanged;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)dealloc;
-(void)reloadCache;
@end

