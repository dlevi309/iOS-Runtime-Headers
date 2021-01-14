/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PHAssetCollectionDataSource;
@class NSIndexPath;

@interface PUPhotosSharingTransitionContext : NSObject {

	id<PHAssetCollectionDataSource> _assetCollectionsDataSource;
	NSIndexPath* _keyAssetIndexPath;

}

@property (nonatomic,retain) id<PHAssetCollectionDataSource> assetCollectionsDataSource;              //@synthesize assetCollectionsDataSource=_assetCollectionsDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyAssetIndexPath;                                         //@synthesize keyAssetIndexPath=_keyAssetIndexPath - In the implementation block
-(void)setAssetCollectionsDataSource:(id<PHAssetCollectionDataSource>)arg1 ;
-(NSIndexPath *)keyAssetIndexPath;
-(id<PHAssetCollectionDataSource>)assetCollectionsDataSource;
-(void)setKeyAssetIndexPath:(NSIndexPath *)arg1 ;
@end

