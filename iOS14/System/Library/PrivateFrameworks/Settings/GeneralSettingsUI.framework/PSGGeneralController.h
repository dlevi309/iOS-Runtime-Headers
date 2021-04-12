/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL __viewWillAppearCalled;
	CRCarPlayPreferences* _carPreferences;

}

@property (nonatomic,retain) CRCarPlayPreferences * carPreferences;              //@synthesize carPreferences=_carPreferences - In the implementation block
@property (assign,nonatomic) BOOL _viewWillAppearCalled;                         //@synthesize _viewWillAppearCalled=__viewWillAppearCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(void)updateGameControllersWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadAsyncSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)specifiers;
-(void)setCarPreferences:(CRCarPlayPreferences *)arg1 ;
-(void)updateProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)delayedAsyncLoadSpecifiers;
-(CRCarPlayPreferences *)carPreferences;
-(void)loadHomeButtonSettings:(id)arg1 ;
-(void)loadLegalAndRegulatoryWithSpecifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(void)profileVisibilityChanged:(id)arg1 ;
-(BOOL)_viewWillAppearCalled;
-(void)updateSoftwareUpdateBadge;
-(void)profileNotification:(id)arg1 ;
-(void)handleTVOutChange;
-(void)reloadSpecifiers;
-(void)pairedVehiclesDidChange;
-(void)gameControllersDidChange;
-(void)handleDidBecomeActive;
-(void)updateFontsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)EDGEEnabled:(id)arg1 ;
-(void)shutDown:(id)arg1 ;
-(void)set_viewWillAppearCalled:(BOOL)arg1 ;
-(void)updateTrackpadWithCompletion:(/*^block*/id)arg1 ;
-(void)enableEdge:(id)arg1 ;
-(void)homeButtonCustomizeControllerDidFinish:(id)arg1 ;
-(BOOL)_hasCarPlayContent;
-(void)insertOrderedSpecifiers:(id)arg1 atID:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)updateVPNWithCompletion:(/*^block*/id)arg1 ;
-(void)pointerDevicesDidChange;
-(void)dealloc;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
@end

