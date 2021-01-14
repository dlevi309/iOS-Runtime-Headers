/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLBuffer;
@interface MTLBVHGeometryDescriptor : NSObject {

	unsigned long long _primitiveCount;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;

}

@property (nonatomic,readonly) unsigned long long primitiveType; 
@property (assign,nonatomic) unsigned long long primitiveCount;                //@synthesize primitiveCount=_primitiveCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                         //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;              //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
-(unsigned long long)primitiveCount;
-(void)setPrimitiveCount:(unsigned long long)arg1 ;
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(void)dealloc;
@end

