/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSearchDataSourceSectionProvider.h>

@protocol PXSearchDataSourceSectionProviderChangeObserver;
@class NSDictionary, NSArray, PHCachingImageManager, NSString, PHPhotoLibrary;

@interface PXSearchResultsSectionProvider : NSObject <PXSearchDataSourceSectionProvider> {

	id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
	/*^block*/id _assetsSeeAllButtonHandler;
	/*^block*/id _collectionsSeeAllButtonHandler;
	NSDictionary* _sectionIdentifierToSectionMap;
	NSArray* _sectionIdentifiers;
	PHCachingImageManager* _cachingImageManager;
	NSString* _localizedQueryString;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,copy) NSDictionary * sectionIdentifierToSectionMap;                                             //@synthesize sectionIdentifierToSectionMap=_sectionIdentifierToSectionMap - In the implementation block
@property (nonatomic,copy) NSArray * sectionIdentifiers;                                                             //@synthesize sectionIdentifiers=_sectionIdentifiers - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * cachingImageManager;                                            //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (nonatomic,retain) NSString * localizedQueryString;                                                        //@synthesize localizedQueryString=_localizedQueryString - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                        //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,copy) id assetsSeeAllButtonHandler;                                                             //@synthesize assetsSeeAllButtonHandler=_assetsSeeAllButtonHandler - In the implementation block
@property (nonatomic,copy) id collectionsSeeAllButtonHandler;                                                        //@synthesize collectionsSeeAllButtonHandler=_collectionsSeeAllButtonHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic,__weak) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_assetGridLayoutGroupWithEnvironment:(id)arg1 ;
+(id)assetGridLayoutSectionWithEnvironment:(id)arg1 ;
+(id)rowStyleLayoutSectionWithEnvironment:(id)arg1 ;
+(id)_headerViewSupplementaryItem;
-(NSArray *)sectionIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(PHCachingImageManager *)cachingImageManager;
-(void)setSearchResults:(id)arg1 searchAssetResults:(id)arg2 curatedAssetsFetchResult:(id)arg3 reloadItemIdentifiers:(id)arg4 localizedQueryString:(id)arg5 ;
-(id)assetForSearchResult:(id)arg1 ;
-(id)_searchResultsSectionForItemIdentifier:(id)arg1 ;
-(id)assetSearchResultForAsset:(id)arg1 inSection:(long long)arg2 ;
-(id)assetsFetchResultForSection:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 forSection:(id)arg2 sectionHeaderView:(id)arg3 ;
-(unsigned long long)searchResultTypeForSection:(id)arg1 ;
-(long long)_sectionTypeForSearchResult:(id)arg1 ;
-(id)_sectionIdentifierToSectionMapWithResults:(id)arg1 allAssetResults:(id)arg2 assetsFetchResult:(id)arg3 ;
-(long long)_sectionTypeForAssetAggregationType:(unsigned long long)arg1 ;
-(long long)_sectionTypeForCollectionType:(unsigned long long)arg1 ;
-(BOOL)_isTopAssetsSection:(long long)arg1 ;
-(id)_sortedSectionIdentifiersForSections:(id)arg1 ;
-(void)_configureTitledCell:(id)arg1 forSearchResult:(id)arg2 ;
-(void)_configureCellThumbnailImageWithAssetUUID:(id)arg1 orAsset:(id)arg2 forCell:(id)arg3 ;
-(void)_configureCellThumbnailImageWithPersonUUID:(id)arg1 forCell:(id)arg2 ;
-(id)_seeAllButtonTitleForSection:(id)arg1 ;
-(id)_allAssetResultUUIDsForSection:(id)arg1 ;
-(id)assetsSeeAllButtonHandler;
-(void)setAssetsSeeAllButtonHandler:(id)arg1 ;
-(id)collectionsSeeAllButtonHandler;
-(void)setCollectionsSeeAllButtonHandler:(id)arg1 ;
-(NSDictionary *)sectionIdentifierToSectionMap;
-(void)setSectionIdentifierToSectionMap:(NSDictionary *)arg1 ;
-(void)setSectionIdentifiers:(NSArray *)arg1 ;
-(void)setLocalizedQueryString:(NSString *)arg1 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2 ;
-(void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3 ;
-(void)prefetchItemsForItemIdentifiers:(id)arg1 ;
-(void)registerClassesForCellReuseIdentifiers:(/*^block*/id)arg1 ;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id<PXSearchDataSourceSectionProviderChangeObserver>)changeObserver;
-(NSString *)description;
-(BOOL)isSectionExpanded:(id)arg1 ;
-(NSString *)localizedQueryString;
-(unsigned long long)type;
-(void)setCachingImageManager:(PHCachingImageManager *)arg1 ;
-(void)requestImageForAssetUUID:(id)arg1 orAsset:(id)arg2 withPhotoLibrary:(id)arg3 cachingImageManager:(id)arg4 imageRequestSize:(CGSize)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)requestImageForPersonUUID:(id)arg1 photoLibrary:(id)arg2 imageRequestSize:(CGSize)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)searchResultForIdentifier:(id)arg1 ;
-(void)setChangeObserver:(id<PXSearchDataSourceSectionProviderChangeObserver>)arg1 ;
-(id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(UIEdgeInsets)arg3 ;
@end

