/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface SyntheticReferenceShaders : NSObject {

	id<MTLComputePipelineState> _kernel[4];
	id<MTLComputePipelineState> _kernelWithFunctionConstant[1][4];

}
+(BOOL)isValidFunctionConstantCombo:(unsigned)arg1 ;
-(id)initWithMetal:(id)arg1 ;
-(id)getKernel:(int)arg1 ;
-(id)getKernel:(int)arg1 configFlags:(unsigned)arg2 ;
@end

