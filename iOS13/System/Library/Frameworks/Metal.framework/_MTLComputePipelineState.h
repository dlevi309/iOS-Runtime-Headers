/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned long long _resourceIndex;

}

@property (readonly) NSString * label;                                                               //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * IABEmulationData;              //@synthesize iabEmulationData=_iabEmulationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * debugInstrumentationData;                 //@synthesize debugInstrumentationData=_debugInstrumentationData - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (assign,nonatomic) unsigned long long resourceIndex;                                       //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(NSString *)label;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT11)arg1 ;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned)getComputeKernelTelemetryID;
-(MTLDebugInstrumentationData *)debugInstrumentationData;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLIndirectArgumentBufferEmulationData *)IABEmulationData;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(void)setIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(void)setDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
@end

