/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/


@interface MIFileManager : NSObject
+(id)defaultManager;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemExistsAtURL:(id)arg1 ;
-(id)enumerateURLsForItemsInDirectoryAtURL:(id)arg1 ignoreSymlinks:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)setOwnerOfURL:(id)arg1 toUID:(unsigned)arg2 gid:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(BOOL)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 alwaysClone:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_bulkSetPropertiesForPath:(const char*)arg1 existingFD:(int)arg2 UID:(unsigned)arg3 GID:(unsigned)arg4 mode:(unsigned short)arg5 flags:(unsigned)arg6 dataProtectionClass:(int)arg7 removeACL:(BOOL)arg8 error:(id*)arg9 ;
-(BOOL)bulkSetPropertiesForPath:(const char*)arg1 UID:(unsigned)arg2 GID:(unsigned)arg3 mode:(unsigned short)arg4 flags:(unsigned)arg5 dataProtectionClass:(int)arg6 removeACL:(BOOL)arg7 error:(id*)arg8 ;
-(BOOL)_stageURLByMoving:(id)arg1 toItemName:(id)arg2 inStagingDir:(id)arg3 settingUID:(unsigned)arg4 gid:(unsigned)arg5 hasSymlink:(BOOL*)arg6 error:(id*)arg7 ;
-(BOOL)_stageURLByCopying:(id)arg1 toItemName:(id)arg2 inStagingDir:(id)arg3 stagingMode:(int)arg4 settingUID:(unsigned)arg5 gid:(unsigned)arg6 hasSymlink:(BOOL*)arg7 error:(id*)arg8 ;
-(BOOL)itemExistsAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(BOOL)_validateSymlink:(id)arg1 withStartingDepth:(unsigned)arg2 andEndingDepth:(unsigned*)arg3 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 alwaysClone:(BOOL)arg3 error:(id*)arg4 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeACLAtPath:(const char*)arg1 isDir:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)bulkSetPropertiesForPath:(const char*)arg1 withOpenFD:(int)arg2 UID:(unsigned)arg3 GID:(unsigned)arg4 mode:(unsigned short)arg5 flags:(unsigned)arg6 dataProtectionClass:(int)arg7 removeACL:(BOOL)arg8 error:(id*)arg9 ;
-(BOOL)stageURL:(id)arg1 toItemName:(id)arg2 inStagingDir:(id)arg3 stagingMode:(int)arg4 settingUID:(unsigned)arg5 gid:(unsigned)arg6 hasSymlink:(BOOL*)arg7 error:(id*)arg8 ;
-(BOOL)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned)arg2 GID:(unsigned)arg3 removeACLs:(BOOL)arg4 setProtectionClass:(BOOL)arg5 foundSymlink:(BOOL*)arg6 error:(id*)arg7 ;
-(BOOL)validateSymlinksInURLDoNotEscapeURL:(id)arg1 error:(id*)arg2 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(BOOL)arg2 error:(id*)arg3 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id*)arg2 ;
-(id)upToFirstFourBytesFromURL:(id)arg1 error:(id*)arg2 ;
-(id)aclTextFromURL:(id)arg1 error:(id*)arg2 ;
-(id)extendedAttributesFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(BOOL)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)setPermissionsForURL:(id)arg1 toMode:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(BOOL)arg3 failureIsFatal:(BOOL)arg4 withError:(id*)arg5 ;
-(BOOL)markBundleAsPlaceholder:(id)arg1 withError:(id*)arg2 ;
-(BOOL)bundleAtURLIsPlaceholder:(id)arg1 ;
-(BOOL)setValidatedByFreeProfileAppIdentifier:(id)arg1 insecurelyCachedOnBundle:(id)arg2 error:(id*)arg3 ;
-(id)insecureCachedAppIdentifierIfValidatedByFreeProfileForBundle:(id)arg1 error:(id*)arg2 ;
-(BOOL)setInstallType:(id)arg1 onBundle:(id)arg2 error:(id*)arg3 ;
-(id)installTypeForBundle:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUniqueInstallID:(id)arg1 onBundle:(id)arg2 error:(id*)arg3 ;
-(id)uniqueInstallIDForBundle:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)diskUsageForURL:(id)arg1 ;
@end

