/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRenderPipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData, MTLDebugInstrumentationData;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	BOOL _threadgroupSizeMatchesTileSize;
	MTLIndirectArgumentBufferEmulationData* _vertexIABEmulationData;
	MTLIndirectArgumentBufferEmulationData* _fragmentIABEmulationData;
	MTLDebugInstrumentationData* _vertexDebugInstrumentationData;
	MTLDebugInstrumentationData* _fragmentDebugInstrumentationData;
	BOOL _supportIndirectCommandBuffers;
	unsigned long long _resourceIndex;

}

@property (readonly) NSString * label;                                                                       //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                                   //@synthesize device=_device - In the implementation block
@property (readonly) BOOL threadgroupSizeMatchesTileSize;                                                    //@synthesize threadgroupSizeMatchesTileSize=_threadgroupSizeMatchesTileSize - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * vertexIABEmulationData;                //@synthesize vertexIABEmulationData=_vertexIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * fragmentIABEmulationData;              //@synthesize fragmentIABEmulationData=_fragmentIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * vertexDebugInstrumentationData;                   //@synthesize vertexDebugInstrumentationData=_vertexDebugInstrumentationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * fragmentDebugInstrumentationData;                 //@synthesize fragmentDebugInstrumentationData=_fragmentDebugInstrumentationData - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (assign,nonatomic) unsigned long long resourceIndex;                                               //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(NSString *)label;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT11)arg1 ;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(BOOL)threadgroupSizeMatchesTileSize;
-(MTLIndirectArgumentBufferEmulationData *)vertexIABEmulationData;
-(MTLIndirectArgumentBufferEmulationData *)fragmentIABEmulationData;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2 ;
-(unsigned)getVertexShaderTelemetryID;
-(unsigned)getFragmentShaderTelemetryID;
-(void)setVertexIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(void)setFragmentIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(void)setVertexDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(void)setFragmentDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
@end

