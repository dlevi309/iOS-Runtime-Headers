/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class PHAsset, NSArray;

@interface PXAssetVariationsDataSource : PXSectionedDataSource {

	PHAsset* _asset;
	NSArray* _variations;

}

@property (nonatomic,copy,readonly) NSArray * variations;              //@synthesize variations=_variations - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                        //@synthesize asset=_asset - In the implementation block
+(id)emptyDataSource;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(PHAsset *)asset;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithVariations:(id)arg1 asset:(id)arg2 ;
-(NSArray *)variations;
@end

