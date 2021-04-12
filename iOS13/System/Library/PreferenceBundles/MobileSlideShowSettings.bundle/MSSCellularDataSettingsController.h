/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(id)unlimitedUpdatesForSpecifier:(id)arg1 ;
-(void)setUnlimitedUpdates:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_validateUnlimitedUpdatesSpecifiers;
@end

