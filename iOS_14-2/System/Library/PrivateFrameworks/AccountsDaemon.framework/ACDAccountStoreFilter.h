/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <libobjc.A.dylib/ACRemoteAccountStoreProtocol.h>

@class ACDAccountStore, NSString;

@interface ACDAccountStoreFilter : NSObject <ACRemoteAccountStoreProtocol> {

	ACDAccountStore* _backingAccountStore;

}

@property (nonatomic,readonly) ACDAccountStore * backingAccountStore;              //@synthesize backingAccountStore=_backingAccountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(void)shutdownAccountsD:(/*^block*/id)arg1 ;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithHandler:(/*^block*/id)arg1 ;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isClientEntitledToAccessAccountTypeWithIdentifier:(id)arg1 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1 ;
-(void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_clientHasPermissionToAddAccount:(id)arg1 ;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithBackingAccountStore:(id)arg1 ;
-(void)removeCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_appPermissionsForAccountTypeIdentifier:(id)arg1 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataclassesWithHandler:(/*^block*/id)arg1 ;
-(void)credentialItemsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)resetDatabaseToVersion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)accountTypesWithHandler:(/*^block*/id)arg1 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isClientPermittedToRemoveAccount:(id)arg1 ;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleBackupIfNonexistent:(/*^block*/id)arg1 ;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(ACDAccountStore *)backingAccountStore;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2 ;
-(void)migrateCredentialForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isClientPermittedToAccessAccount:(id)arg1 ;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

