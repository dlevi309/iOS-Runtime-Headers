/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAccelerationStructureDescriptor.h>

@protocol MTLBuffer;
@class NSArray;

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {

	id<MTLBuffer> _instanceDescriptorBuffer;
	unsigned long long _instanceDescriptorBufferOffset;
	unsigned long long _instanceDescriptorStride;
	unsigned long long _instanceCount;
	NSArray* _instancedAccelerationStructures;

}

@property (nonatomic,retain) id<MTLBuffer> instanceDescriptorBuffer;                         //@synthesize instanceDescriptorBuffer=_instanceDescriptorBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long instanceDescriptorBufferOffset;              //@synthesize instanceDescriptorBufferOffset=_instanceDescriptorBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceDescriptorStride;                    //@synthesize instanceDescriptorStride=_instanceDescriptorStride - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                               //@synthesize instanceCount=_instanceCount - In the implementation block
@property (nonatomic,retain) NSArray * instancedAccelerationStructures;                      //@synthesize instancedAccelerationStructures=_instancedAccelerationStructures - In the implementation block
+(id)descriptor;
-(id)init;
-(unsigned long long)instanceCount;
-(unsigned long long)instanceDescriptorBufferOffset;
-(id<MTLBuffer>)instanceDescriptorBuffer;
-(NSArray *)instancedAccelerationStructures;
-(unsigned long long)hash;
-(void)setInstanceDescriptorBuffer:(id<MTLBuffer>)arg1 ;
-(void)setInstanceDescriptorBufferOffset:(unsigned long long)arg1 ;
-(void)setInstanceDescriptorStride:(unsigned long long)arg1 ;
-(void)setInstancedAccelerationStructures:(NSArray *)arg1 ;
-(unsigned long long)instanceDescriptorStride;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

