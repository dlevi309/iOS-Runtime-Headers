/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {

	unsigned _persistedAlbumDataDirectoryExists;
	NSString* _photoDataDirectory;
	NSString* _photoDataCachesDirectory;
	NSString* _photoDataSearchDirectory;
	NSString* _dcimDirectory;
	NSString* _cplAssetsDirectory;
	NSString* _cmmAssetsDirectory;
	NSString* _journalsDirectory;
	NSString* _projectsDirectory;
	NSString* _changeStoreDatabasePath;
	NSString* _thumbnailsDirectory;
	NSString* _thumbnailsV2Directory;
	BOOL _assetAlbumOrderStructurePathCreated;
	PLImportFileManager* _importFileManager;

}

@property (nonatomic,retain) PLImportFileManager * importFileManager;              //@synthesize importFileManager=_importFileManager - In the implementation block
+(id)systemLibraryPathManager;
-(id)photosDatabasePath;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1 ;
-(id)syncInfoPath;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)iTunesSyncedAssetsDirectory;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)iTunesSyncedFaceDataDirectory;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)pathToAssetAlbumOrderStructure;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(id)pathToAssetsToAlbumsMapping;
-(id)pathsForExternalWriters;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)pathsForPermissionCheck;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)getImportFileManager;
-(id)createPathsForNewLibraries;
-(id)photoMetadataDirectory;
-(id)photoMutationsDirectory;
-(id)iTunesPhotosSyncDirectory;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg1 ;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2 ;
-(PLImportFileManager *)importFileManager;
-(void)setImportFileManager:(PLImportFileManager *)arg1 ;
@end

