/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLFileSystemCapabilities * capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
+(void)initialize;
+(id)systemLibraryURL;
+(BOOL)isSystemPhotoLibraryURL:(id)arg1 ;
+(id)systemLibraryPathManager;
+(BOOL)isSystemLibraryURLDefined;
+(BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id*)arg3 ;
+(void)recordPrevSystemLibraryPath:(id)arg1 ;
+(id)systemLibraryBaseDirectory;
+(BOOL)setTimeMachineExclusionAttribute:(BOOL)arg1 url:(id)arg2 error:(id*)arg3 ;
+(void)listenForSystemPhotoLibraryURLChanges;
+(BOOL)isSupportedFileSystemAtURL:(id)arg1 ;
+(void)_updateSystemLibraryURLWithOldValue:(id)arg1 ;
+(id)_legacySystemLibraryBookmarkData;
+(id)_legacySystemLibraryPath;
+(id)_constructLegacySystemPhotoLibraryURLFromUnresolvableBookmark:(id)arg1 ;
+(id)systemLibraryURLIfResolvable;
+(id)basenameForSpatialOverCaptureFromOriginalBasename:(id)arg1 ;
-(id)init;
-(PLFileSystemCapabilities *)capabilities;
-(id)initWithBaseDirectory:(id)arg1 ;
-(NSURL *)libraryURL;
-(id)photosDatabasePath;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)photosAsideDatabasePath;
-(id)photoDirectoryWithType:(unsigned char)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1 ;
-(id)syncInfoPath;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)iTunesSyncedAssetsDirectory;
-(NSString *)iTunesPhotosDirectory;
-(id)knownDBPaths;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2 ;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)iTunesSyncedFaceDataDirectory;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4 ;
-(id)pathToAssetAlbumOrderStructure;
-(id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2 ;
-(void)setDataProtectionComplete:(BOOL)arg1 ;
-(BOOL)isDataProtectionComplete;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(NSString *)assetUUIDRecoveryMappingPath;
-(void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 ;
-(id)pathToAssetsToAlbumsMapping;
-(id)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)pathsForExternalWriters;
-(NSString *)baseDirectory;
-(NSString *)legacyMemoriesRelatedSnapshotDirectory;
-(NSString *)legacyModelInterestDatabasePath;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(BOOL)arg2 error:(id*)arg3 ;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)pathsForPermissionCheck;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)baseDirectoryForBundleScope:(unsigned char)arg1 ;
-(id)readOnlyUrlWithIdentifier:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2 ;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg1 ;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2 ;
-(id)photosCPLDatabasePath;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(BOOL)arg3 error:(id*)arg4 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(BOOL)arg4 error:(id*)arg5 ;
-(id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1 ;
-(void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1 ;
-(void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1 ;
-(void)postInit;
-(BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)createDirectoryOnceWithPath:(id)arg1 mask:(unsigned char)arg2 type:(unsigned char)arg3 error:(id*)arg4 ;
-(id)_dataProtectionIndicatorFilePath;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(void)setBaseDirectory:(NSString *)arg1 ;
-(void)setAssetUUIDRecoveryMappingPath:(NSString *)arg1 ;
-(void)setITunesPhotosDirectory:(NSString *)arg1 ;
-(void)setLegacyModelInterestDatabasePath:(NSString *)arg1 ;
-(void)setLegacyMemoriesRelatedSnapshotDirectory:(NSString *)arg1 ;
@end

