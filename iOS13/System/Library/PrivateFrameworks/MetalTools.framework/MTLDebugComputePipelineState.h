/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputePipelineState.h>

@protocol MTLFunction;
@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, NSArray;

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
	NSArray* _imageFilterFunctions;
	SCD_Struct_MT62* _imageFilterFunctionInfo;

}

@property (nonatomic,readonly) id<MTLFunction> function;                               //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) NSArray * imageFilterFunctions;                         //@synthesize imageFilterFunctions=_imageFilterFunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT62* imageFilterFunctionInfo;               //@synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo - In the implementation block
-(void)dealloc;
-(id)description;
-(id<MTLFunction>)function;
-(MTLComputePipelineDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLComputePipelineReflection *)reflection;
-(id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(id)getParameter:(id)arg1 ;
-(void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT62*)arg2 ;
-(NSArray *)imageFilterFunctions;
-(SCD_Struct_MT62*)imageFilterFunctionInfo;
@end

