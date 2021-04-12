/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)bufferStructType;
-(void)setStructType:(id)arg1 ;
-(id)bufferPointerType;
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(unsigned long long)bufferALUType;
-(unsigned long long)bufferPixelFormat;
-(void)setStructType:(id)arg1 doRetain:(BOOL)arg2 ;
-(unsigned long long)bufferDataSize;
-(id)bufferIndirectArgumentType;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(BOOL)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12 ;
-(BOOL)isVertexDescriptorBuffer;
-(void)dealloc;
-(void)setVertexDescriptorBuffer:(BOOL)arg1 ;
@end

