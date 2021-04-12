/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@interface MPSPolygonBuffer : NSObject <NSCopying, NSSecureCoding> {

	id<MTLBuffer> _vertexBuffer;
	unsigned long long _vertexBufferOffset;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexBufferOffset;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;
	unsigned long long _polygonCount;

}

@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;                         //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long vertexBufferOffset;              //@synthesize vertexBufferOffset=_vertexBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> indexBuffer;                          //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;               //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                           //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;                //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long polygonCount;                    //@synthesize polygonCount=_polygonCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)polygonBuffer;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MTLBuffer>)indexBuffer;
-(id<MTLBuffer>)vertexBuffer;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)vertexBufferOffset;
-(id<MTLBuffer>)maskBuffer;
-(unsigned long long)maskBufferOffset;
-(unsigned long long)polygonCount;
-(void)setPolygonCount:(unsigned long long)arg1 ;
-(void)validateWithVerticesPerPolygon:(unsigned long long)arg1 vertexStride:(unsigned long long)arg2 indexStride:(unsigned long long)arg3 ;
@end

