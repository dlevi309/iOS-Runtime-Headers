/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class PSListController, PSSpecifier, CTXPCServiceSubscriptionContext, PSListItemsController, PSConfirmationSpecifier;

@interface PSUICellularRATSpecifier : PSSpecifier {

	PSListController* _hostController;
	PSSpecifier* _mobileDataGroup;
	int _RATSwitchKind;
	BOOL _3GOverrideTo4G;
	BOOL _LTEOverrideTo4G;
	BOOL _supports2G;
	BOOL _supports3G;
	BOOL _supports4G;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSListItemsController* _RATModeDrilldownController;
	PSConfirmationSpecifier* _warning;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * subscriptionContext;                  //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,retain) PSConfirmationSpecifier * warning;                                      //@synthesize warning=_warning - In the implementation block
@property (assign,nonatomic,__weak) PSListItemsController * RATModeDrilldownController;              //@synthesize RATModeDrilldownController=_RATModeDrilldownController - In the implementation block
-(BOOL)updateState;
-(PSConfirmationSpecifier *)warning;
-(void)setWarning:(PSConfirmationSpecifier *)arg1 ;
-(void)setRATModeDrilldownController:(PSListItemsController *)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5 ;
-(void)setRATModeState:(id)arg1 specifier:(id)arg2 ;
-(id)getRATModeState:(id)arg1 ;
-(void)updateRATState;
-(BOOL)shouldShowLTEOptions;
-(BOOL)shouldShowLegacyRATOptions;
-(BOOL)_updateMobileDataGroupContentShowingRAT:(BOOL)arg1 ;
-(void)_setRATModeIgnoreCall:(int)arg1 ;
-(id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2 ;
-(void)acceptedRATSwitchDuringCall:(id)arg1 ;
-(void)canceledRATSwitch:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)showVoLTECanCauseIssues;
-(void)_setRATModeConfirmed:(int)arg1 ;
-(BOOL)supportsVoLTE;
-(unsigned long long)_getLTEService;
-(BOOL)doesMatchMaxRAT:(long long)arg1 ;
-(id)getLTEService:(id)arg1 ;
-(void)setLTEService:(id)arg1 specifier:(id)arg2 ;
-(id)getRATSwitchIsOn:(id)arg1 ;
-(void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2 ;
-(void)updateRATSpecifiers;
-(void)acceptedRATSwitch:(id)arg1 ;
-(void)reloadRATStatus:(id)arg1 ;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(PSListItemsController *)RATModeDrilldownController;
@end

