/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {

	unsigned _persistedAlbumDataDirectoryExists;
	NSString* _photoDataDirectory;
	NSString* _photoDataCachesDirectory;
	NSString* _photoDataAnalyticsDirectory;
	NSString* _photoDataSearchDirectory;
	NSString* _restoreInfoDirectory;
	NSString* _dcimDirectory;
	NSString* _cplAssetsDirectory;
	NSString* _cmmAssetsDirectory;
	NSString* _journalsDirectory;
	NSString* _projectsDirectory;
	NSString* _privateDirectory;
	NSString* _changeStoreDatabasePath;
	NSString* _thumbnailsDirectory;
	NSString* _thumbnailsV2Directory;
	NSString* _thumbnailsVideoKeyFramesDirectory;
	BOOL _assetAlbumOrderStructurePathCreated;
	PLImportFileManager* _importFileManager;

}

@property (nonatomic,retain) PLImportFileManager * importFileManager;              //@synthesize importFileManager=_importFileManager - In the implementation block
+(id)systemLibraryPathManager;
-(id)pathToAssetsToAlbumsMapping;
-(PLImportFileManager *)importFileManager;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)getImportFileManager;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)photosDatabasePath;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg1 ;
-(id)modelRestorePostProcessingCompleteTokenPath;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1 ;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2 ;
-(id)photoMetadataDirectory;
-(id)basePrivateDirectoryPath;
-(id)cloudRestoreForegroundPhaseCompleteTokenPath;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)pathsForExternalWriters;
-(id)photoMutationsDirectory;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)iTunesSyncedFaceDataDirectory;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)cloudRestoreBackgroundPhaseInProgressTokenPath;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(void)setImportFileManager:(PLImportFileManager *)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)iTunesPhotosSyncDirectory;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)createPathsForNewLibraries;
-(id)cloudRestoreCompleteTokenPath;
-(id)syncInfoPath;
-(id)iTunesSyncedAssetsDirectory;
-(id)pathsForPermissionCheck;
-(id)pathToAssetAlbumOrderStructure;
@end

