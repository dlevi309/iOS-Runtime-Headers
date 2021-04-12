/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLAccelerationStructureGeometryDescriptor.h>

@protocol MTLBuffer;
@interface MTLAccelerationStructureTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor {

	id<MTLBuffer> _vertexBuffer;
	unsigned long long _vertexBufferOffset;
	unsigned long long _vertexStride;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexBufferOffset;
	unsigned long long _indexType;
	unsigned long long _triangleCount;

}

@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;                         //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long vertexBufferOffset;              //@synthesize vertexBufferOffset=_vertexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStride;                    //@synthesize vertexStride=_vertexStride - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> indexBuffer;                          //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;               //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                       //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) unsigned long long triangleCount;                   //@synthesize triangleCount=_triangleCount - In the implementation block
+(id)descriptor;
-(id)init;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)vertexBufferOffset;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)vertexStride;
-(void)setVertexStride:(unsigned long long)arg1 ;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)indexBuffer;
-(unsigned long long)triangleCount;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)indexType;
-(unsigned long long)hash;
-(void)setTriangleCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

