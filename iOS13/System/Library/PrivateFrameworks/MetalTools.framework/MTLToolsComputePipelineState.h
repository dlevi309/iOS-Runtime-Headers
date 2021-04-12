/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(NSString *)label;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT0)arg1 ;
-(unsigned long long)staticThreadgroupMemoryLength;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned)getComputeKernelTelemetryID;
-(MTLDebugInstrumentationData *)debugInstrumentationData;
-(unsigned long long)resourceIndex;
-(void)acceptVisitor:(id)arg1 ;
@end

