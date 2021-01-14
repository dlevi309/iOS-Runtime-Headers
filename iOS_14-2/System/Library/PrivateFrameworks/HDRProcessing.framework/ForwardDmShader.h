/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLComputePipelineState;
@class NSString;

@interface ForwardDmShader : NSObject {

	NSString* _computeKernelName;
	id<MTLComputePipelineState> _computePipeline;

}
-(id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2 Constants:(BOOL*)arg3 ConstantNumber:(unsigned)arg4 ;
-(id)initShaderWithName:(id)arg1 ;
-(id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2 ;
@end

