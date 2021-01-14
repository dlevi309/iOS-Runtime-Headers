/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <Accounts/ACAccountStore.h>
#import <libobjc.A.dylib/ACRemoteAccountStoreProtocol.h>

@protocol ACDAccountStoreDelegate;
@class NSMutableArray, ACDDatabaseConnection, ACDClientAuthorizationManager, ACDFakeRemoteAccountStoreSession, ACDClient, ACRemoteDeviceProxy, ACDAuthenticationPluginManager, ACDAccessPluginManager, ACDDataclassOwnersManager, ACDAuthenticationDialogManager, ACDAccountNotifier, ACDDatabaseBackupActivity, NSString;

@interface ACDAccountStore : ACAccountStore <ACRemoteAccountStoreProtocol> {

	NSMutableArray* _accountChanges;
	ACDDatabaseConnection* _databaseConnection;
	ACDClientAuthorizationManager* _authorizationManager;
	ACDFakeRemoteAccountStoreSession* _fakeRemoteAccountStoreSession;
	BOOL _notificationsEnabled;
	BOOL _migrationInProgress;
	id<ACDAccountStoreDelegate> _delegate;
	ACDClient* _client;
	ACRemoteDeviceProxy* _remoteDeviceProxy;
	ACDAuthenticationPluginManager* _authenticationPluginManager;
	ACDAccessPluginManager* _accessPluginManager;
	ACDDataclassOwnersManager* _dataclassOwnersManager;
	ACDAuthenticationDialogManager* _authenticationDialogManager;
	ACDAccountNotifier* _accountNotifier;
	ACDDatabaseBackupActivity* _databaseBackupActivity;

}

@property (nonatomic,readonly) ACDDatabaseConnection * databaseConnection;                              //@synthesize databaseConnection=_databaseConnection - In the implementation block
@property (nonatomic,retain) ACDAuthenticationPluginManager * authenticationPluginManager;              //@synthesize authenticationPluginManager=_authenticationPluginManager - In the implementation block
@property (nonatomic,retain) ACDAccessPluginManager * accessPluginManager;                              //@synthesize accessPluginManager=_accessPluginManager - In the implementation block
@property (nonatomic,retain) ACDDataclassOwnersManager * dataclassOwnersManager;                        //@synthesize dataclassOwnersManager=_dataclassOwnersManager - In the implementation block
@property (nonatomic,retain) ACDAuthenticationDialogManager * authenticationDialogManager;              //@synthesize authenticationDialogManager=_authenticationDialogManager - In the implementation block
@property (nonatomic,retain) ACRemoteDeviceProxy * remoteDeviceProxy;                                   //@synthesize remoteDeviceProxy=_remoteDeviceProxy - In the implementation block
@property (nonatomic,retain) ACDAccountNotifier * accountNotifier;                                      //@synthesize accountNotifier=_accountNotifier - In the implementation block
@property (nonatomic,retain) ACDDatabaseBackupActivity * databaseBackupActivity;                        //@synthesize databaseBackupActivity=_databaseBackupActivity - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                                                 //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (assign,getter=isMigrationInProgress,nonatomic) BOOL migrationInProgress;                     //@synthesize migrationInProgress=_migrationInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<ACDAccountStoreDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) ACDClient * client;                                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) ACDClientAuthorizationManager * authorizationManager;                    //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdownAccountsD:(/*^block*/id)arg1 ;
-(ACDAccountNotifier *)accountNotifier;
-(void)canSaveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccountNotifier:(ACDAccountNotifier *)arg1 ;
-(void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithHandler:(/*^block*/id)arg1 ;
-(void)isPushSupportedForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)clientTokenForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)insertAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(ACDAuthenticationDialogManager *)authenticationDialogManager;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(ACRemoteDeviceProxy *)remoteDeviceProxy;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRemoteDeviceProxy:(ACRemoteDeviceProxy *)arg1 ;
-(ACDDatabaseBackupActivity *)databaseBackupActivity;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_canSaveAccount:(id)arg1 error:(id*)arg2 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(ACDClientAuthorizationManager *)authorizationManager;
-(id)_commitOrRollbackDataclassActions:(id)arg1 forAccount:(id)arg2 originalEnabledDataclasses:(id)arg3 ;
-(BOOL)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2 ;
-(id)_allAccounts_sync;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeClientTokenForAccountIdentifer:(id)arg1 ;
-(void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(ACDClient *)client;
-(void)setClient:(ACDClient *)arg1 ;
-(id)_accountWithIdentifier:(id)arg1 ;
-(void)accountTypeWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountExistsWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(ACDAuthenticationPluginManager *)authenticationPluginManager;
-(id)_accountTypeWithIdentifier:(id)arg1 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id<ACDAccountStoreDelegate>)delegate;
-(id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(void)saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)accountsExistWithAccountTypeIdentifier:(id)arg1 ;
-(id)_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setMigrationInProgress:(BOOL)arg1 ;
-(void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id*)arg4 ;
-(BOOL)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2 ;
-(BOOL)_performDataclassActions:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(id)longLivedRemoteAccountStoreSession;
-(void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)addAccountNoSave:(id)arg1 error:(id*)arg2 ;
-(id)_lockForAccountType:(id)arg1 ;
-(void)setAccessPluginManager:(ACDAccessPluginManager *)arg1 ;
-(void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_saveWithError:(id*)arg1 ;
-(void)_delegate_accountStoreDidSaveAccount:(id)arg1 changeType:(int)arg2 ;
-(void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDataclassOwnersManager:(ACDDataclassOwnersManager *)arg1 ;
-(BOOL)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 withError:(id*)arg3 ;
-(void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isMigrationInProgress;
-(void)dataclassActionsForAccountSave:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataclassesWithHandler:(/*^block*/id)arg1 ;
-(id)_childAccountsForAccountWithID:(id)arg1 ;
-(void)setAuthenticationDialogManager:(ACDAuthenticationDialogManager *)arg1 ;
-(void)credentialItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)dataclassActionsForAccountDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<ACDAccountStoreDelegate>)arg1 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)syncableDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 pid:(id)arg2 verify:(BOOL)arg3 dataclassActions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)resetDatabaseToVersion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_accountWithIdentifier:(id)arg1 prefetchKeypaths:(id)arg2 ;
-(BOOL)shouldPreventAccountCreationWithObsoleteAccountType;
-(void)accessKeysForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAuthenticationPluginManager:(ACDAuthenticationPluginManager *)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 ;
-(BOOL)notificationsEnabled;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(ACDDataclassOwnersManager *)dataclassOwnersManager;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_displayAccountForAccount:(id)arg1 ;
-(id)initWithClient:(id)arg1 databaseConnection:(id)arg2 ;
-(void)insertCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAccountNoSave:(id)arg1 error:(id*)arg2 ;
-(void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)credentialForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)supportedDataclassesForAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)accountTypesWithHandler:(/*^block*/id)arg1 ;
-(void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setDatabaseBackupActivity:(ACDDatabaseBackupActivity *)arg1 ;
-(id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2 ;
-(ACDAccessPluginManager *)accessPluginManager;
-(void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteAccountNoSave:(id)arg1 error:(id*)arg2 ;
-(void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)accountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(ACDDatabaseConnection *)databaseConnection;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)remoteAccountStoreSession;
-(id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(id)_accountsWithAcountType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2 error:(id*)arg3 ;
-(void)typeIdentifierForDomain:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveCredentialItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleBackupIfNonexistent:(/*^block*/id)arg1 ;
-(void)saveAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)masterCredentialForAccountIdentifier:(id)arg1 ;
-(void)permissionForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)grantedPermissionsForAccountType:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2 withError:(id*)arg3 ;
-(id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2 ;
-(id)_dataclassWithName:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)migrateCredentialForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_clientTokenQueue;
-(void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

