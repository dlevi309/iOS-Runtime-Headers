/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICUserIdentityStoreBackendDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICUserIdentityStoreBackend, OS_dispatch_queue;
@class ACAccountStore, ICValueHistory, ICUserIdentityStoreCoding, ICDelegateAccountStore, ICDelegateAccountStoreOptions, ICLocalStoreAccountProperties, NSObject, NSString;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {

	ACAccountStore* _accountStore;
	ICValueHistory* _activeAccountHistory;
	ICValueHistory* _activeLockerAccountHistory;
	id<ICUserIdentityStoreBackend> _backend;
	ICUserIdentityStoreCoding* _codingHelper;
	ICDelegateAccountStore* _delegateAccountStore;
	ICDelegateAccountStoreOptions* _delegateAccountStoreOptions;
	ICLocalStoreAccountProperties* _localStoreAccountProperties;
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
+(void)_claimSingleWriterStatus;
+(id)testingIdentityStoreWithDatabasePath:(id)arg1 ;
+(id)nullIdentityStore;
+(id)testingIdentityStoreWithSingleWriterService:(id)arg1 ;
-(void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_initCommon;
-(id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2 ;
-(id)DSIDForUserIdentity:(id)arg1 outError:(id*)arg2 ;
-(id)getPropertiesForUserIdentity:(id)arg1 error:(id*)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_assertNonNullIdentityStoreForSelector:(SEL)arg1 ;
-(void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_registerForDelegateAccountStoreNotifications:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateDelegateAccountStoreUsingBlock:(/*^block*/id)arg1 ;
-(void)_prepareDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)userIdentitiesForManageableAccountsWithError:(id*)arg1 ;
-(void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getuserIdentitiesForAllStoreAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<ICUserIdentityStoreBackend>)_unsafeBackend;
-(void)_unsafe_deleteDelegateAccountStore;
-(void)_resetDelegateAccountStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllDelegateTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userIdentityStoreBackendDidChange:(id)arg1 ;
-(void)_dispatchDidChangeNotification:(BOOL)arg1 didDelegateAccountStoreChange:(BOOL)arg2 ;
-(void)insertPropertiesForUserIdentity:(id)arg1 andPostAccountChangeNotification:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setActiveAccountWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)userIdentitiesForAllStoreAccountsWithError:(id*)arg1 ;
-(void)synchronize;
-(id)_openDelegateAccountStoreWithError:(id*)arg1 ;
-(void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPropertiesForActiveICloudAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_allowsDelegationForUserIdentity:(id)arg1 ;
-(BOOL)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(BOOL)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_delegateAccountStoreDidChangeNotification:(id)arg1 ;
-(void)enumerateDelegateTokensUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_dsidForUserIdentity:(id)arg1 error:(id*)arg2 ;
-(void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2 ;
-(id)_existingIdentityPropertiesForUserIdentity:(id)arg1 error:(id*)arg2 ;
-(ICLocalStoreAccountProperties *)localStoreAccountProperties;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePropertiesForLocalStoreAccountUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_importValuesFromCodingHelper:(id)arg1 ;
-(long long)identityStoreStyle;
-(void)_initializeLocalStoreAccountProperties;
-(id)_openDelegateAccountStoreForUserIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveIdentityProperties:(id)arg1 andPostAccountChangeNotification:(BOOL)arg2 forUserIdentity:(id)arg3 error:(id*)arg4 ;
-(void)_reloadForExternalChange;
-(void)_unregisterForDelegateAccountStoreNotifications:(id)arg1 ;
-(void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUserIdentitiesForManageableAccountsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_icValidStoreAccountsFromACAccounts:(id)arg1 ;
-(void)dealloc;
@end

