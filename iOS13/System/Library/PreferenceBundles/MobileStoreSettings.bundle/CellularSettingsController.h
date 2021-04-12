/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <Preferences/PSListController.h>

@class ISURLBag, ASDCellularSettings;

@interface CellularSettingsController : PSListController {

	ISURLBag* _bag;
	ASDCellularSettings* _settings;

}

@property (nonatomic,retain) ASDCellularSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) ISURLBag * bag;                              //@synthesize bag=_bag - In the implementation block
-(id)init;
-(ASDCellularSettings *)settings;
-(void)setSettings:(ASDCellularSettings *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(ISURLBag *)bag;
-(void)setBag:(ISURLBag *)arg1 ;
-(id)_formattedNetworkLimit;
@end

