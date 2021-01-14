/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/


@protocol AIDAServiceOwnerProtocol, AIDAAccountManagerDelegate;
#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
@class NSMutableDictionary, NSDictionary, ACAccountStore;

@interface AIDAAccountManager : NSObject {

	id<AIDAServiceOwnerProtocol> _serviceOwnersManager;
	os_unfair_lock_s _accountManagerLock;
	NSMutableDictionary* _handlerByObserver;
	NSDictionary* _accounts;
	ACAccountStore* _accountStore;
	id<AIDAAccountManagerDelegate> _delegate;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                             //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSDictionary * accounts;                                       //@synthesize accounts=_accounts - In the implementation block
@property (assign,nonatomic,__weak) id<AIDAAccountManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_accountStoreChangeQueue;
-(void)setAccounts:(NSDictionary *)arg1 ;
-(NSDictionary *)accounts;
-(id)init;
-(id)aidaAccountForService:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id<AIDAAccountManagerDelegate>)delegate;
-(ACAccountStore *)accountStore;
-(void)setDelegate:(id<AIDAAccountManagerDelegate>)arg1 ;
-(id)_delegate_accountsForAccountManager;
-(void)removeAccountChangeObserver:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)addAccountChangeObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

