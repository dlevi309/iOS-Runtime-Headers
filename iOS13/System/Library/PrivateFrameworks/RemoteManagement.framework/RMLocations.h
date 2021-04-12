/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMLocations : NSObject
+(id)homeDirectoryURL;
+(id)managedObjectModelURL;
+(id)statusDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)httpLoggingDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(long long)currentDomain;
+(id)applicationSupportDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)applicationSupportBaseDirectoryURLInDomain:(long long)arg1 error:(id*)arg2 ;
+(id)datavaultDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)identityDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)_applicationSupportChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 childName:(id)arg3 descriptor:(id)arg4 ;
+(id)persistentStoreDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)persistentStoreDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)httpLoggingDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)statusDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)URLWithResolvedSymlinksFromURL:(id)arg1 error:(id*)arg2 ;
+(id)applicationSupportDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)datavaultDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)identityDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)persistentStoreURLCreateIfNeeded:(BOOL)arg1 ;
+(id)darwinCacheDirectoryURL;
+(id)darwinTemporaryDirectoryURL;
@end

