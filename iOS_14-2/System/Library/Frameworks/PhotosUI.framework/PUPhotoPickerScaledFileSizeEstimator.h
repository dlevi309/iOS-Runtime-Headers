/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PHAsset;

@interface PUPhotoPickerScaledFileSizeEstimator : NSObject {

	FigPhotoDecompressionContainerRef _figContainer;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;              //@synthesize asset=_asset - In the implementation block
+(BOOL)isAssetResizable:(id)arg1 ;
-(PHAsset *)asset;
-(BOOL)wouldResizeAssetUsingResizeDescriptor:(id)arg1 ;
-(unsigned long long)estimatedSizeForResizeDescriptor:(id)arg1 ;
-(id)_assetUTI;
-(id)initWithAsset:(id)arg1 ;
-(FigPhotoDecompressionContainerRef)_figContainer;
-(unsigned long long)_assetOriginalSize;
-(CGSize)_targetSizeForResizeDescriptor:(id)arg1 ;
-(unsigned long long)_estimatedSizeForResizeDescriptor:(id)arg1 ;
-(id)_assetURL;
-(void)dealloc;
@end

