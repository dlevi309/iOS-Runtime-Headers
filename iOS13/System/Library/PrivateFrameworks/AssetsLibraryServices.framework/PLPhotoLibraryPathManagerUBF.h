/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, NSFileManager;

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore {

	NSString* _databaseDirectory;
	NSString* _searchDatabaseDirectory;
	NSString* _originalsDirectory;
	NSString* _privateDirectory;
	NSString* _privateCacheDirectory;
	NSString* _resourcesDirectory;
	NSString* _journalsDirectory;
	NSString* _rendersDirectory;
	NSString* _derivativesDirectory;
	NSString* _derivativesThumbsDirectory;
	NSString* _derivativesMasterThumbsDirectory;
	NSString* _resourcesCPLDataDirectory;
	NSString* _resourcesPhotoStreamsDataDirectory;
	NSString* _resourcesPhotoCloudSharingDirectory;
	NSString* _resourcesPhotoCloudSharingDataDirectory;
	NSString* _resourcesPhotoCloudSharingMetadataDirectory;
	NSString* _resourcesPhotoCloudSharingCacheDirectory;
	NSString* _resourcesProjectsDataDirectory;
	NSString* _resourcesProjectsLegacyDirectory;
	NSString* _resourcesMomentSharedDirectory;
	NSString* _externalDirectory;
	NSFileManager* _fm;

}
+(id)systemLibraryPathManager;
-(id)photosDatabasePath;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)syncInfoPath;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3 ;
-(id)pathToAssetsToAlbumsMapping;
-(id)pathsForExternalWriters;
-(id)_basePrivateDirectoryPath;
-(id)_privateDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)pathsForPermissionCheck;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1 ;
-(id)corePathsWithError:(id*)arg1 directDatabaseAccess:(BOOL)arg2 ;
-(id)extendedPathsWithError:(id*)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)baseDirectoryForBundleScope:(unsigned char)arg1 ;
-(id)urlWithIdentifier:(id)arg1 ;
-(id)readOnlyUrlWithIdentifier:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2 ;
@end

