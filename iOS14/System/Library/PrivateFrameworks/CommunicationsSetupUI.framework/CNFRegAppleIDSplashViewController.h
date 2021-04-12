/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController {

	BOOL _showBusyUIOnAppearance;
	CNFRegController* _regController;
	long long _serviceType;

}

@property (retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (assign) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) BOOL showBusyUIOnAppearance;                   //@synthesize showBusyUIOnAppearance=_showBusyUIOnAppearance - In the implementation block
+(BOOL)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id*)arg2 ;
+(id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)willBeginAuthWithContext:(id)arg1 ;
-(id)serviceIcon;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(id)serviceDescription;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_applicationDidResume:(id)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(id)_imService;
-(id)serviceName;
-(long long)serviceType;
-(void)dealloc;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(void)continueRegisteringAccount:(id)arg1 ;
-(BOOL)showBusyUIOnAppearance;
-(void)setShowBusyUIOnAppearance:(BOOL)arg1 ;
-(id)_iCloudUserName;
-(void)_handleRegistarResults:(BOOL)arg1 alertController:(id)arg2 ;
-(void)_showSettingsController;
-(void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_completeIfAccountIsAlreadyRegistered;
@end

