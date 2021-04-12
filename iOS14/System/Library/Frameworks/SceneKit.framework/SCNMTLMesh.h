/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLBuffer;
@class MTLVertexDescriptor, NSArray, MTLStageInputOutputDescriptor;

@interface SCNMTLMesh : NSObject {

	long long _mutabilityTimestamp;
	MTLVertexDescriptor* _vertexDescriptor;
	MTLVertexDescriptor* _tessellationVertexDescriptor;
	unsigned long long _vertexDescriptorHash;
	unsigned long long _tessellationVertexDescriptorHash;
	NSArray* _buffers;
	NSArray* _elements;
	MTLStageInputOutputDescriptor* _stageDescriptor;
	id<MTLBuffer> _volatileBuffer;
	unsigned long long volatileOffset;
	unsigned long long volatileStride;
	unsigned long long volatileSize;
	long long verticesCount;

}

@property (nonatomic,copy) NSArray * buffers;                                                    //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,copy) NSArray * elements;                                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) MTLStageInputOutputDescriptor * stageDescriptor;                    //@synthesize stageDescriptor=_stageDescriptor - In the implementation block
@property (nonatomic,copy) MTLVertexDescriptor * vertexDescriptor; 
@property (nonatomic,readonly) unsigned long long vertexDescriptorHash; 
@property (nonatomic,readonly) MTLVertexDescriptor * tessellationVertexDescriptor;               //@synthesize tessellationVertexDescriptor=_tessellationVertexDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long tessellationVertexDescriptorHash; 
@property (nonatomic,retain) id<MTLBuffer> volatileBuffer;                                       //@synthesize volatileBuffer=_volatileBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long volatileOffset; 
@property (assign,nonatomic) unsigned long long volatileStride; 
@property (assign,nonatomic) unsigned long long volatileSize; 
@property (assign,nonatomic) long long verticesCount; 
@property (assign,nonatomic) long long mutabilityTimestamp;                                      //@synthesize mutabilityTimestamp=_mutabilityTimestamp - In the implementation block
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(id)description;
-(void)setBuffers:(NSArray *)arg1 ;
-(MTLVertexDescriptor *)vertexDescriptor;
-(NSArray *)buffers;
-(void)setVertexDescriptor:(MTLVertexDescriptor *)arg1 ;
-(void)dealloc;
-(id)bufferForAttribute:(long long)arg1 ;
-(MTLStageInputOutputDescriptor *)stageDescriptor;
-(long long)mutabilityTimestamp;
-(void)setMutabilityTimestamp:(long long)arg1 ;
-(long long)verticesCount;
-(void)setVerticesCount:(long long)arg1 ;
-(void)setVolatileStride:(unsigned long long)arg1 ;
-(id<MTLBuffer>)volatileBuffer;
-(unsigned long long)volatileOffset;
-(unsigned long long)volatileStride;
-(void)setVolatileSize:(unsigned long long)arg1 ;
-(void)setVolatileBuffer:(id<MTLBuffer>)arg1 ;
-(void)setVolatileOffset:(unsigned long long)arg1 ;
-(unsigned long long)volatileSize;
-(unsigned long long)tessellationVertexDescriptorHash;
-(unsigned long long)vertexDescriptorHash;
-(void)buildTessellationVertexDescriptorIfNeeded;
-(MTLVertexDescriptor *)tessellationVertexDescriptor;
-(void)setStageDescriptor:(MTLStageInputOutputDescriptor *)arg1 ;
@end

