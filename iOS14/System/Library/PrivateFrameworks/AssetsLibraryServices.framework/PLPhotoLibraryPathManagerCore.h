/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPhotoLibraryPathManager.h>

@class PLFileSystemCapabilities, NSURL, NSString;

@interface PLPhotoLibraryPathManagerCore : NSObject <PLPhotoLibraryPathManager> {

	os_unfair_lock_s _folderCreationAndCapabilitiesLock;
	unsigned _photoDirectoriesExists;
	unsigned _privateSubDirectoriesExists;
	unsigned _privateCacheSubDirectoriesExists;
	unsigned _externalDirectoriesExists;
	unsigned _persistedAlbumDataDirectoryExists;
	PLFileSystemCapabilities* _capabilities;
	NSURL* _libraryURL;
	NSString* _baseDirectory;
	NSString* _assetUUIDRecoveryMappingPath;
	NSString* _iTunesPhotosDirectory;
	NSString* _legacyModelInterestDatabasePath;
	NSString* _legacyMemoriesRelatedSnapshotDirectory;

}

@property (copy) NSURL * libraryURL;                                                         //@synthesize libraryURL=_libraryURL - In the implementation block
@property (copy) NSString * baseDirectory;                                                   //@synthesize baseDirectory=_baseDirectory - In the implementation block
@property (copy) NSString * assetUUIDRecoveryMappingPath;                                    //@synthesize assetUUIDRecoveryMappingPath=_assetUUIDRecoveryMappingPath - In the implementation block
@property (nonatomic,retain) NSString * iTunesPhotosDirectory;                               //@synthesize iTunesPhotosDirectory=_iTunesPhotosDirectory - In the implementation block
@property (nonatomic,retain) NSString * legacyModelInterestDatabasePath;                     //@synthesize legacyModelInterestDatabasePath=_legacyModelInterestDatabasePath - In the implementation block
@property (nonatomic,retain) NSString * legacyMemoriesRelatedSnapshotDirectory;              //@synthesize legacyMemoriesRelatedSnapshotDirectory=_legacyMemoriesRelatedSnapshotDirectory - In the implementation block
@property (nonatomic,readonly) PLFileSystemCapabilities * capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)listenForSystemPhotoLibraryURLChanges;
+(id)_constructLegacySystemPhotoLibraryURLFromUnresolvableBookmark:(id)arg1 ;
+(id)systemLibraryBaseDirectory;
+(id)systemLibraryPathManager;
+(void)recordPrevSystemLibraryPath:(id)arg1 ;
+(BOOL)isSystemLibraryURLDefined;
+(BOOL)setTimeMachineExclusionAttribute:(BOOL)arg1 url:(id)arg2 error:(id*)arg3 ;
+(id)_legacySystemLibraryBookmarkData;
+(BOOL)isSystemPhotoLibraryURL:(id)arg1 ;
+(BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id*)arg3 ;
+(id)_legacySystemLibraryPath;
+(id)systemLibraryURL;
+(id)basenameForSpatialOverCaptureFromOriginalBasename:(id)arg1 ;
+(void)_persistSystemPhotoLibraryPath:(id)arg1 ;
+(id)libraryURLFromDatabaseURL:(id)arg1 ;
+(id)systemLibraryURLIfResolvable;
+(BOOL)isSupportedFileSystemAtURL:(id)arg1 ;
+(void)_updateSystemLibraryURLWithOldValue:(id)arg1 ;
-(NSURL *)libraryURL;
-(void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1 ;
-(id)pathToAssetsToAlbumsMapping;
-(id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(void)setLegacyModelInterestDatabasePath:(NSString *)arg1 ;
-(PLFileSystemCapabilities *)capabilities;
-(BOOL)isDataProtectionComplete;
-(id)baseDirectoryForBundleScope:(unsigned char)arg1 ;
-(id)init;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)photoDirectoryWithType:(unsigned char)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4 ;
-(id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2 ;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 ;
-(BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id*)arg2 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)knownDBPaths;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2 ;
-(id)photosDatabasePath;
-(NSString *)baseDirectory;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5 ;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg1 ;
-(id)modelRestorePostProcessingCompleteTokenPath;
-(id)privateDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)photosAsideDatabasePath;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2 ;
-(id)readOnlyUrlWithIdentifier:(id)arg1 ;
-(id)basePrivateDirectoryPath;
-(id)cloudRestoreForegroundPhaseCompleteTokenPath;
-(void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1 ;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3 ;
-(void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(void)setDataProtectionComplete:(BOOL)arg1 ;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(NSString *)assetUUIDRecoveryMappingPath;
-(id)photosCPLDatabasePath;
-(void)setAssetUUIDRecoveryMappingPath:(NSString *)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 ;
-(id)pathsForExternalWriters;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)iTunesSyncedFaceDataDirectory;
-(BOOL)createDirectoryOnceWithPath:(id)arg1 mask:(unsigned char)arg2 type:(unsigned char)arg3 error:(id*)arg4 ;
-(NSString *)legacyMemoriesRelatedSnapshotDirectory;
-(void)setBaseDirectory:(NSString *)arg1 ;
-(void)setLegacyMemoriesRelatedSnapshotDirectory:(NSString *)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)_dataProtectionIndicatorFilePath;
-(id)cloudRestoreBackgroundPhaseInProgressTokenPath;
-(void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1 ;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(id)initWithBaseDirectory:(id)arg1 ;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(void)postInit;
-(NSString *)iTunesPhotosDirectory;
-(id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(NSString *)legacyModelInterestDatabasePath;
-(void)setITunesPhotosDirectory:(NSString *)arg1 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)cloudRestoreCompleteTokenPath;
-(id)syncInfoPath;
-(id)iTunesSyncedAssetsDirectory;
-(id)pathsForPermissionCheck;
-(id)pathToAssetAlbumOrderStructure;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5 ;
@end

