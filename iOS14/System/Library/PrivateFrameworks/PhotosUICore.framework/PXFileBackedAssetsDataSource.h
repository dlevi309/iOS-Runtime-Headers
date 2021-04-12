/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class _PXFileBackedAssetCollection, NSDictionary;

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource {

	_PXFileBackedAssetCollection* _assetCollection;
	NSDictionary* _assetCollectionBySection;
	NSDictionary* _assetDescriptionsBySection;

}

@property (nonatomic,copy,readonly) NSDictionary * assetDescriptionsBySection;              //@synthesize assetDescriptionsBySection=_assetDescriptionsBySection - In the implementation block
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)photosGraphSuggestedContributions;
-(id)inputForItem:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithFileBackedAssetDescriptionsBySection:(id)arg1 ;
-(id)assetsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSDictionary *)assetDescriptionsBySection;
-(id)initWithFileURLsBySection:(id)arg1 ;
@end

