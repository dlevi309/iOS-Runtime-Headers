/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
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

