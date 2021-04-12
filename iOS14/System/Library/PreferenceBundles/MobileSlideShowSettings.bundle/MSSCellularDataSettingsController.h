/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
*/

#import <Preferences/PSListController.h>

@class PSSystemPolicyForApp, NSArray;

@interface MSSCellularDataSettingsController : PSListController {

	PSSystemPolicyForApp* _appPolicy;
	NSArray* _cellularSpecifiers;
	NSArray* _unlimitedUpdatesSpecifiers;
	NSArray* _invocations;

}
+(BOOL)shouldShowCellularDataSettings;
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)unlimitedUpdatesForSpecifier:(id)arg1 ;
-(void)setUnlimitedUpdates:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_validateUnlimitedUpdatesSpecifiers;
@end

