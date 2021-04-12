/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState {

	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _reflection;

}

@property (nonatomic,readonly) MTLToolsFunction * computeFunction; 
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
-(void)dealloc;
-(MTLToolsFunction *)computeFunction;
-(MTLComputePipelineReflection *)reflection;
-(id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4 ;
@end

