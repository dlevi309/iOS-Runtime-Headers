/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTArchiverBasedStorePersistence : NSObject
+(id)currentVersion;
+(BOOL)isFileNotFoundError:(id)arg1 ;
+(id)readContentFromDiskAtLocation:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
+(BOOL)writeContent:(id)arg1 toDiskAtLocation:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
+(id)dbLocationForStoreLocation:(id)arg1 ;
+(BOOL)_createStoreIfNeededAtLocation:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
+(id)_readContentFromDiskAtLocation:(id)arg1 logger:(id)arg2 error:(id*)arg3 ;
+(BOOL)_createStoreFolderIfNeededAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_writeContent:(id)arg1 toDiskAtLocation:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
+(BOOL)writeVersion:(id)arg1 toDiskAtLocation:(id)arg2 error:(id*)arg3 ;
+(BOOL)_performMigrationIfNeededForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_createStoreEmptyFileIfNeededAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(id)readVersionForStoreAtLocation:(id)arg1 error:(id*)arg2 ;
+(BOOL)_migrateFromPre0_5ToCurrentForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_migrateFromPre0_6ToCurrentForStoreAtLocation:(id)arg1 logger:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(id)_migrateDifferentAvatarKitVersionsForContent:(id)arg1 logger:(id)arg2 ;
+(BOOL)contentExistsAtLocation:(id)arg1 ;
+(BOOL)removeFilesAtLocation:(id)arg1 error:(id*)arg2 ;
@end

