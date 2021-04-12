/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@interface ACDKeychainManager : NSObject
+(void)initialize;
+(void)createDataclassAccountSyncItemForAccount:(id)arg1 withDataclassActions:(id)arg2 ;
+(id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 allowAdditionalAccountTypeSegment:(BOOL)arg5 options:(id)arg6 error:(id*)arg7 ;
+(void)setServer:(id)arg1 ;
+(void)removeCredentialForAccount:(id)arg1 ;
+(BOOL)_accountSyncItemExistsForServiceName:(id)arg1 username:(id)arg2 ;
+(id)keychainDeletedHostnameAccounts;
+(void)_accountTypeIdentifierFromComponents:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)_fallbackToUnsyncedOAuthTokens:(id)arg1 ;
+(BOOL)_setDataclassSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(BOOL)_accountSyncItemExistsForServiceName:(id)arg1 hostname:(id)arg2 ;
+(id)credentialForManagedAccountObject:(id)arg1 ;
+(id)credentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(id)keychainHostnameAccounts;
+(id)accountSynciOSVersion;
+(BOOL)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 options:(id)arg6 error:(id*)arg7 ;
+(void)_setNonPersistentCredentialTimerForAccount:(id)arg1 ;
+(void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(BOOL)_dataclassSyncItemExistsForServiceName:(id)arg1 username:(id)arg2 ;
+(void)setCredentialForAccount:(id)arg1 ;
+(void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)_shouldSyncCredentialForAccount:(id)arg1 ;
+(BOOL)createAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4 ;
+(BOOL)_setAccountSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id*)arg4 ;
+(id)keychainDeletedAccounts;
+(void)removeCredentialForAccount:(id)arg1 error:(id*)arg2 ;
+(void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(BOOL)arg6 requiresTouchID:(BOOL)arg7 options:(id)arg8 error:(id*)arg9 ;
+(BOOL)removeAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4 ;
+(BOOL)_keychainLock_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)server;
+(BOOL)accountSyncMigrated;
+(id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)_removeCredentialsForAccount:(id)arg1 clientID:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 ;
+(void)removeCredentialForAccount:(id)arg1 key:(id)arg2 error:(id*)arg3 ;
+(void)removeTombstoneForService:(id)arg1 keychainAccountIdentifier:(id)arg2 ;
+(void)removeDataclassAccountSyncItemForAccount:(id)arg1 ;
+(id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)setCredentialForAccount:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)_fetchOptionsForAccount:(id)arg1 ;
+(void)notifiyCredentialChangedForAccount:(id)arg1 ;
+(void)makeItemInvisibleWithService:(id)arg1 andAccount:(id)arg2 ;
+(id)keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 additionalAccountTypeSegment:(id)arg3 key:(id)arg4 ;
+(BOOL)createAccountSyncMigratedItemWithError:(id*)arg1 ;
+(void)componentsFromKeychainServiceName:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)setAccountSynciOSVersion:(id)arg1 ;
+(id)keychainDeletedContactAccounts;
+(id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 ;
+(void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(BOOL)_setAccountSyncMigrateItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)_createNoSyncOAuthTokens:(id)arg1 account:(id)arg2 clientID:(id)arg3 ;
+(id)keychainAccounts;
+(void)_keychainLock_updateItem:(id)arg1 existingPassword:(id)arg2 forServiceName:(id)arg3 username:(id)arg4 accessGroup:(id)arg5 accessibility:(id)arg6 options:(id)arg7 error:(id*)arg8 ;
+(void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(BOOL)_setAccountSyncItem:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)_keychainLock_addItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(BOOL)arg6 requiresTouchID:(BOOL)arg7 error:(id*)arg8 ;
+(void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 ;
+(id)removeTombstonesForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
+(void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3 ;
@end

