/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSRayIntersector/MPSAccelerationStructure.h>

@protocol MTLBuffer;
@class NSArray;

@interface MPSInstanceAccelerationStructure : MPSAccelerationStructure {

	unsigned long long _transformType;
	MPSInstanceBVH* _bvh;
	NSArray* _accelerationStructures;
	id<MTLBuffer> _instanceBuffer;
	unsigned long long _instanceBufferOffset;
	id<MTLBuffer> _transformBuffer;
	unsigned long long _transformBufferOffset;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;
	unsigned long long _instanceCount;

}

@property (nonatomic,retain) NSArray * accelerationStructures;                      //@synthesize accelerationStructures=_accelerationStructures - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> instanceBuffer;                          //@synthesize instanceBuffer=_instanceBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long instanceBufferOffset;               //@synthesize instanceBufferOffset=_instanceBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> transformBuffer;                         //@synthesize transformBuffer=_transformBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long transformBufferOffset;              //@synthesize transformBufferOffset=_transformBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long transformType; 
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                              //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;                   //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                      //@synthesize instanceCount=_instanceCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDevice:(id)arg1 ;
-(void)validate;
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)branchingFactor;
-(unsigned long long)instanceCount;
-(id)statistics;
-(unsigned long long)transformType;
-(void)setTransformType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSAxisAlignedBoundingBoxRef)boundingBox;
-(void)rebuild;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(void)dealloc;
-(id<MTLBuffer>)instanceBuffer;
-(id)initWithCoder:(id)arg1 group:(id)arg2 ;
-(void)bindResourcesWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 group:(id)arg2 ;
-(BOOL)useResourceBuffer;
-(void)encodeResourcesToBuffer:(id)arg1 ;
-(MPSBufferRange*)innerNodeBufferRange;
-(MPSBufferRange*)leafNodeBufferRange;
-(MPSBufferRange*)pageTable0BufferRange;
-(MPSBufferRange*)pageTable1BufferRange;
-(MPSBufferRange*)pageBufferRange;
-(int)rootNodeType;
-(unsigned long long)leafNodeCount;
-(unsigned long long)innerNodeCount;
-(int)nodeLayout;
-(void)rebuildWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeRefitToCommandBuffer:(id)arg1 ;
-(void)sharedInitInstanceAccelerationStructure;
-(void)decodeInstanceAccelerationStructureWithCoder:(id)arg1 ;
-(void)encodeInstanceOffsetsToBuffer:(id)arg1 ;
-(id)copyInstanceAccelerationStructureWithZone:(NSZone*)arg1 device:(id)arg2 group:(id)arg3 ;
-(NSArray *)accelerationStructures;
-(void)setAccelerationStructures:(NSArray *)arg1 ;
-(void)setInstanceBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)instanceBufferOffset;
-(void)setInstanceBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)transformBuffer;
-(void)setTransformBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)transformBufferOffset;
-(void)setTransformBufferOffset:(unsigned long long)arg1 ;
@end

