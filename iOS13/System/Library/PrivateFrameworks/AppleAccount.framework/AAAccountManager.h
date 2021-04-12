/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)dealloc;
-(void)reloadAccounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)accounts;
-(id)_accountStore;
-(id)primaryAccount;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)saveAllAccounts;
@end

