/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSMapTable, NSString, NSMutableSet, NSMutableDictionary, NSSet;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSString* _serviceToken;
	NSString* _service;
	NSMutableSet* _cachedAccounts;
	NSMutableSet* _enabledAccounts;
	NSMutableDictionary* _transactionIDToHandlersMap;
	BOOL _accountsLoaded;
	BOOL _isLocalAccountVisible;

}

@property (nonatomic,readonly) NSSet * accounts; 
@property (nonatomic,readonly) NSSet * internalAccounts; 
@property (nonatomic,readonly) NSSet * enabledAccounts; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disableAccount:(id)arg1 ;
-(NSSet *)accounts;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2 ;
-(void)_updateLocalAccountVisibility;
-(NSSet *)internalAccounts;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3 ;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeAndDeregisterAccount:(id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(void)accountRemoved:(id)arg1 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadCachedAccountsWithDictionaries:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)daemonDisconnected;
-(id)initWithService:(id)arg1 delegateContext:(id)arg2 ;
-(void)accountAdded:(id)arg1 ;
-(void)_loadCachedAccounts;
-(NSString *)serviceName;
-(void)_removeAccount:(id)arg1 ;
-(NSSet *)enabledAccounts;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2 ;
-(void)enableAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accountUpdated:(id)arg1 ;
-(void)dealloc;
@end

