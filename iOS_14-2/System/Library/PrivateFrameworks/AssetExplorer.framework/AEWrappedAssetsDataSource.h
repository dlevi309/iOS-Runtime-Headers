/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource {

	PUAssetsDataSource* __reviewAssetsDataSource;

}

@property (nonatomic,readonly) PUAssetsDataSource * _reviewAssetsDataSource;              //@synthesize _reviewAssetsDataSource=__reviewAssetsDataSource - In the implementation block
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)initWithReviewAssetsDataSource:(id)arg1 ;
-(PUAssetsDataSource *)_reviewAssetsDataSource;
@end

