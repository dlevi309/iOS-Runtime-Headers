/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDAccountChangeHookResponder.h>

@protocol EDAccountsProvider;
@class NSMutableSet, EDAccountECAccountTransformer, EDPersistenceHookRegistry, NSString;

@interface EDAccountRepository : NSObject <EFLoggable, EDAccountChangeHookResponder> {

	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	EDAccountECAccountTransformer* _transformer;
	id<EDAccountsProvider> _accountsProvider;
	EDPersistenceHookRegistry* _hookRegistry;

}

@property (nonatomic,retain) EDAccountECAccountTransformer * transformer;                  //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,retain) id<EDAccountsProvider> accountsProvider;                      //@synthesize accountsProvider=_accountsProvider - In the implementation block
@property (assign,nonatomic,__weak) EDPersistenceHookRegistry * hookRegistry;              //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)dealloc;
-(EDAccountECAccountTransformer *)transformer;
-(void)setTransformer:(EDAccountECAccountTransformer *)arg1 ;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)accountsAdded:(id)arg1 ;
-(void)accountsRemoved:(id)arg1 ;
-(void)accountsChanged:(id)arg1 ;
-(id<EDAccountsProvider>)accountsProvider;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(void)registerObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allAccounts;
-(id)transformAccounts:(id)arg1 ;
-(id)initWithAccountsProvider:(id)arg1 hookRegistry:(id)arg2 ;
-(void)allAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHookRegistry:(EDPersistenceHookRegistry *)arg1 ;
@end

