/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCollectionsDataSource.h>

@class NSArray, NSDictionary, PHFetchResult, PXPhotoKitCollectionsDataSourceManagerConfiguration;

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource {

	NSArray* __collectionListBySection;
	NSArray* __collectionsFetchResultBySection;
	NSDictionary* __keyAssetsFetchResultsByCollection;
	NSDictionary* __collectionsIndexPathsByCollection;
	NSDictionary* _itemFetchResultByCollection;
	NSArray* __virtualCollections;
	PHFetchResult* _collectionsFetchResult;
	PXPhotoKitCollectionsDataSourceManagerConfiguration* _configuration;

}

@property (nonatomic,readonly) NSArray * _collectionListBySection;                                               //@synthesize _collectionListBySection=__collectionListBySection - In the implementation block
@property (nonatomic,readonly) NSArray * _collectionsFetchResultBySection;                                       //@synthesize _collectionsFetchResultBySection=__collectionsFetchResultBySection - In the implementation block
@property (nonatomic,readonly) NSDictionary * _keyAssetsFetchResultsByCollection;                                //@synthesize _keyAssetsFetchResultsByCollection=__keyAssetsFetchResultsByCollection - In the implementation block
@property (nonatomic,readonly) NSDictionary * _collectionsIndexPathsByCollection;                                //@synthesize _collectionsIndexPathsByCollection=__collectionsIndexPathsByCollection - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemFetchResultByCollection;                                       //@synthesize itemFetchResultByCollection=_itemFetchResultByCollection - In the implementation block
@property (nonatomic,readonly) NSArray * _virtualCollections;                                                    //@synthesize _virtualCollections=__virtualCollections - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionsFetchResult;                                           //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(long long)estimatedCountForAssetCollection:(id)arg1 withConfiguration:(id)arg2 ;
-(id)_assetAtSimpleIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)content;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(NSArray *)_collectionsFetchResultBySection;
-(NSArray *)_collectionListBySection;
-(id)initWithCollectionListBySection:(id)arg1 collectionsFetchResultBySection:(id)arg2 keyAssetsFetchResultsByCollection:(id)arg3 collectionsIndexPathsByCollection:(id)arg4 itemFetchResultByCollection:(id)arg5 virtualCollections:(id)arg6 collectionsFetchResult:(id)arg7 dataSourceConfiguration:(id)arg8 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSArray *)_virtualCollections;
-(NSDictionary *)_collectionsIndexPathsByCollection;
-(PHFetchResult *)collectionsFetchResult;
-(PXPhotoKitCollectionsDataSourceManagerConfiguration *)configuration;
-(id)existingAssetsFetchResultAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)indexPathForCollection:(id)arg1 ;
-(NSDictionary *)itemFetchResultByCollection;
-(void)enumerateCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)_collectionAtSimpleIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(long long)collectionsListCountForFetchResult:(id)arg1 ;
-(id)_collectionListAtSimpleIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSDictionary *)_keyAssetsFetchResultsByCollection;
-(long long)countForCollection:(id)arg1 ;
-(id)keyAssetsForCollection:(id)arg1 ;
-(long long)collectionsListCountForSection:(long long)arg1 ;
-(id)collectionListForSection:(long long)arg1 ;
-(long long)assetCollectionsCountForFetchResult:(id)arg1 ;
-(long long)assetCollectionsCountForSection:(long long)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
@end

