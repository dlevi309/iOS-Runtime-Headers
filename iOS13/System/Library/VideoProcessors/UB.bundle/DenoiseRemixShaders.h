/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
#import <UB/UB-Structs.h>
@class DenoiseRemixFragmentShader;

@interface DenoiseRemixShaders : NSObject {

	DenoiseRemixFragmentShader* _denoiseChroma;
	DenoiseRemixFragmentShader* _denoiseLumaDenoiseRemixChroma;
	DenoiseRemixFragmentShader* _denoiseRemixLumaChroma;
	DenoiseRemixFragmentShader* _remixLuma;
	DenoiseRemixFragmentShader* _denoiseRemixLuma;
	id<MTLComputePipelineState> _varianceSharpening;

}
-(id)initWithMetal:(id)arg1 vertFunc:(id)arg2 pixelFormatLuma:(unsigned long long)arg3 pixelFormatChroma:(unsigned long long)arg4 options:(const DenoiseRemixStageOptions*)arg5 ;
@end

