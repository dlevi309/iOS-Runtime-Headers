/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPInterAssetAnalyzer : NSObject
+(CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2 ;
+(BOOL)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2 ;
-(id)init;
-(int)_generateLastFrameDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 ;
-(CVBufferRef)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3 ;
-(int)computeDistance:(float*)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(int)computeDistance:(float*)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4 ;
-(int)generateDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(BOOL)arg5 ;
@end

