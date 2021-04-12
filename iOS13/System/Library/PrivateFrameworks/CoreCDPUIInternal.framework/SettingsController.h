/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CDPAuthProvider.h>

@class CDPUIController, CDPRecoveryTestController, CDPRecoveryController, NSString;

@interface SettingsController : PSListController <CDPAuthProvider> {

	BOOL _didUseSMS;
	CDPUIController* _uiController;
	CDPRecoveryTestController* _recoveryTestController;
	CDPRecoveryController* _recoveryController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)specifiers;
-(void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateNewRecoveryKey:(id)arg1 ;
-(BOOL)_didUseSMSVerification;
-(id)_contextForPrimaryAccount;
-(BOOL)shouldAllowCDPEnrollment;
-(void)startSpinnerForSpecifier:(id)arg1 ;
-(void)_loadSpecifiers;
-(id)_recoverStingrayDataSpecifier;
-(id)_recoverAndSyncrhonizeDataSpecifier;
-(id)_recoveryKeySpecifier;
-(id)_recoveryKeySpecifierRegen;
-(void)enableCDP:(id)arg1 ;
-(void)setUserDefaultEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getUserDefaultEnabled:(id)arg1 ;
-(BOOL)_forceInlineUI;
-(void)_recoverStingrayData:(id)arg1 ;
-(void)removeSpinnerFromSpecifier:(id)arg1 ;
-(void)_recoverAndSyncrhonizeStingrayData:(id)arg1 ;
-(id)_fakeDevicesWithExpectedSecret:(id)arg1 isNumber:(BOOL)arg2 numericLength:(id)arg3 ;
-(BOOL)_offerRemoteApproval;
-(void)promptForLocalSecret:(id)arg1 ;
-(void)promptFor4DigitRemoteSecret:(id)arg1 ;
-(void)promptFor6DigitRemoteSecret:(id)arg1 ;
-(void)promptForCustomNumericRemoteSecret:(id)arg1 ;
-(void)promptForCustomAlphanumericRemoteSecret:(id)arg1 ;
-(void)promptFor4DigitICSC:(id)arg1 ;
-(void)promptFor6DigitICSC:(id)arg1 ;
-(void)promptForComplexICSC:(id)arg1 ;
-(void)promptForRandomICSC:(id)arg1 ;
-(void)beginIDMSRecoveryRK:(id)arg1 ;
-(void)beginIDMSRecovery:(id)arg1 ;
-(void)beginFMIPRecovery:(id)arg1 ;
-(void)beginIDMSRecoveryPrimary:(id)arg1 ;
-(void)beginIDMSRecoveryWithFailure:(id)arg1 ;
@end

