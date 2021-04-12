/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@interface ACDKeychain : NSObject
+(BOOL)canAccessPasswordsWithPolicy:(id)arg1 ;
+(id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(BOOL)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)keychainDeletedAccounts;
+(BOOL)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id*)arg5 ;
+(BOOL)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(BOOL)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(void)_migrateKeychainItemIfNecessary:(id)arg1 ;
+(id)_knownMigratedKeychainItems;
+(BOOL)_isKnownMigratedKeychainItem:(id)arg1 ;
+(void)_addKnownMigratedKeychainItem:(id)arg1 ;
@end

