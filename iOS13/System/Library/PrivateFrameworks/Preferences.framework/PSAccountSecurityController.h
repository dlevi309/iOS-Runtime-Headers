/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)cancelPressed;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
-(void)handleBurnedRecord;
-(void)changeSecurityCode:(id)arg1 ;
-(void)setUseRecovery:(id)arg1 specifier:(id)arg2 ;
-(id)useRecoveryForSepecifier:(id)arg1 ;
-(id)passcodeSpecifiers;
-(void)_setShowsDoneButton:(BOOL)arg1 ;
-(void)setSecurityCode:(NSString *)arg1 ;
-(void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1 ;
-(void)disableRecovery;
-(NSString *)securityCode;
-(void)saveSMSTargetChanges;
-(void)navCancelPressed;
-(void)navDonePressed;
@end

