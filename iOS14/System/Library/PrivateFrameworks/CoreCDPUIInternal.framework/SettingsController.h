/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)removeSpinnerFromSpecifier:(id)arg1 ;
-(void)promptFor4DigitRemoteSecret:(id)arg1 ;
-(void)_recoverStingrayData:(id)arg1 ;
-(void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptForCustomAlphanumericRemoteSecret:(id)arg1 ;
-(id)_recoverStingrayDataSpecifier;
-(BOOL)_forceInlineUI;
-(id)_recoverAndSyncrhonizeDataSpecifier;
-(void)promptFor4DigitICSC:(id)arg1 ;
-(void)beginIDMSRecoveryWithFailure:(id)arg1 ;
-(void)generateNewRecoveryKey:(id)arg1 ;
-(void)promptForComplexICSC:(id)arg1 ;
-(BOOL)_didUseSMSVerification;
-(void)_loadSpecifiers;
-(void)promptForRandomICSC:(id)arg1 ;
-(void)viewDidLoad;
-(id)_recoveryKeySpecifier;
-(id)_contextForPrimaryAccount;
-(void)setUserDefaultEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)beginIDMSRecoveryPrimary:(id)arg1 ;
-(BOOL)_offerRemoteApproval;
-(void)promptFor6DigitICSC:(id)arg1 ;
-(void)startSpinnerForSpecifier:(id)arg1 ;
-(void)promptForLocalSecret:(id)arg1 ;
-(BOOL)shouldAllowCDPEnrollment;
-(void)beginIDMSRecovery:(id)arg1 ;
-(id)_recoveryKeySpecifierRegen;
-(void)enableCDP:(id)arg1 ;
-(id)_fakeDevicesWithExpectedSecret:(id)arg1 isNumber:(BOOL)arg2 numericLength:(id)arg3 ;
-(void)beginIDMSRecoveryRK:(id)arg1 ;
-(id)getUserDefaultEnabled:(id)arg1 ;
-(void)promptForCustomNumericRemoteSecret:(id)arg1 ;
-(void)promptFor6DigitRemoteSecret:(id)arg1 ;
-(void)beginFMIPRecovery:(id)arg1 ;
-(void)_recoverAndSyncrhonizeStingrayData:(id)arg1 ;
@end

