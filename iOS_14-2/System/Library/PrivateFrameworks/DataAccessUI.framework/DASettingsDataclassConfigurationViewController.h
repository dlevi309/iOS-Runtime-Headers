/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;              //@synthesize daAccount=_daAccount - In the implementation block
-(void)reloadAccount;
-(id)specifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(void)viewDidLoad;
-(id)_navTitle;
-(void)loadView;
-(DAAccount *)daAccount;
-(void)dealloc;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(id)accountDescriptionForFirstTimeSetup;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)setDaAccount:(DAAccount *)arg1 ;
@end

