/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLRenderPipelineState;
@class NSString;

@interface FuseRemixFragmentShader : NSObject {

	id<MTLRenderPipelineState> _pipeline;
	NSString* _fragName;

}
-(id)initWithMetal:(id)arg1 fragName:(id)arg2 pixelFormat:(unsigned long long)arg3 noisePixelFormat:(unsigned long long)arg4 isFirstBatch:(BOOL)arg5 isLastBatch:(BOOL)arg6 usePatchBasedFusion:(BOOL)arg7 ;
@end

