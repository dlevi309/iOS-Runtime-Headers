/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLComputePipelineStateSPI.h>

@protocol MTLFunction;
@class MTLDebugInstrumentationData, NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {

	id<MTLFunction> _function;

}

@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportIndirectCommandBuffers;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1 ;
-(long long)textureWriteRoundingMode;
-(unsigned long long)resourceIndex;
-(id)functionPointerHandlesWithFunctions:(id)arg1 range:(NSRange)arg2 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(unsigned long long)threadExecutionWidth;
-(id)functionHandleWithFunction:(id)arg1 ;
-(MTLDebugInstrumentationData *)debugInstrumentationData;
-(id)functionPointerHandleWithFunction:(id)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg1 ;
-(unsigned)getComputeKernelTelemetryID;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT0)arg1 ;
-(NSString *)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)staticThreadgroupMemoryLength;
-(void)dealloc;
-(id)functionHandleToToolsFunctionHandle:(id)arg1 parentFunction:(id)arg2 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 ;
@end

