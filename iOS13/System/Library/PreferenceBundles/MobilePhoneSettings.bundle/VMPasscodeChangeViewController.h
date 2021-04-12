/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/VMNavigationController.h>
#import <libobjc.A.dylib/TPSetPINViewControllerDelegate.h>
#import <libobjc.A.dylib/VMAccountsViewDataSource.h>
#import <libobjc.A.dylib/VMAccountsViewDelegate.h>

@class NSArray, VMAccount, VMAccountsViewController, NSString;

@interface VMPasscodeChangeViewController : VMNavigationController <TPSetPINViewControllerDelegate, VMAccountsViewDataSource, VMAccountsViewDelegate> {

	NSArray* _accounts;
	VMAccount* _selectedAccount;
	VMAccountsViewController* _accountsViewController;

}

@property (nonatomic,copy) NSArray * accounts;                                               //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) VMAccount * selectedAccount;                                    //@synthesize selectedAccount=_selectedAccount - In the implementation block
@property (nonatomic,retain) VMAccountsViewController * accountsViewController;              //@synthesize accountsViewController=_accountsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)accounts;
-(void)viewDidLoad;
-(void)updateView;
-(void)setAccounts:(NSArray *)arg1 ;
-(id)accountAtIndex:(unsigned long long)arg1 ;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(VMAccount *)selectedAccount;
-(void)setSelectedAccount:(VMAccount *)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(void)updateAccounts;
-(VMAccountsViewController *)accountsViewController;
-(id)passcodeViewControllerForAccount:(id)arg1 ;
-(id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfRowsForAccountsView:(id)arg1 ;
-(id)titleForAccountsView:(id)arg1 ;
-(void)accountsView:(id)arg1 buttonTappedForRowWithIndex:(unsigned long long)arg2 ;
-(void)setAccountsViewController:(VMAccountsViewController *)arg1 ;
@end

