/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource : PXAssetsDataSource {

	NSArray* _assetCollections;
	NSDictionary* _assetCollectionsById;
	NSDictionary* _assetsMap;

}

@property (nonatomic,readonly) NSArray * assetCollections;                       //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetCollectionsById;              //@synthesize assetCollectionsById=_assetCollectionsById - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetsMap;                         //@synthesize assetsMap=_assetsMap - In the implementation block
-(id)init;
-(id)allItems;
-(unsigned long long)numberOfItems;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)alreadyImportedCollection;
-(id)allSelectableItems;
-(id)assetCollectionForIdentifier:(id)arg1 ;
-(BOOL)hasAlreadyImportedSection;
-(id)allItemsUnsorted;
-(id)initWithAssetCollections:(id)arg1 assetsMap:(id)arg2 ;
-(id)alreadyImportedItems;
-(id)itemForImportAssetUuid:(id)arg1 ;
-(NSDictionary *)assetCollectionsById;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)description;
-(id)assetCollectionForSection:(unsigned long long)arg1 ;
-(NSArray *)assetCollections;
-(NSDictionary *)assetsMap;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)notYetImportedItems;
-(unsigned long long)numberOfNotYetImportedItems;
-(unsigned long long)numberOfAlreadyImportedItems;
-(long long)sectionForAssetCollection:(id)arg1 ;
-(PXSimpleIndexPath)itemIndexPathForItem:(id)arg1 ;
-(unsigned long long)numberOfSelectableItems;
@end

