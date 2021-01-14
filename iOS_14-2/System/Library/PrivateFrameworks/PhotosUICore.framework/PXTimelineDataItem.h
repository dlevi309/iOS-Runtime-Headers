/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXTimelineCrop, PHAssetCollection;

@interface PXTimelineDataItem : NSObject {

	PXTimelineCrop* _suggestedCrop;
	PHAssetCollection* _assetCollection;

}

@property (nonatomic,retain) PXTimelineCrop * suggestedCrop;                   //@synthesize suggestedCrop=_suggestedCrop - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)assetCollection;
-(id)initWithAssetCollection:(id)arg1 suggestedCrop:(id)arg2 ;
-(PXTimelineCrop *)suggestedCrop;
-(void)setSuggestedCrop:(PXTimelineCrop *)arg1 ;
@end

