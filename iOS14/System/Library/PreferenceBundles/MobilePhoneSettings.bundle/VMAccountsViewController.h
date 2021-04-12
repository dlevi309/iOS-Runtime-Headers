/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/VMViewController.h>

@protocol VMAccountsViewControllerDelegate;
@class NSArray, VMAccountsView;

@interface VMAccountsViewController : VMViewController {

	NSArray* _accounts;
	id<VMAccountsViewControllerDelegate> _delegate;
	VMAccountsView* _accountsView;

}

@property (nonatomic,copy) NSArray * accounts;                                                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) VMAccountsView * accountsView;                                     //@synthesize accountsView=_accountsView - In the implementation block
@property (assign,nonatomic,__weak) id<VMAccountsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(id<VMAccountsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)accountAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<VMAccountsViewControllerDelegate>)arg1 ;
-(void)updateAccounts;
-(void)viewDidLoad;
-(void)loadView;
-(void)setAccountsView:(VMAccountsView *)arg1 ;
-(VMAccountsView *)accountsView;
-(void)handleVMVoicemailManagerAccountsDidChangeNotification:(id)arg1 ;
-(void)updateAccountsView;
@end

