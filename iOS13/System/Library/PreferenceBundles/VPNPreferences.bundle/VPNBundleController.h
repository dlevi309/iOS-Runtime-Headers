/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSBundleController.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, VPNConnectionStore, NSNumber, PSSpecifier, PSConfirmationSpecifier, NSString;

@interface VPNBundleController : PSBundleController <UIApplicationDelegate> {

	BOOL _networkSpinnerVisible;
	BOOL _rootMenuItem;
	BOOL _toggleSwitchInRootMenu;
	BOOL _registered;
	VPNConnectionStore* _connectionStore;
	NSNumber* _lastServiceCount;
	PSSpecifier* _passwordSetupSpecifier;
	PSSpecifier* _vpnSpecifier;
	PSSpecifier* _linkVPNSpecifier;
	PSConfirmationSpecifier* _toggleVPNSpecifier;

}

@property (retain) VPNConnectionStore * connectionStore;                              //@synthesize connectionStore=_connectionStore - In the implementation block
@property (retain) NSNumber * lastServiceCount;                                       //@synthesize lastServiceCount=_lastServiceCount - In the implementation block
@property (retain) PSSpecifier * passwordSetupSpecifier;                              //@synthesize passwordSetupSpecifier=_passwordSetupSpecifier - In the implementation block
@property (retain) PSSpecifier * vpnSpecifier;                                        //@synthesize vpnSpecifier=_vpnSpecifier - In the implementation block
@property (retain) PSSpecifier * linkVPNSpecifier;                                    //@synthesize linkVPNSpecifier=_linkVPNSpecifier - In the implementation block
@property (retain) PSConfirmationSpecifier * toggleVPNSpecifier;                      //@synthesize toggleVPNSpecifier=_toggleVPNSpecifier - In the implementation block
@property (getter=isNetworkSpinnerVisible) BOOL networkSpinnerVisible;                //@synthesize networkSpinnerVisible=_networkSpinnerVisible - In the implementation block
@property (getter=isRootMenuItem) BOOL rootMenuItem;                                  //@synthesize rootMenuItem=_rootMenuItem - In the implementation block
@property (getter=isToggleSwitchInRootMenu) BOOL toggleSwitchInRootMenu;              //@synthesize toggleSwitchInRootMenu=_toggleSwitchInRootMenu - In the implementation block
@property (getter=isRegistered) BOOL registered;                                      //@synthesize registered=_registered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(BOOL)networkingIsDisabled;
+(void)disableAirplaneMode;
-(void)dealloc;
-(BOOL)isRegistered;
-(void)unload;
-(void)setRegistered:(BOOL)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(id)statusForSpecifier:(id)arg1 ;
-(BOOL)isNetworkSpinnerVisible;
-(void)setNetworkSpinnerVisible:(BOOL)arg1 ;
-(unsigned long long)getStatusAndUpdateNetworkSpinnerVisibility;
-(PSSpecifier *)vpnSpecifier;
-(PSConfirmationSpecifier *)toggleVPNSpecifier;
-(void)vpnStatusChanged:(id)arg1 ;
-(void)setVPNActive:(BOOL)arg1 ;
-(void)setVPNActive:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vpnActiveForSpecifier:(id)arg1 ;
-(void)setToggleVPNSpecifier:(PSConfirmationSpecifier *)arg1 ;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(PSSpecifier *)linkVPNSpecifier;
-(void)setLinkVPNSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)isRootMenuItem;
-(void)setLastServiceCount:(NSNumber *)arg1 ;
-(NSNumber *)lastServiceCount;
-(void)setToggleSwitchInRootMenu:(BOOL)arg1 ;
-(BOOL)isToggleSwitchInRootMenu;
-(void)setVpnSpecifier:(PSSpecifier *)arg1 ;
-(void)vpnConfigurationChanged:(id)arg1 ;
-(void)setRootMenuItem:(BOOL)arg1 ;
-(void)updateVPNSwitchStatus;
-(VPNConnectionStore *)connectionStore;
-(void)setConnectionStore:(VPNConnectionStore *)arg1 ;
-(PSSpecifier *)passwordSetupSpecifier;
-(void)setPasswordSetupSpecifier:(PSSpecifier *)arg1 ;
@end

