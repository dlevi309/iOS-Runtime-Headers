/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(id)accountAtIndex:(unsigned long long)arg1 ;
-(void)updateAccounts;
-(void)viewDidLoad;
-(void)updateView;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(void)cancelAction:(id)arg1 ;
-(void)accountsView:(id)arg1 buttonTappedForRowWithIndex:(unsigned long long)arg2 ;
-(id)titleForAccountsView:(id)arg1 ;
-(unsigned long long)numberOfRowsForAccountsView:(id)arg1 ;
-(id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2 ;
-(VMAccountsViewController *)accountsViewController;
-(void)setSelectedAccount:(VMAccount *)arg1 ;
-(id)passcodeViewControllerForAccount:(id)arg1 ;
-(VMAccount *)selectedAccount;
-(void)setAccountsViewController:(VMAccountsViewController *)arg1 ;
@end

