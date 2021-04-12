/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArrayType.h>

@class MTLType;

@interface MTLArrayTypeInternal : MTLArrayType {

	unsigned long long _dataType;
	unsigned _arrayLength : 32;
	unsigned _stride : 32;
	id _details;
	unsigned long long _elementType;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;
	MTLType* _elementTypeInfo;
	BOOL _isIndirectArgumentBuffer;
	unsigned long long _argumentIndexStride;

}

@property (assign) BOOL isIndirectArgumentBuffer;                                         //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
@property (readonly) unsigned long long pixelFormat;                                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long aluType;                                          //@synthesize aluType=_aluType - In the implementation block
@property (assign,nonatomic) unsigned long long argumentIndexStride;                      //@synthesize argumentIndexStride=_argumentIndexStride - In the implementation block
@property (assign,nonatomic) unsigned long long indirectArgumentIndexStride; 
-(void)dealloc;
-(unsigned long long)pixelFormat;
-(unsigned long long)dataType;
-(unsigned long long)arrayLength;
-(unsigned long long)elementType;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isIndirectArgumentBuffer;
-(id)elementStructType;
-(id)elementArrayType;
-(id)elementTypeDescription;
-(id)elementIndirectArgumentType;
-(unsigned long long)indirectArgumentIndexStride;
-(unsigned long long)aluType;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 details:(id)arg6 ;
-(void)setArgumentIndexStride:(unsigned long long)arg1 ;
-(BOOL)isArrayLayoutThreadSafeWith:(id)arg1 ;
-(id)elementTextureReferenceType;
-(id)elementPointerType;
-(void)setIndirectArgumentIndexStride:(unsigned long long)arg1 ;
-(unsigned long long)argumentIndexStride;
@end

