/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStageInputOutputDescriptor.h>

@class MTLBufferLayoutDescriptorArrayInternal, MTLAttributeDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {

	MTLBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLAttributeDescriptorArrayInternal* _attributeArray;
	unsigned long long _indexBufferIndex;
	unsigned long long _indexType;

}
+(id)vertexDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)indexBufferIndex;
-(void)setIndexBufferIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)attributes;
-(id)description;
-(id)layouts;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)indexType;
-(unsigned long long)hash;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2 renderPipelineDescriptor:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)newSerializedDescriptor;
@end

