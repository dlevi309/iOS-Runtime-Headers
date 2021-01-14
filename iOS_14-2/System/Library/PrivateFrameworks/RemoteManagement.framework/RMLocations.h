/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMLocations : NSObject
+(id)homeDirectoryURL;
+(id)managedObjectModelURL;
+(long long)currentDomain;
+(id)statusDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)defaultsOverrideFileURLCreateIfNeeded:(BOOL)arg1 ;
+(id)httpLoggingDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)applicationSupportDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)applicationSupportBaseDirectoryURLInDomain:(long long)arg1 error:(id*)arg2 ;
+(id)dataVaultDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)identityDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)_dataVaultChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 childName:(id)arg3 descriptor:(id)arg4 ;
+(id)persistentStoreDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)persistentStoreDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)defaultsOverrideFileURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)httpLoggingDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)statusDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)URLWithResolvedSymlinksFromURL:(id)arg1 error:(id*)arg2 ;
+(id)applicationSupportDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)dataVaultDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)identityDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)persistentStoreURLCreateIfNeeded:(BOOL)arg1 ;
+(id)darwinUserDirectoryURL;
+(id)darwinCacheDirectoryURL;
+(id)darwinTemporaryDirectoryURL;
+(id)_applicationSupportChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 childName:(id)arg3 descriptor:(id)arg4 ;
@end

