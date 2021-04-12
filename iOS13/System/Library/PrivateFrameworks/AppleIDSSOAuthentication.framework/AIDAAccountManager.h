/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<AIDAAccountManagerDelegate>)delegate;
-(void)setDelegate:(id<AIDAAccountManagerDelegate>)arg1 ;
-(NSDictionary *)accounts;
-(id)initWithAccountStore:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setAccounts:(NSDictionary *)arg1 ;
-(void)removeAccountChangeObserver:(id)arg1 ;
-(id)_delegate_accountsForAccountManager;
-(id)aidaAccountForService:(id)arg1 ;
-(id)grandSlamAccountForService:(id)arg1 ;
-(void)addAccountChangeObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

