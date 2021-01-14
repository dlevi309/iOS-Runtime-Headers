/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _resourcesAnalyticsDirectory;
	NSString* _externalDirectory;
	NSFileManager* _fm;

}
+(id)systemLibraryPathManager;
-(id)pathToAssetsToAlbumsMapping;
-(id)extendedPathsWithError:(id*)arg1 ;
-(id)baseDirectoryForBundleScope:(unsigned char)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2 ;
-(id)photosDatabasePath;
-(id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)readOnlyUrlWithIdentifier:(id)arg1 ;
-(id)basePrivateDirectoryPath;
-(id)corePathsWithError:(id*)arg1 directDatabaseAccess:(BOOL)arg2 limitedLibrary:(BOOL)arg3 ;
-(id)urlWithIdentifier:(id)arg1 ;
-(void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(/*^block*/id)arg3 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)pathsForExternalWriters;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(BOOL)createPathsForNewLibrariesWithError:(id*)arg1 ;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)syncInfoPath;
-(id)pathsForPermissionCheck;
@end

