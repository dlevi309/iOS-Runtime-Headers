/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLRenderPipelineState;
@class NSString;

@interface DenoiseRemixFragmentShader : NSObject {

	id<MTLRenderPipelineState> _pipeline;
	NSString* _fragName;

}
-(id)initWithMetal:(id)arg1 vertFunc:(id)arg2 fragName:(id)arg3 constantValues:(id)arg4 pixelFormat:(unsigned long long)arg5 pixelFormat2:(unsigned long long)arg6 ;
@end

