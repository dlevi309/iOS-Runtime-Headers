/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLComputePipelineState;
@interface PyramidStageShared : NSObject {

	id<MTLComputePipelineState> _pipeline[2][3];
	id<MTLComputePipelineState> _rec709DownsamplePipelineState[6];

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)getSharedInstanceOrRelease:(BOOL)arg1 ;
+(id)compileShader:(id)arg1 lumaWrite:(BOOL)arg2 chromaType:(int)arg3 ;
+(id)compileShader:(id)arg1 kernelType:(int)arg2 ;
+(BOOL)isRec709DownsampleSupported;
-(id)getPipeline:(id)arg1 lumaWrite:(BOOL)arg2 chromaType:(int)arg3 ;
-(id)getRec709DownsamplePipelineState:(id)arg1 kernelType:(int)arg2 ;
@end

