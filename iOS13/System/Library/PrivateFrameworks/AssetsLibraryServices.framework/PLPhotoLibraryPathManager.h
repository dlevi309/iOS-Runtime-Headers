/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <libobjc.A.dylib/PLPhotoLibraryPathManager.h>

@protocol PLPhotoLibraryPathManager <PLPhotoLibraryPathManagerCore,PLPhotoLibraryPathManagerModel,PLPhotoLibraryPathManagerDCIM>
@required
+(id)systemLibraryPathManager;
-(id)photosDatabasePath;
-(id)photosAsideDatabasePath;
-(id)photoDirectoryWithType:(unsigned char)arg1;
-(id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4;
-(id)privateDirectoryWithSubType:(unsigned char)arg1;
-(id)pathsForExternalWriters;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)pathsForClientAccess:(id)arg1;
-(id)pathsForPermissionCheck;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1;
-(id)photosCPLDatabasePath;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5;
-(id)externalDirectoryWithSubType:(unsigned char)arg1;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5;

@end


@class PLPhotoLibraryPathManagerCore, NSString, NSURL, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager> {

	PLPhotoLibraryPathManagerCore* _internalPathManager;
	NSString* _singletonPhotoLibraryPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * libraryURL; 
@property (copy,readonly) NSString * baseDirectory; 
@property (nonatomic,readonly) PLFileSystemCapabilities * capabilities; 
@property (copy,readonly) NSString * assetUUIDRecoveryMappingPath; 
+(id)systemLibraryURL;
+(BOOL)isSystemPhotoLibraryURL:(id)arg1 ;
+(id)systemLibraryPathManager;
+(void)assertSingleLibraryMode;
+(BOOL)isSystemLibraryURLDefined;
+(BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id*)arg3 ;
+(BOOL)isMultiLibraryModeEnabled;
+(void)enableMultiLibraryMode;
+(id)systemLibraryBaseDirectory;
+(void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg1 ;
+(void)throwMultiLibraryAPIMisuse;
-(void)removeSqliteErrorIndicatorFile;
-(id)recordRebuildReason;
-(id)deletedMemoryUUIDsFilePath;
-(BOOL)sqliteErrorIndicatorFileExists;
-(void)setSqliteErrorForReason:(long long)arg1 allowsExit:(BOOL)arg2 ;
-(id)zeroKeywordStoreFilePath;
-(id)searchMetadataStoreFilePath;
-(id)searchIndexManagerDatabaseFilePath;
-(id)searchIndexManagerDatabaseDirectory;
-(id)cplDataDirectoryCreateIfNeeded:(BOOL)arg1 ;
-(id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1 ;
-(id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3 ;
-(id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2 ;
-(id)disableICloudPhotosFilePath;
-(id)enableICloudPhotosFilePath;
-(id)pauseICloudPhotosFilePath;
-(id)forceSoftResetSyncPath;
-(id)cplEnableMarkerFilePath;
-(id)cplDownloadFinishedMarkerFilePath;
-(id)pathToiPhotoLibraryMediaDir;
-(id)directoryPathForInFlightComments:(BOOL)arg1 ;
-(id)photoStreamsDataDirectory;
-(id)dataMigratorFinishedFilePath;
-(id)cloudSharingArchiveDirectory;
-(id)_rebuildDateFormatter;
-(BOOL)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1 ;
-(long long)lastRebuildReason;
-(id)init;
-(NSString *)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithBaseDirectory:(id)arg1 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)sqliteErrorIndicatorFilePath;
-(id)rebuidHistoryFilePath;
-(id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned char)arg2 ;
-(void)setOrCompareLibraryURL:(id)arg1 ;
-(void)enumerateBundleScopesWithBlock:(/*^block*/id)arg1 ;
-(id)timeMachineExclusionPathForPathType:(unsigned char)arg1 ;
-(BOOL)createTimeMachineExclusionPathsWithError:(id*)arg1 ;
@end

