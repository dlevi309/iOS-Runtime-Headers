/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@interface ACDKeychain : NSObject
+(id)cache;
+(BOOL)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id*)arg5 ;
+(BOOL)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(BOOL)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(BOOL)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(id)keychainDeletedAccounts;
+(void)_addKnownMigratedKeychainItem:(id)arg1 ;
+(void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(id)_passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 checkInKeybag:(BOOL)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)_migrateKeychainItemIfNecessary:(id)arg1 ;
+(BOOL)canAccessPasswordsWithPolicy:(id)arg1 ;
+(BOOL)_isKnownMigratedKeychainItem:(id)arg1 ;
+(id)_knownMigratedKeychainItems;
@end

