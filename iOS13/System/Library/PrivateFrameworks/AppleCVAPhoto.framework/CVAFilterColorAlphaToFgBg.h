/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol MTLComputePipelineState;
@class NSString;

@interface CVAFilterColorAlphaToFgBg : NSObject {

	id<MTLComputePipelineState> _splitFgBgKernel_rgba;
	id<MTLComputePipelineState> _splitBgKernel_rgba;
	id<MTLComputePipelineState> _splitFgKernel_rgba;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 error:(id*)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4 dstBackgroundTex:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4 ;
@end

