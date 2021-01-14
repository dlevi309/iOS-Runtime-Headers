/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXVideoStabilizationRecipeSource.h>

@class PHAsset;

@interface PXMediaAnalysisVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {

	PHAsset* _asset;
	CGSize _videoDimensions;

}
+(void)cacheRecipe:(id)arg1 forAsset:(id)arg2 ;
+(id)cachedRecipeForAsset:(id)arg1 ;
-(id)_loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2 ;
-(id)initWithAsset:(id)arg1 videoDimensions:(CGSize)arg2 ;
-(id)analyticsPayload;
@end

