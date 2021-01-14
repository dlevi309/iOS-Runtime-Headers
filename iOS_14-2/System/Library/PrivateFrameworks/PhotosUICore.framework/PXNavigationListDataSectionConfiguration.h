/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXNavigationListDataSectionConfiguration : NSObject {

	BOOL _emptyCollectionsHidden;
	BOOL _showSyncedFromMacAlbums;
	BOOL _includeKeyAssetFetches;
	BOOL _includeUserSmartAlbums;
	BOOL _hideHiddenAlbum;
	BOOL _skipKeyAssetFetchesForSmartAlbums;
	BOOL _skipAssetFetches;
	BOOL _skipAssetCountFetches;
	PHCollectionList* _collectionList;
	PHFetchResult* _collectionsFetchResult;
	NSPredicate* _assetsFilterPredicate;

}

@property (nonatomic,readonly) PHCollectionList * collectionList;                   //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionsFetchResult;              //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL emptyCollectionsHidden;                           //@synthesize emptyCollectionsHidden=_emptyCollectionsHidden - In the implementation block
@property (assign,nonatomic) BOOL showSyncedFromMacAlbums;                          //@synthesize showSyncedFromMacAlbums=_showSyncedFromMacAlbums - In the implementation block
@property (assign,nonatomic) BOOL includeKeyAssetFetches;                           //@synthesize includeKeyAssetFetches=_includeKeyAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL includeUserSmartAlbums;                           //@synthesize includeUserSmartAlbums=_includeUserSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL hideHiddenAlbum;                                  //@synthesize hideHiddenAlbum=_hideHiddenAlbum - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;                //@synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL skipAssetFetches;                                 //@synthesize skipAssetFetches=_skipAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL skipAssetCountFetches;                            //@synthesize skipAssetCountFetches=_skipAssetCountFetches - In the implementation block
@property (nonatomic,copy) NSPredicate * assetsFilterPredicate;                     //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
+(id)configurationWithCollectionList:(id)arg1 ;
+(id)configurationWithCollectionsFetchResult:(id)arg1 ;
-(void)setSkipKeyAssetFetchesForSmartAlbums:(BOOL)arg1 ;
-(void)setAssetsFilterPredicate:(NSPredicate *)arg1 ;
-(void)setIncludeKeyAssetFetches:(BOOL)arg1 ;
-(void)setEmptyCollectionsHidden:(BOOL)arg1 ;
-(PHCollectionList *)collectionList;
-(BOOL)hideHiddenAlbum;
-(BOOL)emptyCollectionsHidden;
-(BOOL)includeKeyAssetFetches;
-(BOOL)showSyncedFromMacAlbums;
-(PHFetchResult *)collectionsFetchResult;
-(NSPredicate *)assetsFilterPredicate;
-(BOOL)skipAssetFetches;
-(id)description;
-(BOOL)includeUserSmartAlbums;
-(id)initWithCollectionsFetchResult:(id)arg1 ;
-(void)setShowSyncedFromMacAlbums:(BOOL)arg1 ;
-(void)setSkipAssetCountFetches:(BOOL)arg1 ;
-(BOOL)skipAssetCountFetches;
-(BOOL)skipKeyAssetFetchesForSmartAlbums;
-(void)setIncludeUserSmartAlbums:(BOOL)arg1 ;
-(void)setSkipAssetFetches:(BOOL)arg1 ;
-(void)setHideHiddenAlbum:(BOOL)arg1 ;
-(id)initWithCollectionList:(id)arg1 ;
@end

