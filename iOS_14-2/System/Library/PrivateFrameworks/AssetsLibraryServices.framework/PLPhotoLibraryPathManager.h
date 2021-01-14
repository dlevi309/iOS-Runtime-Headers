/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <libobjc.A.dylib/PLPhotoLibraryPathManager.h>

@protocol PLPhotoLibraryPathManager <PLPhotoLibraryPathManagerCore,PLPhotoLibraryPathManagerModel,PLPhotoLibraryPathManagerDCIM>
@required
+(id)systemLibraryPathManager;
-(id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)photoDirectoryWithType:(unsigned char)arg1;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4;
-(id)externalDirectoryWithSubType:(unsigned char)arg1;
-(id)photosDatabasePath;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5;
-(id)photosAsideDatabasePath;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
-(id)photosCPLDatabasePath;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4;
-(id)privateDirectoryWithSubType:(unsigned char)arg1;
-(id)pathsForExternalWriters;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5;
-(id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
-(id)pathsForClientAccess:(id)arg1;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3;
-(id)pathsForPermissionCheck;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5;

@end


@class PLPhotoLibraryPathManagerCore, NSString, NSURL, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager> {

	PLPhotoLibraryPathManagerCore* _internalPathManager;
	NSString* _singletonPhotoLibraryPath;

}

@property (copy,readonly) NSURL * libraryURL; 
@property (copy,readonly) NSString * baseDirectory; 
@property (nonatomic,readonly) PLFileSystemCapabilities * capabilities; 
@property (copy,readonly) NSString * assetUUIDRecoveryMappingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultRenderFileFormatTypeIdentifier;
+(id)systemLibraryBaseDirectory;
+(id)systemLibraryPathManager;
+(void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg1 ;
+(BOOL)isMultiLibraryModeEnabled;
+(void)throwMultiLibraryAPIMisuse;
+(BOOL)isSystemLibraryURLDefined;
+(BOOL)isSystemPhotoLibraryURL:(id)arg1 ;
+(void)assertSingleLibraryMode;
+(BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id*)arg3 ;
+(id)systemLibraryURL;
+(void)enableMultiLibraryMode;
-(BOOL)sqliteErrorIndicatorFileExists;
-(id)zeroKeywordStoreFilePath;
-(id)searchMetadataStoreFilePath;
-(id)searchIndexManagerDatabaseFilePath;
-(id)searchIndexManagerDatabaseDirectory;
-(void)removeSqliteErrorIndicatorFile;
-(id)recordRebuildReason;
-(id)deletedMemoryUUIDsFilePath;
-(id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2 ;
-(id)photoStreamsDataDirectory;
-(id)cloudSharingArchiveDirectory;
-(id)_rebuildDateFormatter;
-(BOOL)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1 ;
-(void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;
-(void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;
-(void)_abortWithRebuildReasonPLRebuildReasonUnknown;
-(void)_abortWithRebuildReasonPLRebuildReasonCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;
-(void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;
-(void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;
-(long long)lastRebuildReason;
-(void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;
-(void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;
-(void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;
-(void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;
-(id)disableICloudPhotosFilePath;
-(id)enableICloudPhotosFilePath;
-(id)pauseICloudPhotosFilePath;
-(BOOL)isSystemPhotoLibraryPathManager;
-(id)cplDataDirectoryCreateIfNeeded:(BOOL)arg1 ;
-(id)cloudServiceEnableLogFileURL;
-(id)forceSoftResetSyncPath;
-(id)cplEnableMarkerFilePath;
-(id)cplDownloadFinishedMarkerFilePath;
-(id)pathToiPhotoLibraryMediaDir;
-(void)setSqliteErrorForReason:(long long)arg1 allowsExit:(BOOL)arg2 ;
-(id)directoryPathForInFlightComments:(BOOL)arg1 ;
-(id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1 ;
-(id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3 ;
-(id)init;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)description;
-(id)sqliteErrorIndicatorFilePath;
-(id)rebuidHistoryFilePath;
-(id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned char)arg2 ;
-(void)setOrCompareLibraryURL:(id)arg1 ;
-(void)enumerateBundleScopesWithBlock:(/*^block*/id)arg1 ;
-(id)timeMachineExclusionPathForPathType:(unsigned char)arg1 ;
-(BOOL)createTimeMachineExclusionPathsWithError:(id*)arg1 ;
-(id)initWithBaseDirectory:(id)arg1 ;
-(id)redactedDescription;
@end

