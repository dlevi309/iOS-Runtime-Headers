/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol MTLComputePipelineState;
@class NSString;

@interface CVAFilterRenderStagelight : NSObject {

	id<MTLComputePipelineState> _renderingStageLightKernel_bothCubes;
	id<MTLComputePipelineState> _renderingStageLightKernel_proxyCube;
	id<MTLComputePipelineState> _renderingStageLightKernel_cube;
	id<MTLComputePipelineState> _renderingStageLightKernel_noCube;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 error:(id*)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstYTex:(id)arg4 dstUVTex:(id)arg5 stageLightProxyLut:(id)arg6 stageLightLut:(id)arg7 blackBackgroundIntensity:(float)arg8 vignetteIntensity:(float)arg9 ;
@end

