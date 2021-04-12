/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHFetchResult, PHCollectionList, NSPredicate, PHFetchOptions;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject {

	BOOL _separateSectionsForSmartAndUserCollections;
	BOOL _includePeopleAlbum;
	BOOL _skipKeyAssetFetches;
	BOOL _skipKeyAssetFetchesForSmartAlbums;
	BOOL _skipAssetFetches;
	BOOL _updateKeyAssetFetchesInBackground;
	BOOL _shouldIgnoreLibraryChanges;
	PHFetchResult* _collectionsFetchResult;
	PHCollectionList* _collectionList;
	NSPredicate* _assetsFilterPredicate;
	unsigned long long _assetTypesToInclude;
	unsigned long long _collectionTypesToInclude;

}

@property (assign) BOOL shouldIgnoreLibraryChanges;                                        //@synthesize shouldIgnoreLibraryChanges=_shouldIgnoreLibraryChanges - In the implementation block
@property (readonly) PHCollectionList * collectionList;                                    //@synthesize collectionList=_collectionList - In the implementation block
@property (readonly) PHFetchResult * collectionsFetchResult;                               //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL separateSectionsForSmartAndUserCollections;              //@synthesize separateSectionsForSmartAndUserCollections=_separateSectionsForSmartAndUserCollections - In the implementation block
@property (assign,nonatomic) BOOL includePeopleAlbum;                                      //@synthesize includePeopleAlbum=_includePeopleAlbum - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetches;                                     //@synthesize skipKeyAssetFetches=_skipKeyAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;                       //@synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL skipAssetFetches;                                        //@synthesize skipAssetFetches=_skipAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL updateKeyAssetFetchesInBackground;                       //@synthesize updateKeyAssetFetchesInBackground=_updateKeyAssetFetchesInBackground - In the implementation block
@property (nonatomic,retain) NSPredicate * assetsFilterPredicate;                          //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long assetTypesToInclude;                       //@synthesize assetTypesToInclude=_assetTypesToInclude - In the implementation block
@property (assign,nonatomic) unsigned long long collectionTypesToInclude;                  //@synthesize collectionTypesToInclude=_collectionTypesToInclude - In the implementation block
@property (readonly) PHFetchOptions * customFetchOptions; 
+(id)_generatePredicateForAssetTypesToInclude:(unsigned long long)arg1 ;
-(void)setSkipKeyAssetFetchesForSmartAlbums:(BOOL)arg1 ;
-(void)setAssetsFilterPredicate:(NSPredicate *)arg1 ;
-(void)setIncludePeopleAlbum:(BOOL)arg1 ;
-(id)init;
-(id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2 ;
-(BOOL)isRootFolder;
-(void)setSeparateSectionsForSmartAndUserCollections:(BOOL)arg1 ;
-(BOOL)updateKeyAssetFetchesInBackground;
-(void)setAssetTypesToInclude:(unsigned long long)arg1 ;
-(PHCollectionList *)collectionList;
-(void)setSkipKeyAssetFetches:(BOOL)arg1 ;
-(PHFetchOptions *)customFetchOptions;
-(PHFetchResult *)collectionsFetchResult;
-(NSPredicate *)assetsFilterPredicate;
-(BOOL)skipAssetFetches;
-(id)newConfigurationWithCollectionsFetchResult:(id)arg1 ;
-(id)initWithCollectionsFetchResult:(id)arg1 ;
-(void)setCollectionTypesToInclude:(unsigned long long)arg1 ;
-(unsigned long long)collectionTypesToInclude;
-(BOOL)skipKeyAssetFetches;
-(void)setShouldIgnoreLibraryChanges:(BOOL)arg1 ;
-(unsigned long long)assetTypesToInclude;
-(BOOL)separateSectionsForSmartAndUserCollections;
-(void)setUpdateKeyAssetFetchesInBackground:(BOOL)arg1 ;
-(BOOL)skipKeyAssetFetchesForSmartAlbums;
-(BOOL)includePeopleAlbum;
-(void)setSkipAssetFetches:(BOOL)arg1 ;
-(BOOL)shouldIgnoreLibraryChanges;
-(id)newConfigurationWithCollectionList:(id)arg1 ;
-(id)initWithCollectionList:(id)arg1 ;
-(void)setIsRootFolder:(BOOL)arg1 ;
-(id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2 ;
@end

