/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol MTLComputePipelineState;
#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class NSString;

@interface CVAFilterRenderComposite : NSObject {

	id<MTLComputePipelineState> _renderingCompositeFixUpAddNoiseKernel;
	id<MTLComputePipelineState> _renderingCompositeFixupAndBGColorMapKernel;
	id<MTLComputePipelineState> _renderingCompositeFixupAndFGColorMapKernel;
	id<MTLComputePipelineState> _renderingCompositeFixupAndColorMapKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 srcForegroundTex:(id)arg2 srcBackgroundTex:(id)arg3 srcCocTex:(id)arg4 dstYTex:(id)arg5 dstUVTex:(id)arg6 fgColorLut:(id)arg7 bgColorLut:(id)arg8 frameNumber:(unsigned)arg9 seedGeneratorFactor:(unsigned)arg10 noiseBits:(int)arg11 noiseBitsFactor:(float)arg12 cubeIntensity:(float)arg13 maxBlurRadius:(optional<float>=Baligned_storage<float>=(dummy_u=[4c]a4)}}Ref)arg14 ;
@end

