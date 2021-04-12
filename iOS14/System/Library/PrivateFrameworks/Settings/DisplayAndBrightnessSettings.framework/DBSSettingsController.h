/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UISUserInterfaceStyleModeDelegate.h>
#import <libobjc.A.dylib/DBSDeviceAppearanceTableViewCellDelegate.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class NSArray, NSDictionary, NSMutableDictionary, CBClient, NSDateFormatter, UISUserInterfaceStyleMode, NSString;

@interface DBSSettingsController : PSListController <UISUserInterfaceStyleModeDelegate, DBSDeviceAppearanceTableViewCellDelegate, PSListControllerTestableSpecifiers> {

	NSArray* _autoLockValues;
	NSDictionary* _autoLockTitleDictionary;
	NSMutableDictionary* _localizedAutoLockTitleDictionary;
	CBClient* _brightnessClient;
	NSDateFormatter* _timeFormatter;
	UISUserInterfaceStyleMode* __styleMode;

}

@property (nonatomic,retain) UISUserInterfaceStyleMode * _styleMode;              //@synthesize _styleMode=__styleMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)profileNotification:(id)arg1 ;
-(void)userInterfaceStyleModeDidChange:(id)arg1 ;
-(UISUserInterfaceStyleMode *)_styleMode;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)brightnessChangedExternally;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)screenLock:(id)arg1 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_DB2*)arg1 ;
-(id)localizedTimeForTime:(SCD_Struct_DB0)arg1 ;
-(void)deviceAppearanceTableViewCellUserDidTapOnLightAppearance:(id)arg1 ;
-(void)deviceAppearanceTableViewCellUserDidTapOnDarkAppearance:(id)arg1 ;
-(void)set_styleMode:(UISUserInterfaceStyleMode *)arg1 ;
-(id)_lightAppearanceTimeString;
-(id)_darkAppearanceTimeString;
-(void)handleDBSExternalDisplayManagerCurrentModeDidChangeNotification:(id)arg1 ;
-(void)handleBrightnessChangedNotification:(id)arg1 ;
-(void)updateAutoLockSpecifier;
-(void)_cleanupTransactionRef;
-(id)_deviceAppearanceScheduleSpecifier;
-(BOOL)shouldShowAutoLock;
-(BOOL)shouldShowCaseLockOption;
-(id)lockGroupFooter;
-(void)presentModalMagnifyController;
-(id)connectedDisplaySpecifiers;
-(void)_localizeAutoLockTitles;
-(void)reloadBlueLightSpecifiers;
-(id)backlightValue:(id)arg1 ;
-(void)showAlertToDisableAccessibilityFilters:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)insertExternalDisplaySpecifiers;
-(void)removeExternalDisplaySpecifiers;
-(id)_deviceAppearanceScheduleString;
-(void)_updateDeviceAppearanceToNewInterfaceStyle:(long long)arg1 ;
-(void)setScreenLock:(id)arg1 specifier:(id)arg2 ;
-(id)locksAndUnlocksWithCase:(id)arg1 ;
-(void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2 ;
-(id)localizedMagnifyModeName;
-(void)showBlackViewWithLabel:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)boldTextEnabledForSpecifier:(id)arg1 ;
-(void)setBacklightValue:(id)arg1 specifier:(id)arg2 ;
-(id)blueLightSchedule:(id)arg1 ;
-(id)getAutoWhiteBalanceEnabled:(id)arg1 ;
-(void)setAutoWhiteBalanceEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getAppearanceValueForSpecifier:(id)arg1 ;
-(void)setAppearanceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getAutomaticAppearanceEnabledForSpecifier:(id)arg1 ;
-(void)setAutomaticAppearanceEnabled:(id)arg1 forSpecifier:(id)arg2 ;
@end

