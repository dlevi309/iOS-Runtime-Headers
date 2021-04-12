/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;              //@synthesize daAccount=_daAccount - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)specifiers;
-(id)_navTitle;
-(void)_accountsChanged:(id)arg1 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)reloadAccount;
-(void)cancelButtonClicked:(id)arg1 ;
-(DAAccount *)daAccount;
-(id)accountDescriptionForFirstTimeSetup;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)setDaAccount:(DAAccount *)arg1 ;
@end

