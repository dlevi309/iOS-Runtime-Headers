/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>

@class NSArray, PSSpecifier, ACAccountStore, NSString, ACUIAccountViewProvidersManager;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {

	BOOL _dontShowSecondLevelOtherAccountTypes;
	NSArray* _preEnabledDataclasses;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	PSSpecifier* _gmailSpecifier;
	ACAccountStore* _accountStore;
	NSString* _filteredDataclass;

}

@property (retain) NSString * filteredDataclass;                                                    //@synthesize filteredDataclass=_filteredDataclass - In the implementation block
@property (nonatomic,readonly) ACUIAccountViewProvidersManager * viewProvidersManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)setFilteredDataclass:(NSString *)arg1 ;
-(NSString *)filteredDataclass;
-(BOOL)shouldAddSpecifierForAccountTypeID:(id)arg1 ;
-(id)_specifierForiCloudAccount;
-(id)_specifierForExchangeAccount;
-(id)_specifiersForRegionalMailAccounts;
-(id)_specifierForGmailAccount;
-(id)_specifierForYahooAccount;
-(id)_specifierForAOLAccount;
-(id)_specifierForOutlookAccount;
-(id)specifierForOtherAccounts;
-(ACUIAccountViewProvidersManager *)viewProvidersManager;
-(id)_specifierForPrimaryiCloudAccount;
-(id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2 ;
-(void)_presentPrimaryAppleIDSignInController:(id)arg1 ;
-(void)_dismissAndBecomeFirstResponder;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2 ;
-(void)_createCustomControlledAccountTapped:(id)arg1 ;
-(void)_alertIfAccountTypePreventsMultiples:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(BOOL)arg1 ;
-(id)_specifierForRegionalAccountType:(id)arg1 ;
-(void)_addAccountSpecifierWasTapped:(id)arg1 ;
-(void)signInControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signInControllerDidCancel;
@end

