/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLBVHGeometryDescriptor.h>

@protocol MTLBuffer;
@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor {

	unsigned long long _polygonType;
	id<MTLBuffer> _vertexBuffer;
	unsigned long long _vertexBufferOffset;
	unsigned long long _vertexStride;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexBufferOffset;
	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long polygonType;                     //@synthesize polygonType=_polygonType - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;                         //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long vertexBufferOffset;              //@synthesize vertexBufferOffset=_vertexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStride;                    //@synthesize vertexStride=_vertexStride - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> indexBuffer;                          //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;               //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                       //@synthesize indexType=_indexType - In the implementation block
-(unsigned long long)polygonType;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)vertexBufferOffset;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)vertexStride;
-(void)setVertexStride:(unsigned long long)arg1 ;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(id<MTLBuffer>)indexBuffer;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)indexType;
-(void)dealloc;
@end

