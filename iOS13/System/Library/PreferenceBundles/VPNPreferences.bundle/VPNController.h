/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray;

@interface VPNController : PSListController {

	BOOL _networkSpinnerVisible;
	PSSpecifier* _connectEnterpriseSpecifier;
	PSSpecifier* _connectPersonalSpecifier;
	PSSpecifier* _currentAOVPNSpecifier;
	NSMutableArray* _currentAppVPNSpecifiers;
	NSMutableArray* _currentEnterpriseVPNSpecifiers;
	NSMutableArray* _currentPersonalVPNSpecifiers;
	PSSpecifier* _alwaysOnGroupTitleSpecifier;
	PSSpecifier* _enterpriseGroupTitleSpecifier;
	PSSpecifier* _personalGroupTitleSpecifier;
	PSSpecifier* _appGroupTitleSpecifier;
	PSSpecifier* _addVPNButtonSpecifier;

}

@property (getter=isNetworkSpinnerVisible) BOOL networkSpinnerVisible;              //@synthesize networkSpinnerVisible=_networkSpinnerVisible - In the implementation block
@property (retain) PSSpecifier * connectEnterpriseSpecifier;                        //@synthesize connectEnterpriseSpecifier=_connectEnterpriseSpecifier - In the implementation block
@property (retain) PSSpecifier * connectPersonalSpecifier;                          //@synthesize connectPersonalSpecifier=_connectPersonalSpecifier - In the implementation block
@property (retain) PSSpecifier * currentAOVPNSpecifier;                             //@synthesize currentAOVPNSpecifier=_currentAOVPNSpecifier - In the implementation block
@property (retain) NSMutableArray * currentAppVPNSpecifiers;                        //@synthesize currentAppVPNSpecifiers=_currentAppVPNSpecifiers - In the implementation block
@property (retain) NSMutableArray * currentEnterpriseVPNSpecifiers;                 //@synthesize currentEnterpriseVPNSpecifiers=_currentEnterpriseVPNSpecifiers - In the implementation block
@property (retain) NSMutableArray * currentPersonalVPNSpecifiers;                   //@synthesize currentPersonalVPNSpecifiers=_currentPersonalVPNSpecifiers - In the implementation block
@property (retain) PSSpecifier * alwaysOnGroupTitleSpecifier;                       //@synthesize alwaysOnGroupTitleSpecifier=_alwaysOnGroupTitleSpecifier - In the implementation block
@property (retain) PSSpecifier * enterpriseGroupTitleSpecifier;                     //@synthesize enterpriseGroupTitleSpecifier=_enterpriseGroupTitleSpecifier - In the implementation block
@property (retain) PSSpecifier * personalGroupTitleSpecifier;                       //@synthesize personalGroupTitleSpecifier=_personalGroupTitleSpecifier - In the implementation block
@property (retain) PSSpecifier * appGroupTitleSpecifier;                            //@synthesize appGroupTitleSpecifier=_appGroupTitleSpecifier - In the implementation block
@property (retain) PSSpecifier * addVPNButtonSpecifier;                             //@synthesize addVPNButtonSpecifier=_addVPNButtonSpecifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)unload;
-(void)handleURL:(id)arg1 ;
-(void)loadView;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)willBecomeActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(BOOL)isNetworkSpinnerVisible;
-(void)setNetworkSpinnerVisible:(BOOL)arg1 ;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(void)vpnConfigurationChanged:(id)arg1 ;
-(unsigned long long)updateNetworkSpinnerVisibility;
-(void)vpnPersonalStatusChanged:(id)arg1 ;
-(void)vpnEnterpriseStatusChanged:(id)arg1 ;
-(PSSpecifier *)connectPersonalSpecifier;
-(NSMutableArray *)currentPersonalVPNSpecifiers;
-(PSSpecifier *)connectEnterpriseSpecifier;
-(NSMutableArray *)currentEnterpriseVPNSpecifiers;
-(void)someVPNStatusChanged:(id)arg1 ;
-(void)setEnterpriseVPNActive:(BOOL)arg1 specifier:(id)arg2 ;
-(void)setPersonalVPNActive:(BOOL)arg1 specifier:(id)arg2 ;
-(PSSpecifier *)alwaysOnGroupTitleSpecifier;
-(void)setAlwaysOnGroupTitleSpecifier:(PSSpecifier *)arg1 ;
-(void)setCurrentAOVPNSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)currentAOVPNSpecifier;
-(void)setAOVPNEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getAOVPNEnabledForSpecifier:(id)arg1 ;
-(void)setCurrentEnterpriseVPNSpecifiers:(NSMutableArray *)arg1 ;
-(PSSpecifier *)enterpriseGroupTitleSpecifier;
-(void)setEnterpriseGroupTitleSpecifier:(PSSpecifier *)arg1 ;
-(void)setEnterpriseConnectionState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getEnterpriseConnectionStateForSpecifier:(id)arg1 ;
-(void)setConnectEnterpriseSpecifier:(PSSpecifier *)arg1 ;
-(id)messageForConnection:(id)arg1 ;
-(void)addListForGrade:(unsigned long long)arg1 toSpecifiers:(id)arg2 ;
-(void)setCurrentPersonalVPNSpecifiers:(NSMutableArray *)arg1 ;
-(PSSpecifier *)personalGroupTitleSpecifier;
-(void)setPersonalGroupTitleSpecifier:(PSSpecifier *)arg1 ;
-(void)setPersonalConnectionState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getPersonalConnectionStateForSpecifier:(id)arg1 ;
-(void)setConnectPersonalSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)appGroupTitleSpecifier;
-(void)setAppGroupTitleSpecifier:(PSSpecifier *)arg1 ;
-(void)setCurrentAppVPNSpecifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentAppVPNSpecifiers;
-(BOOL)shouldHideAddVPNButton;
-(void)setAddVPNButtonSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)addVPNButtonSpecifier;
-(void)addVPNConfiguration:(id)arg1 ;
-(void)changeActiveVPN:(id)arg1 ;
-(void)startEnterpriseConnection:(id)arg1 ;
-(void)cancelEnterpriseConnection:(id)arg1 ;
-(void)startPersonalConnection:(id)arg1 ;
-(void)cancelPersonalConnection:(id)arg1 ;
-(void)updateVPNConfigurationsList;
@end

