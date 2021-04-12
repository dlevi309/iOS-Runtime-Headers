/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(ISURLBag *)bag;
-(void)setSettings:(ASDCellularSettings *)arg1 ;
-(ASDCellularSettings *)settings;
-(void)setBag:(ISURLBag *)arg1 ;
-(id)_formattedNetworkLimit;
@end

