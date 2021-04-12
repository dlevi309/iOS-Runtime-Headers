/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>
#import <libobjc.A.dylib/PSGHomeButtonCustomizeControllerDelegate.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class NSTimer, PSGTVOutManager, PSSpecifier, NSArray, CRCarPlayPreferences, NSString;

@interface PSGGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSGHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers> {

	NSTimer* _usageTimer;
	PSGTVOutManager* _tvOutManager;
	PSSpecifier* _tvOutSpecifier;
	PSSpecifier* _airDropSpecifier;
	NSArray* _vpnBundleControllers;
	NSArray* _vpnSpecifiers;
	NSArray* _profileBundleControllers;
	NSArray* _profileSpecifiers;
	NSArray* _fontBundleControllers;
	NSArray* _fontSpecifiers;
	CRCarPlayPreferences* _carPreferences;

}

@property (nonatomic,retain) CRCarPlayPreferences * carPreferences;              //@synthesize carPreferences=_carPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)profileNotification:(id)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(void)reloadAsyncSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)updateVPNWithCompletion:(/*^block*/id)arg1 ;
-(void)updateProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateFontsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateTrackpadWithCompletion:(/*^block*/id)arg1 ;
-(void)insertOrderedSpecifiers:(id)arg1 atID:(id)arg2 animated:(BOOL)arg3 ;
-(void)delayedAsyncLoadSpecifiers;
-(CRCarPlayPreferences *)carPreferences;
-(void)setCarPreferences:(CRCarPlayPreferences *)arg1 ;
-(void)pairedVehiclesDidChange;
-(BOOL)_hasCarPlayContent;
-(void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1 ;
-(void)handleDidBecomeActive;
-(void)profileVisibilityChanged:(id)arg1 ;
-(void)pointerDevicesDidChange;
-(void)updateSoftwareUpdateBadge;
-(void)homeButtonCustomizeControllerDidFinish:(id)arg1 ;
-(void)handleTVOutChange;
-(void)loadLegalAndRegulatoryWithSpecifier:(id)arg1 ;
-(void)loadHomeButtonSettings:(id)arg1 ;
-(id)EDGEEnabled:(id)arg1 ;
-(void)enableEdge:(id)arg1 ;
-(void)shutDown:(id)arg1 ;
@end

