/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(id)init;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)vertexBufferOffset;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MTLBuffer>)indexBuffer;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)polygonCount;
-(void)setPolygonCount:(unsigned long long)arg1 ;
-(void)validateWithVerticesPerPolygon:(unsigned long long)arg1 vertexStride:(unsigned long long)arg2 indexStride:(unsigned long long)arg3 ;
@end

