/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLIndirectConstantArgument : MTLArgumentInternal {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned short _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)bufferPixelFormat;
-(unsigned long long)bufferALUType;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 pixelFormat:(unsigned long long)arg7 aluType:(unsigned long long)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10 ;
-(unsigned long long)indirectConstantAlignment;
-(unsigned long long)indirectConstantDataType;
-(unsigned long long)indirectConstantDataSize;
@end

