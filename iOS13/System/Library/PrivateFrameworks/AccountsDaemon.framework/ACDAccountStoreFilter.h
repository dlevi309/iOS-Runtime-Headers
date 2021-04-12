/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_whiteList;
-(id)init;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsWithHandler:(/*^block*/id)arg1 ;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accountTypesWithHandler:(/*^block*/id)arg1 ;
-(void)dataclassesWithHandler:(/*^block*/id)arg1 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)credentialItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1 ;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(void)reportTelemetryForLandmarkEvent:(/*^block*/id)arg1 ;
-(void)scheduleBackupIfNonexistent:(/*^block*/id)arg1 ;
-(void)resetDatabaseToVersion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 ;
-(ACDAccountStore *)backingAccountStore;
-(id)initWithBackingAccountStore:(id)arg1 ;
-(BOOL)isClientEntitledToAccessAccountTypeWithIdentifier:(id)arg1 ;
-(BOOL)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2 ;
-(BOOL)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1 ;
-(id)_appPermissionsForAccountTypeIdentifier:(id)arg1 ;
-(BOOL)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1 ;
-(BOOL)_isClientPermittedToAccessAccount:(id)arg1 ;
-(BOOL)_isClientPermittedToRemoveAccount:(id)arg1 ;
-(BOOL)_clientHasPermissionToAddAccount:(id)arg1 ;
-(BOOL)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2 ;
@end

