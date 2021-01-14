/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@protocol PXDisplayAssetCollection;
@class NSArray;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {

	id<PXDisplayAssetCollection> _collection;
	NSArray* _assets;

}

@property (nonatomic,copy) NSArray * assets;              //@synthesize assets=_assets - In the implementation block
+(id)new;
-(NSArray *)assets;
-(id)initWithDisplayAssets:(id)arg1 collection:(id)arg2 ;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(PXSimpleIndexPath)indexPathForAssetReference:(id)arg1 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(void)setAssets:(NSArray *)arg1 ;
@end

