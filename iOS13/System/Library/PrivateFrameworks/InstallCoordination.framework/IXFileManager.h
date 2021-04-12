/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@interface IXFileManager : NSObject
+(id)defaultManager;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemExistsAtURL:(id)arg1 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)itemExistsAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(BOOL)_validateSymlink:(id)arg1 withStartingDepth:(unsigned)arg2 andEndingDepth:(unsigned*)arg3 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeACLAtPath:(const char*)arg1 isDir:(BOOL)arg2 error:(id*)arg3 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(BOOL)arg2 error:(id*)arg3 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(BOOL)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(unsigned long long)diskUsageForURL:(id)arg1 ;
-(BOOL)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)itemExistsAtURL:(id)arg1 isDirectory:(BOOL*)arg2 error:(id*)arg3 ;
-(unsigned long long)_diskUsageForDirectoryURL:(id)arg1 ;
-(BOOL)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
@end

