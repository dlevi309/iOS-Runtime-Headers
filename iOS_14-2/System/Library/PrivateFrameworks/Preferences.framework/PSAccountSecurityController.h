/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/KeychainSyncViewControllerDelegate.h>
#import <libobjc.A.dylib/KeychainSyncPhoneSettingsFragmentDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSArray, PSSetupController, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSString, KeychainSyncCountryInfo, PSKeychainSyncManager;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {

	PSSpecifier* _recoverySwitch;
	NSArray* _passcodeSpecifiers;
	PSSetupController* _devicePasscodeChangeSetupController;
	KeychainSyncDevicePINController* _devicePINController;
	KeychainSyncPhoneSettingsFragment* _phoneSettingsFragment;
	NSString* _SMSTarget;
	KeychainSyncCountryInfo* _SMSTargetCountryInfo;
	BOOL _secureBackupEnabled;
	PSKeychainSyncManager* _manager;
	int _securityCodeType;
	NSString* _securityCode;

}

@property (assign,nonatomic) int securityCodeType;                  //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (nonatomic,retain) NSString * securityCode;               //@synthesize securityCode=_securityCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)cancelPressed;
-(id)init;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(void)handleBurnedRecord;
-(void)changeSecurityCode:(id)arg1 ;
-(void)setUseRecovery:(id)arg1 specifier:(id)arg2 ;
-(id)useRecoveryForSepecifier:(id)arg1 ;
-(id)passcodeSpecifiers;
-(void)_setShowsDoneButton:(BOOL)arg1 ;
-(void)setSecurityCode:(NSString *)arg1 ;
-(void)disableRecovery;
-(void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1 ;
-(NSString *)securityCode;
-(void)saveSMSTargetChanges;
-(void)navCancelPressed;
-(void)navDonePressed;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
@end

