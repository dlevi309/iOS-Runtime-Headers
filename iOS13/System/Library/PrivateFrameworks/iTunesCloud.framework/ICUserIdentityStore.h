/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICUserIdentityStoreBackendDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICUserIdentityStoreBackend, OS_dispatch_queue;
@class ACAccountStore, ICValueHistory, ICUserIdentityStoreCoding, ICDelegateAccountStore, ICDelegateAccountStoreOptions, ICLocalStoreAccountProperties, NSOperationQueue, NSObject, NSString;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {

	ACAccountStore* _accountStore;
	ICValueHistory* _activeAccountHistory;
	ICValueHistory* _activeLockerAccountHistory;
	id<ICUserIdentityStoreBackend> _backend;
	ICUserIdentityStoreCoding* _codingHelper;
	ICDelegateAccountStore* _delegateAccountStore;
	ICDelegateAccountStoreOptions* _delegateAccountStoreOptions;
	ICLocalStoreAccountProperties* _localStoreAccountProperties;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) long long identityStoreStyle; 
@property (nonatomic,readonly) id<ICUserIdentityStoreBackend> _unsafeBackend; 
@property (nonatomic,readonly) ICLocalStoreAccountProperties * localStoreAccountProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultIdentityStore;
+(id)nullIdentityStore;
+(void)_claimSingleWriterStatus;
+(id)testingIdentityStoreWithDatabasePath:(id)arg1 ;
+(id)testingIdentityStoreWithSingleWriterService:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)synchronize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)DSIDForUserIdentity:(id)arg1 outError:(id*)arg2 ;
-(void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(ICLocalStoreAccountProperties *)localStoreAccountProperties;
-(id)_initCommon;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userIdentityStoreBackendDidChange:(id)arg1 ;
-(void)_prepareDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resetDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllDelegateTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getPropertiesForActiveICloudAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)identityStoreStyle;
-(void)_reloadForExternalChange;
-(void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)userIdentitiesForManageableAccountsWithError:(id*)arg1 ;
-(void)updatePropertiesForLocalStoreAccountUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_initializeLocalStoreAccountProperties;
-(id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2 ;
-(void)_assertNonNullIdentityStoreForSelector:(SEL)arg1 ;
-(void)_dispatchDidChangeNotification:(BOOL)arg1 didDelegateAccountStoreChange:(BOOL)arg2 ;
-(void)_openDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_existingIdentityPropertiesForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_openDelegateAccountStoreForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_dsidForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 andPostAccountChangeNotification:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_saveIdentityProperties:(id)arg1 andPostAccountChangeNotification:(BOOL)arg2 forUserIdentity:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_allowsDelegationForUserIdentity:(id)arg1 ;
-(id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2 ;
-(id)_icValidStoreAccountsFromACAccounts:(id)arg1 ;
-(void)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unregisterForDelegateAccountStoreNotifications:(id)arg1 ;
-(void)_registerForDelegateAccountStoreNotifications:(id)arg1 ;
-(void)_importValuesFromCodingHelper:(id)arg1 ;
-(void)_delegateAccountStoreDidChangeNotification:(id)arg1 ;
-(void)enumerateDelegateTokensUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setActiveAccountWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUserIdentitiesForManageableAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)userIdentitiesForAllStoreAccountsWithError:(id*)arg1 ;
-(void)getuserIdentitiesForAllStoreAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<ICUserIdentityStoreBackend>)_unsafeBackend;
-(void)_unsafe_deleteDelegateAccountStore;
-(void)_updateDelegateAccountStoreUsingBlock:(/*^block*/id)arg1 ;
@end

