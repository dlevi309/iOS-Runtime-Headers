/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsComputePipelineState.h>

@protocol MTLFunction;
@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {

	unsigned long long _maxThreadPositionInGrid[3];
	unsigned long long _maxThreadsPerGrid[3];
	unsigned long long _maxThreadPositionInThreadgroup[3];
	unsigned long long _maxThreadIndexInThreadgroup[3];
	unsigned long long _maxThreadsPerThreadgroup[3];
	unsigned long long _maxThreadgroupPositionInGrid[3];
	unsigned long long _maxThreadgroupsPerGrid[3];
	unsigned long long _maxStageInGridSize[3];
	unsigned long long _maxStageInGridOrigin[3];
	id<MTLFunction> _function;
	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _reflection;

}

@property (nonatomic,readonly) id<MTLFunction> function;                               //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2 ;
-(id<MTLFunction>)function;
-(MTLComputePipelineDescriptor *)descriptor;
-(id)description;
-(id)functionHandleWithFunction:(id)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)validateHandleForSetFunction:(id)arg1 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 ;
-(id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(MTLComputePipelineReflection *)reflection;
-(id)getParameter:(id)arg1 ;
-(id)functionHandleToDebugFunctionHandle:(id)arg1 parentFunction:(id)arg2 ;
-(BOOL)isAncestorOf:(id)arg1 ;
@end

