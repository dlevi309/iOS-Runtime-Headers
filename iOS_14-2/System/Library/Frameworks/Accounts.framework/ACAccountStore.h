/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@protocol OS_dispatch_queue;
#import <Accounts/Accounts-Structs.h>
@class NSMutableDictionary, NSXPCListenerEndpoint, ACRemoteAccountStoreSession, ACTimedExpirer, NSObject, NSString, NSArray;

@interface ACAccountStore : NSObject {

	id _daemonAccountStoreDidChangeObserver;
	NSMutableDictionary* _accountCache;
	NSMutableDictionary* _accountsWithAccountTypeCache;
	NSXPCListenerEndpoint* _endpoint;
	ACRemoteAccountStoreSession* _remoteAccountStoreSession;
	os_unfair_lock_s _remoteAccountStoreSessionLock;
	ACTimedExpirer* _remoteAccountStoreSessionExpirer;
	ACRemoteAccountStoreSession* _longLivedRemoteAccountStoreSession;
	os_unfair_lock_s _longLivedRemoteAccountStoreSessionLock;
	ACTimedExpirer* _longLivedRemoteAccountStoreSessionExpirer;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSString* _effectiveBundleID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> replyQueue;                                       //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,readonly) ACRemoteAccountStoreSession * remoteAccountStoreSession; 
@property (nonatomic,readonly) ACRemoteAccountStoreSession * longLivedRemoteAccountStoreSession; 
@property (readonly) id<ACRemoteAccountStoreSessionDelegate> connectionDelegate; 
@property (readonly) NSString * effectiveBundleID;                                                            //@synthesize effectiveBundleID=_effectiveBundleID - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * accounts; 
+(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
+(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
+(BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1 ;
+(id)_obsoleteAccountTypeIDsToRemove;
+(id)_defaultStore;
+(void)_setDefaultStore:(id)arg1 ;
+(void)_setConnectionTimeout:(unsigned long long)arg1 ;
-(void)shutdownAccountsD:(/*^block*/id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)accounts;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id*)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)cachedAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 error:(id*)arg2 ;
-(void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id*)arg4 ;
-(int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 ;
-(void)saveCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)accountIdentifiersEnabledToSyncDataclass:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)provisionedDataclassesForAccount:(id)arg1 error:(id*)arg2 ;
-(void)cachedAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)accountWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_removeObsoleteAccountsInternal:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 withDeleteSync:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(void)insertCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 error:(id*)arg2 ;
-(void)removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1 ;
-(id)syncableDataclassesForAccountType:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_removeObsoleteOSXServerAccountForiOS:(id)arg1 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)displayTypeForAccountWithIdentifier:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 ;
-(void)disconnectFromRemoteAccountStore;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(id)enabledDataclassesForAccount:(id)arg1 error:(id*)arg2 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 ;
-(id)_createSMTPAccountForServerAccount:(id)arg1 ;
-(void)reportTelemetryForLandmarkEvent:(/*^block*/id)arg1 ;
-(void)accountsWithAccountType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)supportedDataclassesForAccountType:(id)arg1 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 ;
-(id)tetheredSyncSourceTypeForDataclass:(id)arg1 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id*)arg3 ;
-(id)dataclassActionsForAccountSave:(id)arg1 error:(id*)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canSaveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)accountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 ;
-(BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 ;
-(id)grantedPermissionsForAccountType:(id)arg1 ;
-(id)provisionedDataclassesForAccount:(id)arg1 ;
-(id)initWithEffectiveBundleID:(id)arg1 ;
-(ACRemoteAccountStoreSession *)longLivedRemoteAccountStoreSession;
-(id<ACRemoteAccountStoreSessionDelegate>)connectionDelegate;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(id)credentialForAccount:(id)arg1 serviceID:(id)arg2 ;
-(id)dataclassActionsForAccountSave:(id)arg1 ;
-(id)parentAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(id)childAccountsForAccount:(id)arg1 error:(id*)arg2 ;
-(id)credentialForAccount:(id)arg1 bundleID:(id)arg2 ;
-(id)appPermissionsForAccountType:(id)arg1 ;
-(id)enabledDataclassesForAccount:(id)arg1 ;
-(id)accessKeysForAccountType:(id)arg1 ;
-(BOOL)saveVerifiedAccount:(id)arg1 error:(id*)arg2 ;
-(id)_sanitizeOptionsDictionary:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 error:(id*)arg2 ;
-(id)allAccountTypes;
-(BOOL)permissionForAccountType:(id)arg1 ;
-(BOOL)hasAccountWithDescription:(id)arg1 ;
-(BOOL)addClientToken:(id)arg1 forAccount:(id)arg2 ;
-(id)_unsanitizeError:(id)arg1 ;
-(id)allDataclasses;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)parentAccountForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)typeIdentifierForDomain:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(id)clientTokenForAccount:(id)arg1 ;
-(void)_clearAccountCaches;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_connectionFailureError;
-(id)allCredentialItems;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithRemoteEndpoint:(id)arg1 ;
-(void)removeObsoleteAccounts:(/*^block*/id)arg1 ;
-(void)resetDatabaseToVersion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)effectiveBundleID;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(ACRemoteAccountStoreSession *)remoteAccountStoreSession;
-(id)accountWithIdentifier:(id)arg1 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleBackupIfNonexistent:(/*^block*/id)arg1 ;
-(void)migrateCredentialForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

