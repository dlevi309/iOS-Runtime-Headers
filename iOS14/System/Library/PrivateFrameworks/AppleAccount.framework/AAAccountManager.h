/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accounts;
-(void)reloadAccounts;
-(id)_accountStore;
-(void)removeAccount:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(id)primaryAccount;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(void)saveAllAccounts;
-(id)accountWithPersonID:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)addAccount:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)dealloc;
@end

