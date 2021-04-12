/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDMTLDataBuffer <NSObject,TSDGPUDataBufferSharedAccessors>
@property (assign,nonatomic) unsigned long long metalDrawMode; 
@property (readonly) unsigned long long positionAttributeIndex; 
@property (readonly) unsigned long long texCoordAttributeIndex; 
@property (readonly) unsigned long long centerAttributeIndex; 
@required
+(id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 device:(id)arg4;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 device:(id)arg5;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 device:(id)arg6;
+(id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(CGSize)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 device:(id)arg3;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 textureFlipped:(BOOL)arg3 device:(id)arg4;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;
-(void)setMetalDrawMode:(unsigned long long)arg1;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
-(unsigned long long)metalDrawMode;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3 advanceDynamicBuffer:(BOOL)arg4;
-(void)enableDataBuffer;
-(void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)disableWithDevice:(id)arg1;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(BOOL)arg3;
-(void)updateDataBufferAttributesWithBlock:(/*^block*/id)arg1;
-(unsigned long long)positionAttributeIndex;
-(unsigned long long)texCoordAttributeIndex;
-(unsigned long long)centerAttributeIndex;

@end

