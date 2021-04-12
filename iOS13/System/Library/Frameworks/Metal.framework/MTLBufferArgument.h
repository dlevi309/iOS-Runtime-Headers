/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLBufferArgument : MTLArgumentInternal {

	unsigned _dataType : 15;
	unsigned _vertexDescriptorBuffer : 1;
	unsigned short _alignment;
	unsigned _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(void)dealloc;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(id)bufferStructType;
-(unsigned long long)bufferDataType;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(BOOL)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12 ;
-(void)setVertexDescriptorBuffer:(BOOL)arg1 ;
-(BOOL)isVertexDescriptorBuffer;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(void)setStructType:(id)arg1 ;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferPixelFormat;
-(unsigned long long)bufferALUType;
-(unsigned long long)bufferDataSize;
-(id)bufferPointerType;
-(id)bufferIndirectArgumentType;
@end

