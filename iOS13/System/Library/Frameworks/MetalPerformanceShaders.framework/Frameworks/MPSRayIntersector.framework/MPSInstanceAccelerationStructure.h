/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(MPSAxisAlignedBoundingBoxRef)boundingBox;
-(id)initWithDevice:(id)arg1 ;
-(id)statistics;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithGroup:(id)arg1 ;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(void)validate;
-(unsigned long long)instanceCount;
-(unsigned long long)transformType;
-(void)setTransformType:(unsigned long long)arg1 ;
-(void)setAccelerationStructures:(NSArray *)arg1 ;
-(void)setInstanceBuffer:(id<MTLBuffer>)arg1 ;
-(void)setInstanceBufferOffset:(unsigned long long)arg1 ;
-(void)setTransformBuffer:(id<MTLBuffer>)arg1 ;
-(void)setTransformBufferOffset:(unsigned long long)arg1 ;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(void)encodeRefitToCommandBuffer:(id)arg1 ;
-(void)rebuild;
-(id<MTLBuffer>)instanceBuffer;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id<MTLBuffer>)maskBuffer;
-(unsigned long long)maskBufferOffset;
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
-(unsigned long long)branchingFactor;
-(int)nodeLayout;
-(void)rebuildWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sharedInitInstanceAccelerationStructure;
-(void)decodeInstanceAccelerationStructureWithCoder:(id)arg1 ;
-(void)encodeInstanceOffsetsToBuffer:(id)arg1 ;
-(id)copyInstanceAccelerationStructureWithZone:(NSZone*)arg1 device:(id)arg2 group:(id)arg3 ;
-(NSArray *)accelerationStructures;
-(unsigned long long)instanceBufferOffset;
-(id<MTLBuffer>)transformBuffer;
-(unsigned long long)transformBufferOffset;
@end

