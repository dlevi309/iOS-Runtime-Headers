/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLComputePipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData, MTLDebugInstrumentationData;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	MTLIndirectArgumentBufferEmulationData* _iabEmulationData;
	MTLDebugInstrumentationData* _debugInstrumentationData;
	BOOL _supportIndirectCommandBuffers;
	long long _textureWriteRoundingMode;
	unsigned long long _resourceIndex;
	unsigned long long _gpuAddress;

}

@property (readonly) NSString * label;                                                               //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * IABEmulationData;              //@synthesize iabEmulationData=_iabEmulationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * debugInstrumentationData;                 //@synthesize debugInstrumentationData=_debugInstrumentationData - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) long long textureWriteRoundingMode; 
@property (nonatomic,readonly) unsigned long long resourceIndex;                                     //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long gpuAddress;                                        //@synthesize gpuAddress=_gpuAddress - In the implementation block
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportIndirectCommandBuffers;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1 ;
-(long long)textureWriteRoundingMode;
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)functionPointerHandlesWithFunctions:(id)arg1 range:(NSRange)arg2 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2 ;
-(void)setDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(unsigned long long)uniqueIdentifier;
-(MTLIndirectArgumentBufferEmulationData *)IABEmulationData;
-(id<MTLDevice>)device;
-(NSString *)description;
-(unsigned long long)gpuAddress;
-(long long)textureWriteFPRoundingMode;
-(id)functionHandleWithFunction:(id)arg1 ;
-(MTLDebugInstrumentationData *)debugInstrumentationData;
-(id)functionPointerHandleWithFunction:(id)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(unsigned)getComputeKernelTelemetryID;
-(void)setIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT31)arg1 ;
-(NSString *)label;
-(void)dealloc;
@end

