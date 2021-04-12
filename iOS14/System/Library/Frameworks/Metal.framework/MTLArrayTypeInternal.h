/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(id)elementIndirectArgumentType;
-(unsigned long long)pixelFormat;
-(void)setIndirectArgumentIndexStride:(unsigned long long)arg1 ;
-(BOOL)isIndirectArgumentBuffer;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(unsigned long long)elementType;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(void)setArgumentIndexStride:(unsigned long long)arg1 ;
-(id)elementPointerType;
-(id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 details:(id)arg6 ;
-(unsigned long long)aluType;
-(id)elementTypeDescription;
-(id)elementTextureReferenceType;
-(unsigned long long)argumentIndexStride;
-(BOOL)isArrayLayoutThreadSafeWith:(id)arg1 ;
-(unsigned long long)indirectArgumentIndexStride;
-(id)elementArrayType;
-(void)dealloc;
-(id)elementStructType;
@end

