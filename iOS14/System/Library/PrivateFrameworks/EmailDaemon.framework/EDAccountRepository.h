/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransformer:(EDAccountECAccountTransformer *)arg1 ;
-(EDAccountECAccountTransformer *)transformer;
-(void)accountsRemoved:(id)arg1 ;
-(void)setHookRegistry:(EDPersistenceHookRegistry *)arg1 ;
-(id)allAccounts;
-(id<EDAccountsProvider>)accountsProvider;
-(void)accountsChanged:(id)arg1 ;
-(void)setAccountsProvider:(id<EDAccountsProvider>)arg1 ;
-(void)accountsAdded:(id)arg1 ;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)registerObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)transformAccounts:(id)arg1 ;
-(id)initWithAccountsProvider:(id)arg1 hookRegistry:(id)arg2 ;
-(void)allAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

